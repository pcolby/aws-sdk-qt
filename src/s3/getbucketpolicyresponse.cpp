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

#include "getbucketpolicyresponse.h"
#include "getbucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketPolicyResponse
 *
 * @brief  Handles S3 GetBucketPolicy responses.
 *
 * @see    S3Client::getBucketPolicy
 */

/**
 * @brief  Constructs a new GetBucketPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketPolicyResponse::GetBucketPolicyResponse(
        const GetBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new GetBucketPolicyRequest(request));
    setReply(reply);
}

const GetBucketPolicyRequest * GetBucketPolicyResponse::request() const
{
    Q_D(const GetBucketPolicyResponse);
    return static_cast<const GetBucketPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketPolicyResponsePrivate
 *
 * @brief  Private implementation for GetBucketPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketPolicyResponse instance.
 */
GetBucketPolicyResponsePrivate::GetBucketPolicyResponsePrivate(
    GetBucketPolicyQueueResponse * const q) : GetBucketPolicyPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketPolicyResponsePrivate::GetBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketPolicyResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
