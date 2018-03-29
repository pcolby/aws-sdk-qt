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

#include "listgroupresourcesresponse.h"
#include "listgroupresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroups {

/**
 * @class  ListGroupResourcesResponse
 *
 * @brief  Handles ResourceGroups ListGroupResources responses.
 *
 * @see    ResourceGroupsClient::listGroupResources
 */

/**
 * @brief  Constructs a new ListGroupResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupResourcesResponse::ListGroupResourcesResponse(
        const ListGroupResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new ListGroupResourcesResponsePrivate(this), parent)
{
    setRequest(new ListGroupResourcesRequest(request));
    setReply(reply);
}

const ListGroupResourcesRequest * ListGroupResourcesResponse::request() const
{
    Q_D(const ListGroupResourcesResponse);
    return static_cast<const ListGroupResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups ListGroupResources response.
 *
 * @param  response  Response to parse.
 */
void ListGroupResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGroupResourcesResponsePrivate
 *
 * @brief  Private implementation for ListGroupResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGroupResourcesResponse instance.
 */
ListGroupResourcesResponsePrivate::ListGroupResourcesResponsePrivate(
    ListGroupResourcesQueueResponse * const q) : ListGroupResourcesPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups ListGroupResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGroupResourcesResponsePrivate::ListGroupResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupResourcesResponse"));
    /// @todo
}

} // namespace ResourceGroups
} // namespace AWS
