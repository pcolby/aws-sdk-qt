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

#include "listawsserviceaccessfororganizationrequest.h"
#include "listawsserviceaccessfororganizationrequest_p.h"
#include "listawsserviceaccessfororganizationresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  ListAWSServiceAccessForOrganizationRequest
 *
 * @brief  Implements Organizations ListAWSServiceAccessForOrganization requests.
 *
 * @see    OrganizationsClient::listAWSServiceAccessForOrganization
 */

/**
 * @brief  Constructs a new ListAWSServiceAccessForOrganizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAWSServiceAccessForOrganizationRequest::ListAWSServiceAccessForOrganizationRequest(const ListAWSServiceAccessForOrganizationRequest &other)
    : OrganizationsRequest(new ListAWSServiceAccessForOrganizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAWSServiceAccessForOrganizationRequest object.
 */
ListAWSServiceAccessForOrganizationRequest::ListAWSServiceAccessForOrganizationRequest()
    : OrganizationsRequest(new ListAWSServiceAccessForOrganizationRequestPrivate(OrganizationsRequest::ListAWSServiceAccessForOrganizationAction, this))
{

}

bool ListAWSServiceAccessForOrganizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAWSServiceAccessForOrganizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAWSServiceAccessForOrganizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListAWSServiceAccessForOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new ListAWSServiceAccessForOrganizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAWSServiceAccessForOrganizationRequestPrivate
 *
 * @brief  Private implementation for ListAWSServiceAccessForOrganizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAWSServiceAccessForOrganizationRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListAWSServiceAccessForOrganizationRequest instance.
 */
ListAWSServiceAccessForOrganizationRequestPrivate::ListAWSServiceAccessForOrganizationRequestPrivate(
    const OrganizationsRequest::Action action, ListAWSServiceAccessForOrganizationRequest * const q)
    : ListAWSServiceAccessForOrganizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAWSServiceAccessForOrganizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAWSServiceAccessForOrganizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAWSServiceAccessForOrganizationRequest instance.
 */
ListAWSServiceAccessForOrganizationRequestPrivate::ListAWSServiceAccessForOrganizationRequestPrivate(
    const ListAWSServiceAccessForOrganizationRequestPrivate &other, ListAWSServiceAccessForOrganizationRequest * const q)
    : ListAWSServiceAccessForOrganizationPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
