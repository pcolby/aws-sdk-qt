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

#include "deleteassociationrequest.h"
#include "deleteassociationrequest_p.h"
#include "deleteassociationresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DeleteAssociationRequest
 *
 * @brief  Implements SSM DeleteAssociation requests.
 *
 * @see    SSMClient::deleteAssociation
 */

/**
 * @brief  Constructs a new DeleteAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAssociationRequest::DeleteAssociationRequest(const DeleteAssociationRequest &other)
    : SSMRequest(new DeleteAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAssociationRequest object.
 */
DeleteAssociationRequest::DeleteAssociationRequest()
    : SSMRequest(new DeleteAssociationRequestPrivate(SSMRequest::DeleteAssociationAction, this))
{

}

bool DeleteAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DeleteAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAssociationRequestPrivate
 *
 * @brief  Private implementation for DeleteAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssociationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeleteAssociationRequest instance.
 */
DeleteAssociationRequestPrivate::DeleteAssociationRequestPrivate(
    const SSMRequest::Action action, DeleteAssociationRequest * const q)
    : DeleteAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAssociationRequest instance.
 */
DeleteAssociationRequestPrivate::DeleteAssociationRequestPrivate(
    const DeleteAssociationRequestPrivate &other, DeleteAssociationRequest * const q)
    : DeleteAssociationPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
