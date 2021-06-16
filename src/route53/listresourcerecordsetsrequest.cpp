/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listresourcerecordsetsrequest.h"
#include "listresourcerecordsetsrequest_p.h"
#include "listresourcerecordsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListResourceRecordSetsRequest
 * \brief The ListResourceRecordSetsRequest class provides an interface for Route53 ListResourceRecordSets requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listResourceRecordSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceRecordSetsRequest::ListResourceRecordSetsRequest(const ListResourceRecordSetsRequest &other)
    : Route53Request(new ListResourceRecordSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceRecordSetsRequest object.
 */
ListResourceRecordSetsRequest::ListResourceRecordSetsRequest()
    : Route53Request(new ListResourceRecordSetsRequestPrivate(Route53Request::ListResourceRecordSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceRecordSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceRecordSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceRecordSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceRecordSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListResourceRecordSetsRequestPrivate
 * \brief The ListResourceRecordSetsRequestPrivate class provides private implementation for ListResourceRecordSetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListResourceRecordSetsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListResourceRecordSetsRequestPrivate::ListResourceRecordSetsRequestPrivate(
    const Route53Request::Action action, ListResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceRecordSetsRequest
 * class' copy constructor.
 */
ListResourceRecordSetsRequestPrivate::ListResourceRecordSetsRequestPrivate(
    const ListResourceRecordSetsRequestPrivate &other, ListResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
