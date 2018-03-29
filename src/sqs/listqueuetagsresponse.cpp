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

#include "listqueuetagsresponse.h"
#include "listqueuetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  ListQueueTagsResponse
 *
 * @brief  Handles SQS ListQueueTags responses.
 *
 * @see    SQSClient::listQueueTags
 */

/**
 * @brief  Constructs a new ListQueueTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQueueTagsResponse::ListQueueTagsResponse(
        const ListQueueTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListQueueTagsResponse(new ListQueueTagsResponsePrivate(this), parent)
{
    setRequest(new ListQueueTagsRequest(request));
    setReply(reply);
}

const ListQueueTagsRequest * ListQueueTagsResponse::request() const
{
    Q_D(const ListQueueTagsResponse);
    return static_cast<const ListQueueTagsRequest *>(d->request);
}

/**
 * @brief  Parse a SQS ListQueueTags response.
 *
 * @param  response  Response to parse.
 */
void ListQueueTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListQueueTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListQueueTagsResponsePrivate
 *
 * @brief  Private implementation for ListQueueTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueueTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListQueueTagsResponse instance.
 */
ListQueueTagsResponsePrivate::ListQueueTagsResponsePrivate(
    ListQueueTagsResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ListQueueTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListQueueTagsResponsePrivate::parseListQueueTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueueTagsResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
