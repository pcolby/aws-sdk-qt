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

#include "updateassociationrequest.h"
#include "updateassociationrequest_p.h"
#include "updateassociationresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  UpdateAssociationRequest
 *
 * @brief  Implements SSM UpdateAssociation requests.
 *
 * @see    SSMClient::updateAssociation
 */

/**
 * @brief  Constructs a new UpdateAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAssociationResponse::UpdateAssociationResponse(

/**
 * @brief  Constructs a new UpdateAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAssociationRequest::UpdateAssociationRequest(const UpdateAssociationRequest &other)
    : SSMRequest(new UpdateAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAssociationRequest object.
 */
UpdateAssociationRequest::UpdateAssociationRequest()
    : SSMRequest(new UpdateAssociationRequestPrivate(SSMRequest::UpdateAssociationAction, this))
{

}

bool UpdateAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * UpdateAssociationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAssociationRequestPrivate
 *
 * @brief  Private implementation for UpdateAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssociationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public UpdateAssociationRequest instance.
 */
UpdateAssociationRequestPrivate::UpdateAssociationRequestPrivate(
    const SSMRequest::Action action, UpdateAssociationRequest * const q)
    : UpdateAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAssociationRequest instance.
 */
UpdateAssociationRequestPrivate::UpdateAssociationRequestPrivate(
    const UpdateAssociationRequestPrivate &other, UpdateAssociationRequest * const q)
    : UpdateAssociationPrivate(other, q)
{

}
