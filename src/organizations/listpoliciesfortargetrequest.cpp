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

#include "listpoliciesfortargetrequest.h"
#include "listpoliciesfortargetrequest_p.h"
#include "listpoliciesfortargetresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  ListPoliciesForTargetRequest
 *
 * @brief  Implements Organizations ListPoliciesForTarget requests.
 *
 * @see    OrganizationsClient::listPoliciesForTarget
 */

/**
 * @brief  Constructs a new ListPoliciesForTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPoliciesForTargetRequest::ListPoliciesForTargetRequest(const ListPoliciesForTargetRequest &other)
    : OrganizationsRequest(new ListPoliciesForTargetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPoliciesForTargetRequest object.
 */
ListPoliciesForTargetRequest::ListPoliciesForTargetRequest()
    : OrganizationsRequest(new ListPoliciesForTargetRequestPrivate(OrganizationsRequest::ListPoliciesForTargetAction, this))
{

}

bool ListPoliciesForTargetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPoliciesForTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPoliciesForTargetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListPoliciesForTargetRequest::response(QNetworkReply * const reply) const
{
    return new ListPoliciesForTargetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPoliciesForTargetRequestPrivate
 *
 * @brief  Private implementation for ListPoliciesForTargetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPoliciesForTargetRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListPoliciesForTargetRequest instance.
 */
ListPoliciesForTargetRequestPrivate::ListPoliciesForTargetRequestPrivate(
    const OrganizationsRequest::Action action, ListPoliciesForTargetRequest * const q)
    : ListPoliciesForTargetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPoliciesForTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPoliciesForTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPoliciesForTargetRequest instance.
 */
ListPoliciesForTargetRequestPrivate::ListPoliciesForTargetRequestPrivate(
    const ListPoliciesForTargetRequestPrivate &other, ListPoliciesForTargetRequest * const q)
    : ListPoliciesForTargetPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
