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

#include "enableawsserviceaccessrequest.h"
#include "enableawsserviceaccessrequest_p.h"
#include "enableawsserviceaccessresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  EnableAWSServiceAccessRequest
 *
 * @brief  Implements Organizations EnableAWSServiceAccess requests.
 *
 * @see    OrganizationsClient::enableAWSServiceAccess
 */

/**
 * @brief  Constructs a new EnableAWSServiceAccessRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableAWSServiceAccessRequest::EnableAWSServiceAccessRequest(const EnableAWSServiceAccessRequest &other)
    : OrganizationsRequest(new EnableAWSServiceAccessRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableAWSServiceAccessRequest object.
 */
EnableAWSServiceAccessRequest::EnableAWSServiceAccessRequest()
    : OrganizationsRequest(new EnableAWSServiceAccessRequestPrivate(OrganizationsRequest::EnableAWSServiceAccessAction, this))
{

}

bool EnableAWSServiceAccessRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableAWSServiceAccessResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableAWSServiceAccessResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * EnableAWSServiceAccessRequest::response(QNetworkReply * const reply) const
{
    return new EnableAWSServiceAccessResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableAWSServiceAccessRequestPrivate
 *
 * @brief  Private implementation for EnableAWSServiceAccessRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableAWSServiceAccessRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public EnableAWSServiceAccessRequest instance.
 */
EnableAWSServiceAccessRequestPrivate::EnableAWSServiceAccessRequestPrivate(
    const OrganizationsRequest::Action action, EnableAWSServiceAccessRequest * const q)
    : EnableAWSServiceAccessPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableAWSServiceAccessRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableAWSServiceAccessRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableAWSServiceAccessRequest instance.
 */
EnableAWSServiceAccessRequestPrivate::EnableAWSServiceAccessRequestPrivate(
    const EnableAWSServiceAccessRequestPrivate &other, EnableAWSServiceAccessRequest * const q)
    : EnableAWSServiceAccessPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
