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

#include "deletebuckettaggingresponse.h"
#include "deletebuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketTaggingResponse
 *
 * @brief  Handles S3 DeleteBucketTagging responses.
 *
 * @see    S3Client::deleteBucketTagging
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketTaggingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketTaggingRequest(request));
    setReply(reply);
}

const DeleteBucketTaggingRequest * DeleteBucketTaggingResponse::request() const
{
    Q_D(const DeleteBucketTaggingResponse);
    return static_cast<const DeleteBucketTaggingRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketTagging response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketTaggingResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketTaggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketTaggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketTaggingResponse instance.
 */
DeleteBucketTaggingResponsePrivate::DeleteBucketTaggingResponsePrivate(
    DeleteBucketTaggingQueueResponse * const q) : DeleteBucketTaggingPrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketTaggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketTaggingResponsePrivate::DeleteBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketTaggingResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
