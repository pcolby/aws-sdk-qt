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

#include "disableawsserviceaccessrequest.h"
#include "disableawsserviceaccessrequest_p.h"
#include "disableawsserviceaccessresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  DisableAWSServiceAccessRequest
 *
 * @brief  Implements Organizations DisableAWSServiceAccess requests.
 *
 * @see    OrganizationsClient::disableAWSServiceAccess
 */

/**
 * @brief  Constructs a new DisableAWSServiceAccessRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableAWSServiceAccessRequest::DisableAWSServiceAccessRequest(const DisableAWSServiceAccessRequest &other)
    : OrganizationsRequest(new DisableAWSServiceAccessRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableAWSServiceAccessRequest object.
 */
DisableAWSServiceAccessRequest::DisableAWSServiceAccessRequest()
    : OrganizationsRequest(new DisableAWSServiceAccessRequestPrivate(OrganizationsRequest::DisableAWSServiceAccessAction, this))
{

}

bool DisableAWSServiceAccessRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableAWSServiceAccessResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableAWSServiceAccessResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * DisableAWSServiceAccessRequest::response(QNetworkReply * const reply) const
{
    return new DisableAWSServiceAccessResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableAWSServiceAccessRequestPrivate
 *
 * @brief  Private implementation for DisableAWSServiceAccessRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableAWSServiceAccessRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DisableAWSServiceAccessRequest instance.
 */
DisableAWSServiceAccessRequestPrivate::DisableAWSServiceAccessRequestPrivate(
    const OrganizationsRequest::Action action, DisableAWSServiceAccessRequest * const q)
    : DisableAWSServiceAccessPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableAWSServiceAccessRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableAWSServiceAccessRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableAWSServiceAccessRequest instance.
 */
DisableAWSServiceAccessRequestPrivate::DisableAWSServiceAccessRequestPrivate(
    const DisableAWSServiceAccessRequestPrivate &other, DisableAWSServiceAccessRequest * const q)
    : DisableAWSServiceAccessPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
