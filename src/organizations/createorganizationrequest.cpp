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

#include "createorganizationrequest.h"
#include "createorganizationrequest_p.h"
#include "createorganizationresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  CreateOrganizationRequest
 *
 * @brief  Implements Organizations CreateOrganization requests.
 *
 * @see    OrganizationsClient::createOrganization
 */

/**
 * @brief  Constructs a new CreateOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOrganizationResponse::CreateOrganizationResponse(

/**
 * @brief  Constructs a new CreateOrganizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateOrganizationRequest::CreateOrganizationRequest(const CreateOrganizationRequest &other)
    : OrganizationsRequest(new CreateOrganizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateOrganizationRequest object.
 */
CreateOrganizationRequest::CreateOrganizationRequest()
    : OrganizationsRequest(new CreateOrganizationRequestPrivate(OrganizationsRequest::CreateOrganizationAction, this))
{

}

bool CreateOrganizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateOrganizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateOrganizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * CreateOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateOrganizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateOrganizationRequestPrivate
 *
 * @brief  Private implementation for CreateOrganizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrganizationRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public CreateOrganizationRequest instance.
 */
CreateOrganizationRequestPrivate::CreateOrganizationRequestPrivate(
    const OrganizationsRequest::Action action, CreateOrganizationRequest * const q)
    : CreateOrganizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrganizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateOrganizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateOrganizationRequest instance.
 */
CreateOrganizationRequestPrivate::CreateOrganizationRequestPrivate(
    const CreateOrganizationRequestPrivate &other, CreateOrganizationRequest * const q)
    : CreateOrganizationPrivate(other, q)
{

}
