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

#include "createassociationrequest.h"
#include "createassociationrequest_p.h"
#include "createassociationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  CreateAssociationRequest
 *
 * @brief  Implements SSM CreateAssociation requests.
 *
 * @see    SSMClient::createAssociation
 */

/**
 * @brief  Constructs a new CreateAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAssociationRequest::CreateAssociationRequest(const CreateAssociationRequest &other)
    : SSMRequest(new CreateAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAssociationRequest object.
 */
CreateAssociationRequest::CreateAssociationRequest()
    : SSMRequest(new CreateAssociationRequestPrivate(SSMRequest::CreateAssociationAction, this))
{

}

bool CreateAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * CreateAssociationRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAssociationRequestPrivate
 *
 * @brief  Private implementation for CreateAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssociationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CreateAssociationRequest instance.
 */
CreateAssociationRequestPrivate::CreateAssociationRequestPrivate(
    const SSMRequest::Action action, CreateAssociationRequest * const q)
    : CreateAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAssociationRequest instance.
 */
CreateAssociationRequestPrivate::CreateAssociationRequestPrivate(
    const CreateAssociationRequestPrivate &other, CreateAssociationRequest * const q)
    : CreateAssociationPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
