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

#include "deletebucketpolicyresponse.h"
#include "deletebucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketPolicyResponse
 *
 * @brief  Handles S3 DeleteBucketPolicy responses.
 *
 * @see    S3Client::deleteBucketPolicy
 */

/**
 * @brief  Constructs a new DeleteBucketPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketPolicyResponse::DeleteBucketPolicyResponse(
        const DeleteBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketPolicyRequest(request));
    setReply(reply);
}

const DeleteBucketPolicyRequest * DeleteBucketPolicyResponse::request() const
{
    Q_D(const DeleteBucketPolicyResponse);
    return static_cast<const DeleteBucketPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketPolicyResponse instance.
 */
DeleteBucketPolicyResponsePrivate::DeleteBucketPolicyResponsePrivate(
    DeleteBucketPolicyResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketPolicyResponsePrivate::DeleteBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketPolicyResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
