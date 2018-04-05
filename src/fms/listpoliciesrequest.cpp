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

#include "listpoliciesrequest.h"
#include "listpoliciesrequest_p.h"
#include "listpoliciesresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/**
 * @class  ListPoliciesRequest
 *
 * @brief  Implements FMS ListPolicies requests.
 *
 * @see    FMSClient::listPolicies
 */

/**
 * @brief  Constructs a new ListPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPoliciesRequest::ListPoliciesRequest(const ListPoliciesRequest &other)
    : FMSRequest(new ListPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPoliciesRequest object.
 */
ListPoliciesRequest::ListPoliciesRequest()
    : FMSRequest(new ListPoliciesRequestPrivate(FMSRequest::ListPoliciesAction, this))
{

}

bool ListPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPoliciesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPoliciesRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public ListPoliciesRequest instance.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const FMSRequest::Action action, ListPoliciesRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPoliciesRequest instance.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const ListPoliciesRequestPrivate &other, ListPoliciesRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
