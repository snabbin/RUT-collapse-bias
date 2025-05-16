# Recursive Universe Theory (RUT)

This repository presents a working simulation, formal theory, and experimental proposal exploring whether **quantum collapse** is biased toward **symbolically compressible states**, rather than governed purely by the Born rule.

## Core Idea

Collapse events (like photons hitting a detector) may resolve toward the **simplest possible symbolic outcome**—as measured by compression algorithms like zlib. This would imply a preference toward low-Kolmogorov complexity during collapse.

## What's Inside

- `/simulations`: Python and C code that consistently selects lowest-complexity strings
- `/docs`: The complete theory, peer review, and critique responses
- `/experiment`: The "Recursive Universe Test" (RUT) hardware plan and Pi Pico logging code

## Try It Yourself

```bash
python collapse_symbolic_tokens.py
# or
gcc compress_c_test.c -o collapse_test -lz && ./collapse_test
```

## Physical Experiment (RUT)

We're constructing a basic beam-splitter rig to shine polarized laser light through symbolic encodings (e.g. "00000000", "01010101") and measure which detector collapses the wavefunction. Bias would indicate a preference—violating the Born rule.

## Who Built This?

Isaiah Newman — just a guy from Camrose who couldn't let go of one question:
> *"What if collapse isn't random?"*

## Contribute / Replicate

Want to build the RUT or help test collapse bias experimentally?  
Pull requests, issues, and feedback are welcome.

## License

MIT License (or CC-BY 4.0)
