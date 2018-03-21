{% include "license.txt" %}
#include "{{ClassName|lower}}response.h"
#include "{{ClassName|lower}}response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace {{ServiceName}} {

/**
 * @class  {{ClassName}}Response
 *
 * @brief  Handles {{ServiceName}} {{ClassName}} responses.
 *
 * @see    {{ServiceName}}Client::{{ClassName|slice:"0:1"|lower}}{{ClassName|slice:"01:-1"}}
 */

/**
 * @brief  Constructs a new {{ClassName}}Response object.
 *
 * @param  parent   This object's parent.
 */
{{ClassName}}Response::{{ClassName}}Response(QObject * const parent)
    : AwsAbstractResponse(new {{ClassName}}ResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  {{ClassName}}ResponsePrivate
 *
 * @brief  Private implementation for {{ClassName}}Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public {{ClassName}}Response instance.
 */
{{ClassName}}ResponsePrivate::{{ClassName}}ResponsePrivate(
    {{ClassName}}QueueResponse * const q) : {{ClassName}}Private(q)
{

}

} // namespace {{ServiceName}}
} // namespace AWS
