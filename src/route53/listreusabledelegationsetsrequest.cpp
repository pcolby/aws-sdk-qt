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

#include "listreusabledelegationsetsrequest.h"
#include "listreusabledelegationsetsrequest_p.h"
#include "listreusabledelegationsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsRequest
 * \brief The ListReusableDelegationSetsRequest class provides an interface for Route53 ListReusableDelegationSets requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listReusableDelegationSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListReusableDelegationSetsRequest::ListReusableDelegationSetsRequest(const ListReusableDelegationSetsRequest &other)
    : Route53Request(new ListReusableDelegationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReusableDelegationSetsRequest object.
 */
ListReusableDelegationSetsRequest::ListReusableDelegationSetsRequest()
    : Route53Request(new ListReusableDelegationSetsRequestPrivate(Route53Request::ListReusableDelegationSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReusableDelegationSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReusableDelegationSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReusableDelegationSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListReusableDelegationSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsRequestPrivate
 * \brief The ListReusableDelegationSetsRequestPrivate class provides private implementation for ListReusableDelegationSetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 *
 * Constructs a ListReusableDelegationSetsRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
 */
ListReusableDelegationSetsRequestPrivate::ListReusableDelegationSetsRequestPrivate(
    const Route53Request::Action action, ListReusableDelegationSetsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReusableDelegationSetsRequest
 * class' copy constructor.
 */
ListReusableDelegationSetsRequestPrivate::ListReusableDelegationSetsRequestPrivate(
    const ListReusableDelegationSetsRequestPrivate &other, ListReusableDelegationSetsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
