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

#include "createorganizationalunitrequest.h"
#include "createorganizationalunitrequest_p.h"
#include "createorganizationalunitresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  CreateOrganizationalUnitRequest
 *
 * @brief  Implements Organizations CreateOrganizationalUnit requests.
 *
 * @see    OrganizationsClient::createOrganizationalUnit
 */

/**
 * @brief  Constructs a new CreateOrganizationalUnitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOrganizationalUnitResponse::CreateOrganizationalUnitResponse(

/**
 * @brief  Constructs a new CreateOrganizationalUnitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateOrganizationalUnitRequest::CreateOrganizationalUnitRequest(const CreateOrganizationalUnitRequest &other)
    : OrganizationsRequest(new CreateOrganizationalUnitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateOrganizationalUnitRequest object.
 */
CreateOrganizationalUnitRequest::CreateOrganizationalUnitRequest()
    : OrganizationsRequest(new CreateOrganizationalUnitRequestPrivate(OrganizationsRequest::CreateOrganizationalUnitAction, this))
{

}

bool CreateOrganizationalUnitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateOrganizationalUnitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateOrganizationalUnitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * CreateOrganizationalUnitRequest::response(QNetworkReply * const reply) const
{
    return new CreateOrganizationalUnitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateOrganizationalUnitRequestPrivate
 *
 * @brief  Private implementation for CreateOrganizationalUnitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrganizationalUnitRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public CreateOrganizationalUnitRequest instance.
 */
CreateOrganizationalUnitRequestPrivate::CreateOrganizationalUnitRequestPrivate(
    const OrganizationsRequest::Action action, CreateOrganizationalUnitRequest * const q)
    : CreateOrganizationalUnitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrganizationalUnitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateOrganizationalUnitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateOrganizationalUnitRequest instance.
 */
CreateOrganizationalUnitRequestPrivate::CreateOrganizationalUnitRequestPrivate(
    const CreateOrganizationalUnitRequestPrivate &other, CreateOrganizationalUnitRequest * const q)
    : CreateOrganizationalUnitPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
