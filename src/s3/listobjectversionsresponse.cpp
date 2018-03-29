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

#include "listobjectversionsresponse.h"
#include "listobjectversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  ListObjectVersionsResponse
 *
 * @brief  Handles S3 ListObjectVersions responses.
 *
 * @see    S3Client::listObjectVersions
 */

/**
 * @brief  Constructs a new ListObjectVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectVersionsResponse::ListObjectVersionsResponse(
        const ListObjectVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectVersionsResponsePrivate(this), parent)
{
    setRequest(new ListObjectVersionsRequest(request));
    setReply(reply);
}

const ListObjectVersionsRequest * ListObjectVersionsResponse::request() const
{
    Q_D(const ListObjectVersionsResponse);
    return static_cast<const ListObjectVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 ListObjectVersions response.
 *
 * @param  response  Response to parse.
 */
void ListObjectVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectVersionsResponsePrivate
 *
 * @brief  Private implementation for ListObjectVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectVersionsResponse instance.
 */
ListObjectVersionsResponsePrivate::ListObjectVersionsResponsePrivate(
    ListObjectVersionsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 ListObjectVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectVersionsResponsePrivate::ListObjectVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectVersionsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
