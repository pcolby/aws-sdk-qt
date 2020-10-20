/*
    Copyright 2013-2020 Paul Colby

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

#include "listobjectversionsrequest.h"
#include "listobjectversionsrequest_p.h"
#include "listobjectversionsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectVersionsRequest
 * \brief The ListObjectVersionsRequest class provides an interface for S3 ListObjectVersions requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjectVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectVersionsRequest::ListObjectVersionsRequest(const ListObjectVersionsRequest &other)
    : S3Request(new ListObjectVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectVersionsRequest object.
 */
ListObjectVersionsRequest::ListObjectVersionsRequest()
    : S3Request(new ListObjectVersionsRequestPrivate(S3Request::ListObjectVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListObjectVersionsRequestPrivate
 * \brief The ListObjectVersionsRequestPrivate class provides private implementation for ListObjectVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectVersionsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListObjectVersionsRequestPrivate::ListObjectVersionsRequestPrivate(
    const S3Request::Action action, ListObjectVersionsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectVersionsRequest
 * class' copy constructor.
 */
ListObjectVersionsRequestPrivate::ListObjectVersionsRequestPrivate(
    const ListObjectVersionsRequestPrivate &other, ListObjectVersionsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
