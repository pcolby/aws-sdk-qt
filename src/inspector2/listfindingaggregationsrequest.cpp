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

#include "listfindingaggregationsrequest.h"
#include "listfindingaggregationsrequest_p.h"
#include "listfindingaggregationsresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListFindingAggregationsRequest
 * \brief The ListFindingAggregationsRequest class provides an interface for Inspector2 ListFindingAggregations requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listFindingAggregations
 */

/*!
 * Constructs a copy of \a other.
 */
ListFindingAggregationsRequest::ListFindingAggregationsRequest(const ListFindingAggregationsRequest &other)
    : Inspector2Request(new ListFindingAggregationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFindingAggregationsRequest object.
 */
ListFindingAggregationsRequest::ListFindingAggregationsRequest()
    : Inspector2Request(new ListFindingAggregationsRequestPrivate(Inspector2Request::ListFindingAggregationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFindingAggregationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFindingAggregationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFindingAggregationsRequest::response(QNetworkReply * const reply) const
{
    return new ListFindingAggregationsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListFindingAggregationsRequestPrivate
 * \brief The ListFindingAggregationsRequestPrivate class provides private implementation for ListFindingAggregationsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListFindingAggregationsRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListFindingAggregationsRequestPrivate::ListFindingAggregationsRequestPrivate(
    const Inspector2Request::Action action, ListFindingAggregationsRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFindingAggregationsRequest
 * class' copy constructor.
 */
ListFindingAggregationsRequestPrivate::ListFindingAggregationsRequestPrivate(
    const ListFindingAggregationsRequestPrivate &other, ListFindingAggregationsRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
