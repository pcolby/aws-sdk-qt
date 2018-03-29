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

#include "deletebucketcorsresponse.h"
#include "deletebucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketCorsResponse
 *
 * @brief  Handles S3 DeleteBucketCors responses.
 *
 * @see    S3Client::deleteBucketCors
 */

/**
 * @brief  Constructs a new DeleteBucketCorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketCorsResponse::DeleteBucketCorsResponse(
        const DeleteBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketCorsResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketCorsRequest(request));
    setReply(reply);
}

const DeleteBucketCorsRequest * DeleteBucketCorsResponse::request() const
{
    Q_D(const DeleteBucketCorsResponse);
    return static_cast<const DeleteBucketCorsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketCors response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketCorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketCorsResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketCorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketCorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketCorsResponse instance.
 */
DeleteBucketCorsResponsePrivate::DeleteBucketCorsResponsePrivate(
    DeleteBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketCorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketCorsResponsePrivate::parseDeleteBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketCorsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
