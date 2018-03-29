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

#include "listtagsforresourceresponse.h"
#include "listtagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  ListTagsForResourceResponse
 *
 * @brief  Handles CloudFront ListTagsForResource responses.
 *
 * @see    CloudFrontClient::listTagsForResource
 */

/**
 * @brief  Constructs a new ListTagsForResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForResourceResponse::ListTagsForResourceResponse(
        const ListTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new ListTagsForResourceRequest(request));
    setReply(reply);
}

const ListTagsForResourceRequest * ListTagsForResourceResponse::request() const
{
    Q_D(const ListTagsForResourceResponse);
    return static_cast<const ListTagsForResourceRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront ListTagsForResource response.
 *
 * @param  response  Response to parse.
 */
void ListTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsForResourceResponsePrivate
 *
 * @brief  Private implementation for ListTagsForResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsForResourceResponse instance.
 */
ListTagsForResourceResponsePrivate::ListTagsForResourceResponsePrivate(
    ListTagsForResourceQueueResponse * const q) : ListTagsForResourcePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront ListTagsForResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsForResourceResponsePrivate::ListTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForResourceResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
