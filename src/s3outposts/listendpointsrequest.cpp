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

#include "listendpointsrequest.h"
#include "listendpointsrequest_p.h"
#include "listendpointsresponse.h"
#include "s3outpostsrequest_p.h"

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::ListEndpointsRequest
 * \brief The ListEndpointsRequest class provides an interface for S3Outposts ListEndpoints requests.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::listEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListEndpointsRequest::ListEndpointsRequest(const ListEndpointsRequest &other)
    : S3OutpostsRequest(new ListEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEndpointsRequest object.
 */
ListEndpointsRequest::ListEndpointsRequest()
    : S3OutpostsRequest(new ListEndpointsRequestPrivate(S3OutpostsRequest::ListEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::S3Outposts::ListEndpointsRequestPrivate
 * \brief The ListEndpointsRequestPrivate class provides private implementation for ListEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a ListEndpointsRequestPrivate object for S3Outposts \a action,
 * with public implementation \a q.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const S3OutpostsRequest::Action action, ListEndpointsRequest * const q)
    : S3OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointsRequest
 * class' copy constructor.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const ListEndpointsRequestPrivate &other, ListEndpointsRequest * const q)
    : S3OutpostsRequestPrivate(other, q)
{

}

} // namespace S3Outposts
} // namespace QtAws
