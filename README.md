todo

![crkbd dizave42](https://raw.githubusercontent.com/ferrance/dizave46/main/images/dizave46.png)

## Legal layer

I've rethought this layer during the port to vial, using tapdance for families of legal key.

P3d/F3d - hit one for F.3d, twice for F.2d
NMCA - hit once for -NMCA-, twice for -NMSC-

## Leader Key

I'm giving the leader key a try for things I have to type a lot.
Here's what is in there so far:

| code  | expands to 
| ----- | ---
| A     | Albuquerque
| BERN  | Bernalillo
| CA    | Court of Appeals
| CO    | (citation omitted)
| CY    | County
| EA    | (emphasis added)
| NM    | New Mexico
| NMCA  | New Mexico Court of Appeals
| NMSC  | New Mexico Supreme Court
| PO    | P.O. Box
| PR    | Personal Representative
| ROG   | Interrogatory
| SA    | Supervised Administrator
| SC    | Supreme Court

# Builds

Todo get this working for rev1

'```
qmk compile -c -kb crkbd/ergokeeb/standard -km dizave46
```

## Ergokeeb

So I bought a crkbd 4.1 variant from a vendor on etsy.
What I did not realize is that it mapped the keys to different
pins than a standard crkbd. It meant that I had to create a new
version of the keyboard in QMK with the correct pinouts. This
just meant that I needed to create a copy of the rev4_1 directory
and change its info.json.

cp -R rev4_1 ergokeeb

