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

#include "deletebucketcorsresponse.h"
#include "deletebucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketCorsResponse
 *
 * @brief  Handles S3 DeleteBucketCors responses.
 *
 * @see    S3Client::deleteBucketCors
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketCorsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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
    Q_D(Response);
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
    DeleteBucketCorsQueueResponse * const q) : DeleteBucketCorsPrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketCorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketCorsResponsePrivate::DeleteBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketCorsResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
