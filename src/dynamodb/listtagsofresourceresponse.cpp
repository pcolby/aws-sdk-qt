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

#include "listtagsofresourceresponse.h"
#include "listtagsofresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  ListTagsOfResourceResponse
 *
 * @brief  Handles DynamoDB ListTagsOfResource responses.
 *
 * @see    DynamoDBClient::listTagsOfResource
 */

/**
 * @brief  Constructs a new ListTagsOfResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsOfResourceResponse::ListTagsOfResourceResponse(
        const ListTagsOfResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListTagsOfResourceResponsePrivate(this), parent)
{
    setRequest(new ListTagsOfResourceRequest(request));
    setReply(reply);
}

const ListTagsOfResourceRequest * ListTagsOfResourceResponse::request() const
{
    Q_D(const ListTagsOfResourceResponse);
    return static_cast<const ListTagsOfResourceRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB ListTagsOfResource response.
 *
 * @param  response  Response to parse.
 */
void ListTagsOfResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsOfResourceResponsePrivate
 *
 * @brief  Private implementation for ListTagsOfResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsOfResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsOfResourceResponse instance.
 */
ListTagsOfResourceResponsePrivate::ListTagsOfResourceResponsePrivate(
    ListTagsOfResourceQueueResponse * const q) : ListTagsOfResourcePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB ListTagsOfResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsOfResourceResponsePrivate::ListTagsOfResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsOfResourceResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace AWS
