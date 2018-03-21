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

#include "listobjectsv2response.h"
#include "listobjectsv2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  ListObjectsV2Response
 *
 * @brief  Handles S3 ListObjectsV2 responses.
 *
 * @see    S3Client::listObjectsV2
 */

/**
 * @brief  Constructs a new ListObjectsV2Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectsV2Response::ListObjectsV2Response(
        const ListObjectsV2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectsV2ResponsePrivate(this), parent)
{
    setRequest(new ListObjectsV2Request(request));
    setReply(reply);
}

const ListObjectsV2Request * ListObjectsV2Response::request() const
{
    Q_D(const ListObjectsV2Response);
    return static_cast<const ListObjectsV2Request *>(d->request);
}

/**
 * @brief  Parse a S3 ListObjectsV2 response.
 *
 * @param  response  Response to parse.
 */
void ListObjectsV2Response::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectsV2ResponsePrivate
 *
 * @brief  Private implementation for ListObjectsV2Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectsV2ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectsV2Response instance.
 */
ListObjectsV2ResponsePrivate::ListObjectsV2ResponsePrivate(
    ListObjectsV2QueueResponse * const q) : ListObjectsV2Private(q)
{

}

/**
 * @brief  Parse an S3 ListObjectsV2Response element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectsV2ResponsePrivate::ListObjectsV2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectsV2Response"));
    /// @todo
}

} // namespace S3
} // namespace AWS
