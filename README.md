## Dijk-Path

<p align="center"><img src="https://github.com/Razzaz/djik-path/blob/master/logo.svg" width="180"></img></p>
<p align="center">
<a href="https://travis-ci.org/Razzaz/djik-path"><img src="https://travis-ci.org/Razzaz/djik-path.svg?branch=master" alt="Build Status"></a>
<a href='https://coveralls.io/github/Razzaz/djik-path?branch=master'><img src='https://coveralls.io/repos/github/Razzaz/djik-path/badge.svg?branch=master' alt='Coverage Status' /></a>
</p>

You can use the [editor on GitHub](https://github.com/Razzaz/djik-path/edit/master/README.md) to maintain and preview the content for your website in Markdown files.

```java
// Create a new hystrix-wrapped HTTP client with the command name, along with other required options
client := hystrix.NewClient(
	hystrix.WithHTTPTimeout(10 * time.Millisecond),
	hystrix.WithCommandName("google_get_request"),
	hystrix.WithHystrixTimeout(1000),
	hystrix.WithMaxConcurrentRequests(30),
	hystrix.WithErrorPercentThreshold(20),
)

// The rest is the same as the previous example
```

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/Razzaz/djik-path/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
