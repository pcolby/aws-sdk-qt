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

#include "listtagsforresourcesresponse.h"
#include "listtagsforresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListTagsForResourcesResponse
 *
 * @brief  Handles Route53 ListTagsForResources responses.
 *
 * @see    Route53Client::listTagsForResources
 */

/**
 * @brief  Constructs a new ListTagsForResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForResourcesResponse::ListTagsForResourcesResponse(
        const ListTagsForResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTagsForResourcesResponsePrivate(this), parent)
{
    setRequest(new ListTagsForResourcesRequest(request));
    setReply(reply);
}

const ListTagsForResourcesRequest * ListTagsForResourcesResponse::request() const
{
    Q_D(const ListTagsForResourcesResponse);
    return static_cast<const ListTagsForResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListTagsForResources response.
 *
 * @param  response  Response to parse.
 */
void ListTagsForResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsForResourcesResponsePrivate
 *
 * @brief  Private implementation for ListTagsForResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsForResourcesResponse instance.
 */
ListTagsForResourcesResponsePrivate::ListTagsForResourcesResponsePrivate(
    ListTagsForResourcesQueueResponse * const q) : ListTagsForResourcesPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListTagsForResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsForResourcesResponsePrivate::ListTagsForResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForResourcesResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
