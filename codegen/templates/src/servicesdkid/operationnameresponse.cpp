{% include "license.txt" %}
{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
{% with operation.name|add:"Response" as ClassName %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace {{ServiceName}} {

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interace for {{ServiceName}} {{operation.name}} responses.
 *
 * \inmodule QtAws{{ServiceName}}
 *
{% for line in ClassDocumentation %}
 * {% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * \sa {{ServiceName}}Client::{{operation.name|slice:"0:1"|lower}}{{operation.name|slice:"01:-1"}}
 */

/*!
 * Constructs a {{ClassName}} object for \a reply to \a request, with parent \a parent.
 */
{{ClassName}}::{{ClassName}}(
        const {{operation.name}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : {{ServiceName}}Response(new {{ClassName}}Private(this), parent)
{
    setRequest(new {{operation.name}}Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const {{operation.name}}Request * {{ClassName}}::request() const
{
    Q_D(const {{ClassName}});
    return static_cast<const {{operation.name}}Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful {{ServiceName}} {{operation.name}} \a response.
 */
void {{ClassName}}::parseSuccess(QIODevice &response)
{
    //Q_D({{ClassName}});
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \inmodule QtAws{{ServiceName}}
 */

/*!
 * Constructs a {{ClassName}}Private object with public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private(
    {{ClassName}} * const q) : {{ServiceName}}ResponsePrivate(q)
{

}

/*!
 * Parses a {{ServiceName}} {{operation.name}} response element from \a xml.
 */
void {{ClassName}}Private::parse{{ClassName}}(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("{{ClassName}}"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace {{ServiceName}}
} // namespace QtAws
{% endwith %}
{% endwith %}
