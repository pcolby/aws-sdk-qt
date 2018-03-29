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

#include "putbucketpolicyresponse.h"
#include "putbucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketPolicyResponse
 *
 * @brief  Handles S3 PutBucketPolicy responses.
 *
 * @see    S3Client::putBucketPolicy
 */

/**
 * @brief  Constructs a new PutBucketPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketPolicyResponse::PutBucketPolicyResponse(
        const PutBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new PutBucketPolicyRequest(request));
    setReply(reply);
}

const PutBucketPolicyRequest * PutBucketPolicyResponse::request() const
{
    Q_D(const PutBucketPolicyResponse);
    return static_cast<const PutBucketPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketPolicyResponsePrivate
 *
 * @brief  Private implementation for PutBucketPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketPolicyResponse instance.
 */
PutBucketPolicyResponsePrivate::PutBucketPolicyResponsePrivate(
    PutBucketPolicyResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketPolicyResponsePrivate::PutBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketPolicyResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
