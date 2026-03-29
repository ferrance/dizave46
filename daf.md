todo

## Ergokeeb

So I bought a crkbd 4.1 variant from a vendor on etsy.
What I did not realize is that it mapped the keys to different
pins than a standard crkbd. It meant that I had to create a new
version of the keyboard in QMK with the correct pinouts. This
just meant that I needed to create a copy of the rev4_1 directory
and change its info.json.

cp -R rev4_1 ergokeeb

