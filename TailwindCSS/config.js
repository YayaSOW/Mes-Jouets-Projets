tailwind.config = {
    theme: {
        extend: {
            colors: {
                my_teal: '#008080',
                pale_orange: '#ffd9a6',
                light_orange: '#fbb03b',
                orange:'#f7931e',
                custom_green: '#00cc66',
                custom_purple: '#990099',
                custom_pink: '#ff99ff'
            },
            fontFamily: {
                sans: ['Bebas Neue', 'sans-serif'],
                slab: ['Roboto Slab', 'serif'],
                title: ['Playfair Display SC', 'serif'],
                light: ['Josefin Slab', 'serif'],
            },
            backgroundImage:{
                mobile: "url('./img/bg1.jpg')",
                desktop: "url('./img/heart.jpg')",
            }
        },
    },
};
