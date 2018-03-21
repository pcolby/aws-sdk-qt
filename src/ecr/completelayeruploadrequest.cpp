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

#include "completelayeruploadrequest.h"
#include "completelayeruploadrequest_p.h"
#include "completelayeruploadresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  CompleteLayerUploadRequest
 *
 * @brief  Implements ECR CompleteLayerUpload requests.
 *
 * @see    ECRClient::completeLayerUpload
 */

/**
 * @brief  Constructs a new CompleteLayerUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest(const CompleteLayerUploadRequest &other)
    : ECRRequest(new CompleteLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CompleteLayerUploadRequest object.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest()
    : ECRRequest(new CompleteLayerUploadRequestPrivate(ECRRequest::CompleteLayerUploadAction, this))
{

}

bool CompleteLayerUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CompleteLayerUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CompleteLayerUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * CompleteLayerUploadRequest::response(QNetworkReply * const reply) const
{
    return new CompleteLayerUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CompleteLayerUploadRequestPrivate
 *
 * @brief  Private implementation for CompleteLayerUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteLayerUploadRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public CompleteLayerUploadRequest instance.
 */
CompleteLayerUploadRequestPrivate::CompleteLayerUploadRequestPrivate(
    const ECRRequest::Action action, CompleteLayerUploadRequest * const q)
    : CompleteLayerUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CompleteLayerUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CompleteLayerUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CompleteLayerUploadRequest instance.
 */
CompleteLayerUploadRequestPrivate::CompleteLayerUploadRequestPrivate(
    const CompleteLayerUploadRequestPrivate &other, CompleteLayerUploadRequest * const q)
    : CompleteLayerUploadPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
