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

#include "listqualificationrequestsrequest.h"
#include "listqualificationrequestsrequest_p.h"
#include "listqualificationrequestsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationRequestsRequest
 * \brief The ListQualificationRequestsRequest class provides an interface for MTurk ListQualificationRequests requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listQualificationRequests
 */

/*!
 * Constructs a copy of \a other.
 */
ListQualificationRequestsRequest::ListQualificationRequestsRequest(const ListQualificationRequestsRequest &other)
    : MTurkRequest(new ListQualificationRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQualificationRequestsRequest object.
 */
ListQualificationRequestsRequest::ListQualificationRequestsRequest()
    : MTurkRequest(new ListQualificationRequestsRequestPrivate(MTurkRequest::ListQualificationRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool ListQualificationRequestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQualificationRequestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQualificationRequestsRequest::response(QNetworkReply * const reply) const
{
    return new ListQualificationRequestsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListQualificationRequestsRequestPrivate
 * \brief The ListQualificationRequestsRequestPrivate class provides private implementation for ListQualificationRequestsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a ListQualificationRequestsRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
ListQualificationRequestsRequestPrivate::ListQualificationRequestsRequestPrivate(
    const MTurkRequest::Action action, ListQualificationRequestsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQualificationRequestsRequest
 * class' copy constructor.
 */
ListQualificationRequestsRequestPrivate::ListQualificationRequestsRequestPrivate(
    const ListQualificationRequestsRequestPrivate &other, ListQualificationRequestsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
