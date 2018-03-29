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

#include "listobjectsresponse.h"
#include "listobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  ListObjectsResponse
 *
 * @brief  Handles S3 ListObjects responses.
 *
 * @see    S3Client::listObjects
 */

/**
 * @brief  Constructs a new ListObjectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectsResponse::ListObjectsResponse(
        const ListObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectsResponsePrivate(this), parent)
{
    setRequest(new ListObjectsRequest(request));
    setReply(reply);
}

const ListObjectsRequest * ListObjectsResponse::request() const
{
    Q_D(const ListObjectsResponse);
    return static_cast<const ListObjectsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 ListObjects response.
 *
 * @param  response  Response to parse.
 */
void ListObjectsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectsResponsePrivate
 *
 * @brief  Private implementation for ListObjectsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectsResponse instance.
 */
ListObjectsResponsePrivate::ListObjectsResponsePrivate(
    ListObjectsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 ListObjectsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectsResponsePrivate::ListObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
