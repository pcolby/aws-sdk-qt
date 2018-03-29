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

#include "listtargetsforpolicyrequest.h"
#include "listtargetsforpolicyrequest_p.h"
#include "listtargetsforpolicyresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  ListTargetsForPolicyRequest
 *
 * @brief  Implements Organizations ListTargetsForPolicy requests.
 *
 * @see    OrganizationsClient::listTargetsForPolicy
 */

/**
 * @brief  Constructs a new ListTargetsForPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTargetsForPolicyRequest::ListTargetsForPolicyRequest(const ListTargetsForPolicyRequest &other)
    : OrganizationsRequest(new ListTargetsForPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTargetsForPolicyRequest object.
 */
ListTargetsForPolicyRequest::ListTargetsForPolicyRequest()
    : OrganizationsRequest(new ListTargetsForPolicyRequestPrivate(OrganizationsRequest::ListTargetsForPolicyAction, this))
{

}

bool ListTargetsForPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTargetsForPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTargetsForPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTargetsForPolicyRequest::response(QNetworkReply * const reply) const
{
    return new ListTargetsForPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTargetsForPolicyRequestPrivate
 *
 * @brief  Private implementation for ListTargetsForPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsForPolicyRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListTargetsForPolicyRequest instance.
 */
ListTargetsForPolicyRequestPrivate::ListTargetsForPolicyRequestPrivate(
    const OrganizationsRequest::Action action, ListTargetsForPolicyRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsForPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTargetsForPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTargetsForPolicyRequest instance.
 */
ListTargetsForPolicyRequestPrivate::ListTargetsForPolicyRequestPrivate(
    const ListTargetsForPolicyRequestPrivate &other, ListTargetsForPolicyRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
