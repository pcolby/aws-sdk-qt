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

#include "listsharedendpointsrequest.h"
#include "listsharedendpointsrequest_p.h"
#include "listsharedendpointsresponse.h"
#include "s3outpostsrequest_p.h"

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsRequest
 * \brief The ListSharedEndpointsRequest class provides an interface for S3Outposts ListSharedEndpoints requests.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::listSharedEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListSharedEndpointsRequest::ListSharedEndpointsRequest(const ListSharedEndpointsRequest &other)
    : S3OutpostsRequest(new ListSharedEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSharedEndpointsRequest object.
 */
ListSharedEndpointsRequest::ListSharedEndpointsRequest()
    : S3OutpostsRequest(new ListSharedEndpointsRequestPrivate(S3OutpostsRequest::ListSharedEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSharedEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSharedEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSharedEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListSharedEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsRequestPrivate
 * \brief The ListSharedEndpointsRequestPrivate class provides private implementation for ListSharedEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a ListSharedEndpointsRequestPrivate object for S3Outposts \a action,
 * with public implementation \a q.
 */
ListSharedEndpointsRequestPrivate::ListSharedEndpointsRequestPrivate(
    const S3OutpostsRequest::Action action, ListSharedEndpointsRequest * const q)
    : S3OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSharedEndpointsRequest
 * class' copy constructor.
 */
ListSharedEndpointsRequestPrivate::ListSharedEndpointsRequestPrivate(
    const ListSharedEndpointsRequestPrivate &other, ListSharedEndpointsRequest * const q)
    : S3OutpostsRequestPrivate(other, q)
{

}

} // namespace S3Outposts
} // namespace QtAws
