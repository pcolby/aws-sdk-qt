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

#include "deleteactivationrequest.h"
#include "deleteactivationrequest_p.h"
#include "deleteactivationresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DeleteActivationRequest
 *
 * @brief  Implements SSM DeleteActivation requests.
 *
 * @see    SSMClient::deleteActivation
 */

/**
 * @brief  Constructs a new DeleteActivationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteActivationResponse::DeleteActivationResponse(

/**
 * @brief  Constructs a new DeleteActivationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteActivationRequest::DeleteActivationRequest(const DeleteActivationRequest &other)
    : SSMRequest(new DeleteActivationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteActivationRequest object.
 */
DeleteActivationRequest::DeleteActivationRequest()
    : SSMRequest(new DeleteActivationRequestPrivate(SSMRequest::DeleteActivationAction, this))
{

}

bool DeleteActivationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteActivationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteActivationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DeleteActivationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteActivationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteActivationRequestPrivate
 *
 * @brief  Private implementation for DeleteActivationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteActivationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeleteActivationRequest instance.
 */
DeleteActivationRequestPrivate::DeleteActivationRequestPrivate(
    const SSMRequest::Action action, DeleteActivationRequest * const q)
    : DeleteActivationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteActivationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteActivationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteActivationRequest instance.
 */
DeleteActivationRequestPrivate::DeleteActivationRequestPrivate(
    const DeleteActivationRequestPrivate &other, DeleteActivationRequest * const q)
    : DeleteActivationPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
