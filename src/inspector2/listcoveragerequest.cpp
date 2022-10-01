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

#include "listcoveragerequest.h"
#include "listcoveragerequest_p.h"
#include "listcoverageresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListCoverageRequest
 * \brief The ListCoverageRequest class provides an interface for Inspector2 ListCoverage requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listCoverage
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoverageRequest::ListCoverageRequest(const ListCoverageRequest &other)
    : Inspector2Request(new ListCoverageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoverageRequest object.
 */
ListCoverageRequest::ListCoverageRequest()
    : Inspector2Request(new ListCoverageRequestPrivate(Inspector2Request::ListCoverageAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoverageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoverageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoverageRequest::response(QNetworkReply * const reply) const
{
    return new ListCoverageResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListCoverageRequestPrivate
 * \brief The ListCoverageRequestPrivate class provides private implementation for ListCoverageRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListCoverageRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListCoverageRequestPrivate::ListCoverageRequestPrivate(
    const Inspector2Request::Action action, ListCoverageRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoverageRequest
 * class' copy constructor.
 */
ListCoverageRequestPrivate::ListCoverageRequestPrivate(
    const ListCoverageRequestPrivate &other, ListCoverageRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
