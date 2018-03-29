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

#include "listresourcetagsresponse.h"
#include "listresourcetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  ListResourceTagsResponse
 *
 * @brief  Handles KMS ListResourceTags responses.
 *
 * @see    KMSClient::listResourceTags
 */

/**
 * @brief  Constructs a new ListResourceTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceTagsResponse::ListResourceTagsResponse(
        const ListResourceTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ListResourceTagsResponsePrivate(this), parent)
{
    setRequest(new ListResourceTagsRequest(request));
    setReply(reply);
}

const ListResourceTagsRequest * ListResourceTagsResponse::request() const
{
    Q_D(const ListResourceTagsResponse);
    return static_cast<const ListResourceTagsRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ListResourceTags response.
 *
 * @param  response  Response to parse.
 */
void ListResourceTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListResourceTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourceTagsResponsePrivate
 *
 * @brief  Private implementation for ListResourceTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourceTagsResponse instance.
 */
ListResourceTagsResponsePrivate::ListResourceTagsResponsePrivate(
    ListResourceTagsResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS ListResourceTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourceTagsResponsePrivate::parseListResourceTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceTagsResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
