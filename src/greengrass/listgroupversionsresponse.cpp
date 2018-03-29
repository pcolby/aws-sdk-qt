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

#include "listgroupversionsresponse.h"
#include "listgroupversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListGroupVersionsResponse
 *
 * @brief  Handles Greengrass ListGroupVersions responses.
 *
 * @see    GreengrassClient::listGroupVersions
 */

/**
 * @brief  Constructs a new ListGroupVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupVersionsResponse::ListGroupVersionsResponse(
        const ListGroupVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListGroupVersionsResponsePrivate(this), parent)
{
    setRequest(new ListGroupVersionsRequest(request));
    setReply(reply);
}

const ListGroupVersionsRequest * ListGroupVersionsResponse::request() const
{
    Q_D(const ListGroupVersionsResponse);
    return static_cast<const ListGroupVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListGroupVersions response.
 *
 * @param  response  Response to parse.
 */
void ListGroupVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGroupVersionsResponsePrivate
 *
 * @brief  Private implementation for ListGroupVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGroupVersionsResponse instance.
 */
ListGroupVersionsResponsePrivate::ListGroupVersionsResponsePrivate(
    ListGroupVersionsQueueResponse * const q) : ListGroupVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListGroupVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGroupVersionsResponsePrivate::ListGroupVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
