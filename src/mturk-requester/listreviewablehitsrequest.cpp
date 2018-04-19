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

#include "listreviewablehitsrequest.h"
#include "listreviewablehitsrequest_p.h"
#include "listreviewablehitsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListReviewableHITsRequest
 * \brief The ListReviewableHITsRequest class provides an interface for MTurk ListReviewableHITs requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listReviewableHITs
 */

/*!
 * Constructs a copy of \a other.
 */
ListReviewableHITsRequest::ListReviewableHITsRequest(const ListReviewableHITsRequest &other)
    : MTurkRequest(new ListReviewableHITsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReviewableHITsRequest object.
 */
ListReviewableHITsRequest::ListReviewableHITsRequest()
    : MTurkRequest(new ListReviewableHITsRequestPrivate(MTurkRequest::ListReviewableHITsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReviewableHITsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReviewableHITsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReviewableHITsRequest::response(QNetworkReply * const reply) const
{
    return new ListReviewableHITsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListReviewableHITsRequestPrivate
 * \brief The ListReviewableHITsRequestPrivate class provides private implementation for ListReviewableHITsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListReviewableHITsRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListReviewableHITsRequestPrivate::ListReviewableHITsRequestPrivate(
    const MTurkRequest::Action action, ListReviewableHITsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReviewableHITsRequest
 * class' copy constructor.
 */
ListReviewableHITsRequestPrivate::ListReviewableHITsRequestPrivate(
    const ListReviewableHITsRequestPrivate &other, ListReviewableHITsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
