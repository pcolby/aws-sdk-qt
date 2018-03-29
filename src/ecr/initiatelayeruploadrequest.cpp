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

#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadrequest_p.h"
#include "initiatelayeruploadresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  InitiateLayerUploadRequest
 *
 * @brief  Implements ECR InitiateLayerUpload requests.
 *
 * @see    ECRClient::initiateLayerUpload
 */

/**
 * @brief  Constructs a new InitiateLayerUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest(const InitiateLayerUploadRequest &other)
    : ECRRequest(new InitiateLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InitiateLayerUploadRequest object.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest()
    : ECRRequest(new InitiateLayerUploadRequestPrivate(ECRRequest::InitiateLayerUploadAction, this))
{

}

bool InitiateLayerUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InitiateLayerUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InitiateLayerUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * InitiateLayerUploadRequest::response(QNetworkReply * const reply) const
{
    return new InitiateLayerUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InitiateLayerUploadRequestPrivate
 *
 * @brief  Private implementation for InitiateLayerUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateLayerUploadRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public InitiateLayerUploadRequest instance.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const ECRRequest::Action action, InitiateLayerUploadRequest * const q)
    : InitiateLayerUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InitiateLayerUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InitiateLayerUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InitiateLayerUploadRequest instance.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const InitiateLayerUploadRequestPrivate &other, InitiateLayerUploadRequest * const q)
    : InitiateLayerUploadPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
