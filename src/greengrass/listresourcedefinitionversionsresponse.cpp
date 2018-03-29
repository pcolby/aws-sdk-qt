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

#include "listresourcedefinitionversionsresponse.h"
#include "listresourcedefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListResourceDefinitionVersionsResponse
 *
 * @brief  Handles Greengrass ListResourceDefinitionVersions responses.
 *
 * @see    GreengrassClient::listResourceDefinitionVersions
 */

/**
 * @brief  Constructs a new ListResourceDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceDefinitionVersionsResponse::ListResourceDefinitionVersionsResponse(
        const ListResourceDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListResourceDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListResourceDefinitionVersionsRequest(request));
    setReply(reply);
}

const ListResourceDefinitionVersionsRequest * ListResourceDefinitionVersionsResponse::request() const
{
    Q_D(const ListResourceDefinitionVersionsResponse);
    return static_cast<const ListResourceDefinitionVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListResourceDefinitionVersions response.
 *
 * @param  response  Response to parse.
 */
void ListResourceDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourceDefinitionVersionsResponsePrivate
 *
 * @brief  Private implementation for ListResourceDefinitionVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDefinitionVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourceDefinitionVersionsResponse instance.
 */
ListResourceDefinitionVersionsResponsePrivate::ListResourceDefinitionVersionsResponsePrivate(
    ListResourceDefinitionVersionsQueueResponse * const q) : ListResourceDefinitionVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListResourceDefinitionVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourceDefinitionVersionsResponsePrivate::ListResourceDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
