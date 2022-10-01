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

#include "listusagetotalsrequest.h"
#include "listusagetotalsrequest_p.h"
#include "listusagetotalsresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListUsageTotalsRequest
 * \brief The ListUsageTotalsRequest class provides an interface for Inspector2 ListUsageTotals requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listUsageTotals
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsageTotalsRequest::ListUsageTotalsRequest(const ListUsageTotalsRequest &other)
    : Inspector2Request(new ListUsageTotalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsageTotalsRequest object.
 */
ListUsageTotalsRequest::ListUsageTotalsRequest()
    : Inspector2Request(new ListUsageTotalsRequestPrivate(Inspector2Request::ListUsageTotalsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsageTotalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsageTotalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsageTotalsRequest::response(QNetworkReply * const reply) const
{
    return new ListUsageTotalsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListUsageTotalsRequestPrivate
 * \brief The ListUsageTotalsRequestPrivate class provides private implementation for ListUsageTotalsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListUsageTotalsRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListUsageTotalsRequestPrivate::ListUsageTotalsRequestPrivate(
    const Inspector2Request::Action action, ListUsageTotalsRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsageTotalsRequest
 * class' copy constructor.
 */
ListUsageTotalsRequestPrivate::ListUsageTotalsRequestPrivate(
    const ListUsageTotalsRequestPrivate &other, ListUsageTotalsRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
