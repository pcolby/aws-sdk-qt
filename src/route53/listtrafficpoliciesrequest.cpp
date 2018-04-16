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

#include "listtrafficpoliciesrequest.h"
#include "listtrafficpoliciesrequest_p.h"
#include "listtrafficpoliciesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPoliciesRequest
 *
 * \brief The ListTrafficPoliciesRequest class provides an interface for Route53 ListTrafficPolicies requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listTrafficPolicies
 */

/*!
 * @brief  Constructs a new ListTrafficPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrafficPoliciesRequest::ListTrafficPoliciesRequest(const ListTrafficPoliciesRequest &other)
    : Route53Request(new ListTrafficPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTrafficPoliciesRequest object.
 */
ListTrafficPoliciesRequest::ListTrafficPoliciesRequest()
    : Route53Request(new ListTrafficPoliciesRequestPrivate(Route53Request::ListTrafficPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTrafficPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrafficPoliciesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPoliciesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTrafficPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListTrafficPoliciesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPoliciesRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListTrafficPoliciesRequest instance.
 */
ListTrafficPoliciesRequestPrivate::ListTrafficPoliciesRequestPrivate(
    const Route53Request::Action action, ListTrafficPoliciesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTrafficPoliciesRequest instance.
 */
ListTrafficPoliciesRequestPrivate::ListTrafficPoliciesRequestPrivate(
    const ListTrafficPoliciesRequestPrivate &other, ListTrafficPoliciesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
