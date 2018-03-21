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

#include "putbuckettaggingresponse.h"
#include "putbuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketTaggingResponse
 *
 * @brief  Handles S3 PutBucketTagging responses.
 *
 * @see    S3Client::putBucketTagging
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketTaggingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new PutBucketTaggingRequest(request));
    setReply(reply);
}

const PutBucketTaggingRequest * PutBucketTaggingResponse::request() const
{
    Q_D(const PutBucketTaggingResponse);
    return static_cast<const PutBucketTaggingRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketTagging response.
 *
 * @param  response  Response to parse.
 */
void PutBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketTaggingResponsePrivate
 *
 * @brief  Private implementation for PutBucketTaggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketTaggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketTaggingResponse instance.
 */
PutBucketTaggingResponsePrivate::PutBucketTaggingResponsePrivate(
    PutBucketTaggingQueueResponse * const q) : PutBucketTaggingPrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketTaggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketTaggingResponsePrivate::PutBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketTaggingResponse"));
    /// @todo
}
