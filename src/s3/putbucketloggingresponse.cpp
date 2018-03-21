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

#include "putbucketloggingresponse.h"
#include "putbucketloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketLoggingResponse
 *
 * @brief  Handles S3 PutBucketLogging responses.
 *
 * @see    S3Client::putBucketLogging
 */

/**
 * @brief  Constructs a new PutBucketLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketLoggingResponse::PutBucketLoggingResponse(
        const PutBucketLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketLoggingResponsePrivate(this), parent)
{
    setRequest(new PutBucketLoggingRequest(request));
    setReply(reply);
}

const PutBucketLoggingRequest * PutBucketLoggingResponse::request() const
{
    Q_D(const PutBucketLoggingResponse);
    return static_cast<const PutBucketLoggingRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketLogging response.
 *
 * @param  response  Response to parse.
 */
void PutBucketLoggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketLoggingResponsePrivate
 *
 * @brief  Private implementation for PutBucketLoggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketLoggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketLoggingResponse instance.
 */
PutBucketLoggingResponsePrivate::PutBucketLoggingResponsePrivate(
    PutBucketLoggingQueueResponse * const q) : PutBucketLoggingPrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketLoggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketLoggingResponsePrivate::PutBucketLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLoggingResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
