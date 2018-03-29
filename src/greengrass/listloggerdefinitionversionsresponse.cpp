/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listloggerdefinitionversionsresponse.h"
#include "listloggerdefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListLoggerDefinitionVersionsResponse
 *
 * @brief  Handles Greengrass ListLoggerDefinitionVersions responses.
 *
 * @see    GreengrassClient::listLoggerDefinitionVersions
 */

/**
 * @brief  Constructs a new ListLoggerDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLoggerDefinitionVersionsResponse::ListLoggerDefinitionVersionsResponse(
        const ListLoggerDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListLoggerDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListLoggerDefinitionVersionsRequest(request));
    setReply(reply);
}

const ListLoggerDefinitionVersionsRequest * ListLoggerDefinitionVersionsResponse::request() const
{
    Q_D(const ListLoggerDefinitionVersionsResponse);
    return static_cast<const ListLoggerDefinitionVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListLoggerDefinitionVersions response.
 *
 * @param  response  Response to parse.
 */
void ListLoggerDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListLoggerDefinitionVersionsResponsePrivate
 *
 * @brief  Private implementation for ListLoggerDefinitionVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListLoggerDefinitionVersionsResponse instance.
 */
ListLoggerDefinitionVersionsResponsePrivate::ListLoggerDefinitionVersionsResponsePrivate(
    ListLoggerDefinitionVersionsQueueResponse * const q) : ListLoggerDefinitionVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListLoggerDefinitionVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListLoggerDefinitionVersionsResponsePrivate::ListLoggerDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLoggerDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
