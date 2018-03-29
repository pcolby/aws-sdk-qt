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

#include "listbucketsresponse.h"
#include "listbucketsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  ListBucketsResponse
 *
 * @brief  Handles S3 ListBuckets responses.
 *
 * @see    S3Client::listBuckets
 */

/**
 * @brief  Constructs a new ListBucketsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBucketsResponse::ListBucketsResponse(
        const ListBucketsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketsResponsePrivate(this), parent)
{
    setRequest(new ListBucketsRequest(request));
    setReply(reply);
}

const ListBucketsRequest * ListBucketsResponse::request() const
{
    Q_D(const ListBucketsResponse);
    return static_cast<const ListBucketsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 ListBuckets response.
 *
 * @param  response  Response to parse.
 */
void ListBucketsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBucketsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBucketsResponsePrivate
 *
 * @brief  Private implementation for ListBucketsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBucketsResponse instance.
 */
ListBucketsResponsePrivate::ListBucketsResponsePrivate(
    ListBucketsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 ListBucketsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBucketsResponsePrivate::ListBucketsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
