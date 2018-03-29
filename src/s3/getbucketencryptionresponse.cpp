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

#include "getbucketencryptionresponse.h"
#include "getbucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketEncryptionResponse
 *
 * @brief  Handles S3 GetBucketEncryption responses.
 *
 * @see    S3Client::getBucketEncryption
 */

/**
 * @brief  Constructs a new GetBucketEncryptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketEncryptionResponse::GetBucketEncryptionResponse(
        const GetBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new GetBucketEncryptionRequest(request));
    setReply(reply);
}

const GetBucketEncryptionRequest * GetBucketEncryptionResponse::request() const
{
    Q_D(const GetBucketEncryptionResponse);
    return static_cast<const GetBucketEncryptionRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketEncryption response.
 *
 * @param  response  Response to parse.
 */
void GetBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketEncryptionResponsePrivate
 *
 * @brief  Private implementation for GetBucketEncryptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketEncryptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketEncryptionResponse instance.
 */
GetBucketEncryptionResponsePrivate::GetBucketEncryptionResponsePrivate(
    GetBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketEncryptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketEncryptionResponsePrivate::parseGetBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketEncryptionResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
