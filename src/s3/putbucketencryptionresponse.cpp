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

#include "putbucketencryptionresponse.h"
#include "putbucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketEncryptionResponse
 *
 * @brief  Handles S3 PutBucketEncryption responses.
 *
 * @see    S3Client::putBucketEncryption
 */

/**
 * @brief  Constructs a new PutBucketEncryptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketEncryptionResponse::PutBucketEncryptionResponse(
        const PutBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new PutBucketEncryptionRequest(request));
    setReply(reply);
}

const PutBucketEncryptionRequest * PutBucketEncryptionResponse::request() const
{
    Q_D(const PutBucketEncryptionResponse);
    return static_cast<const PutBucketEncryptionRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketEncryption response.
 *
 * @param  response  Response to parse.
 */
void PutBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketEncryptionResponsePrivate
 *
 * @brief  Private implementation for PutBucketEncryptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketEncryptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketEncryptionResponse instance.
 */
PutBucketEncryptionResponsePrivate::PutBucketEncryptionResponsePrivate(
    PutBucketEncryptionQueueResponse * const q) : PutBucketEncryptionPrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketEncryptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketEncryptionResponsePrivate::PutBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketEncryptionResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
