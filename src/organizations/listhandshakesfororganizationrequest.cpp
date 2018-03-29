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

#include "listhandshakesfororganizationrequest.h"
#include "listhandshakesfororganizationrequest_p.h"
#include "listhandshakesfororganizationresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  ListHandshakesForOrganizationRequest
 *
 * @brief  Implements Organizations ListHandshakesForOrganization requests.
 *
 * @see    OrganizationsClient::listHandshakesForOrganization
 */

/**
 * @brief  Constructs a new ListHandshakesForOrganizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHandshakesForOrganizationRequest::ListHandshakesForOrganizationRequest(const ListHandshakesForOrganizationRequest &other)
    : OrganizationsRequest(new ListHandshakesForOrganizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListHandshakesForOrganizationRequest object.
 */
ListHandshakesForOrganizationRequest::ListHandshakesForOrganizationRequest()
    : OrganizationsRequest(new ListHandshakesForOrganizationRequestPrivate(OrganizationsRequest::ListHandshakesForOrganizationAction, this))
{

}

bool ListHandshakesForOrganizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListHandshakesForOrganizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHandshakesForOrganizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListHandshakesForOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new ListHandshakesForOrganizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListHandshakesForOrganizationRequestPrivate
 *
 * @brief  Private implementation for ListHandshakesForOrganizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHandshakesForOrganizationRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListHandshakesForOrganizationRequest instance.
 */
ListHandshakesForOrganizationRequestPrivate::ListHandshakesForOrganizationRequestPrivate(
    const OrganizationsRequest::Action action, ListHandshakesForOrganizationRequest * const q)
    : ListHandshakesForOrganizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListHandshakesForOrganizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHandshakesForOrganizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHandshakesForOrganizationRequest instance.
 */
ListHandshakesForOrganizationRequestPrivate::ListHandshakesForOrganizationRequestPrivate(
    const ListHandshakesForOrganizationRequestPrivate &other, ListHandshakesForOrganizationRequest * const q)
    : ListHandshakesForOrganizationPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
