/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listloggerdefinitionsresponse.h"
#include "listloggerdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListLoggerDefinitionsResponse
 *
 * @brief  Handles Greengrass ListLoggerDefinitions responses.
 *
 * @see    GreengrassClient::listLoggerDefinitions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLoggerDefinitionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListLoggerDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListLoggerDefinitionsRequest(request));
    setReply(reply);
}

const ListLoggerDefinitionsRequest * ListLoggerDefinitionsResponse::request() const
{
    Q_D(const ListLoggerDefinitionsResponse);
    return static_cast<const ListLoggerDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListLoggerDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListLoggerDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListLoggerDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListLoggerDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListLoggerDefinitionsResponse instance.
 */
ListLoggerDefinitionsResponsePrivate::ListLoggerDefinitionsResponsePrivate(
    ListLoggerDefinitionsQueueResponse * const q) : ListLoggerDefinitionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListLoggerDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListLoggerDefinitionsResponsePrivate::ListLoggerDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLoggerDefinitionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
