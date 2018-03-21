{% include "license.txt" %}
#include "{{OperationName|lower}}response.h"
#include "{{OperationName|lower}}response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace {{ServiceName}} {

/**
 * @class  {{OperationName}}Response
 *
 * @brief  Handles {{ServiceName}} {{OperationName}} responses.
 *
 * @see    {{ServiceName}}Client::{{OperationName|slice:"0:1"|lower}}{{OperationName|slice:"01:-1"}}
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
{{OperationName}}Response::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : {{ServiceName}}Response(new {{OperationName}}ResponsePrivate(this), parent)
{
    setRequest(new {{OperationName}}Request(request));
    setReply(reply);
}

const {{OperationName}}Request * {{OperationName}}Response::request() const
{
    Q_D(const {{OperationName}}Response);
    return static_cast<const {{OperationName}}Request *>(d->request);
}

/**
 * @brief  Parse a {{ServiceName}} {{OperationName}} response.
 *
 * @param  response  Response to parse.
 */
void {{OperationName}}Response::parseSuccess(QIODevice &response)
{
    Q_D({{Operation}}Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  {{OperationName}}ResponsePrivate
 *
 * @brief  Private implementation for {{OperationName}}Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{OperationName}}ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public {{OperationName}}Response instance.
 */
{{OperationName}}ResponsePrivate::{{OperationName}}ResponsePrivate(
    {{OperationName}}QueueResponse * const q) : {{OperationName}}Private(q)
{

}

/**
 * @brief  Parse an {{ServiceName}} {{OperationName}}Response element.
 *
 * @param  xml  XML stream to parse.
 */
void {{OperationName}}ResponsePrivate::{{OperationName}}Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("{{OperationName}}Response"));
    /// @todo
}
