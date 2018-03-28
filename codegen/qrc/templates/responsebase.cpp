{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace {{NameSpaceNameX}} {

/**
 * @class  {{ClassName}}
 *
 * @brief  Handles {{ServiceName}} {{ClassName|cut:"Response"}} responses.
 *
 * @see    {{ServiceName}}Client::{{ClassName|slice:"0:1"|lower}}{{ClassName|slice:"01:-1"|cut:"Response"}}
 */

/**
 * @brief  Constructs a new {{ClassName}} object.
 *
 * @param  parent   This object's parent.
 */
{{ClassName}}::{{ClassName}}(QObject * const parent)
    : AwsAbstractResponse(new {{ClassName}}Private(this), parent)
{

}

/**
 * @internal
 *
 * @class  {{ClassName}}Private
 *
 * @brief  Private implementation for {{ClassName}}.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object.
 *
 * @param  q  Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private(
    {{ClassName|cut:"Response"}}QueueResponse * const q) : {{ClassName|cut:"Response"}}Private(q)
{

}

} // namespace {{NameSpaceNameX}}
} // namespace AWS
