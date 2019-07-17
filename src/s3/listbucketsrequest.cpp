/*
    Copyright 2013-2019 Paul Colby

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

#include "listbucketsrequest.h"
#include "listbucketsrequest_p.h"
#include "listbucketsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketsRequest
 * \brief The ListBucketsRequest class provides an interface for S3 ListBuckets requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBuckets
 */

/*!
 * Constructs a copy of \a other.
 */
ListBucketsRequest::ListBucketsRequest(const ListBucketsRequest &other)
    : S3Request(new ListBucketsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBucketsRequest object.
 */
ListBucketsRequest::ListBucketsRequest()
    : S3Request(new ListBucketsRequestPrivate(S3Request::ListBucketsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBucketsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBucketsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListBucketsRequestPrivate
 * \brief The ListBucketsRequestPrivate class provides private implementation for ListBucketsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListBucketsRequestPrivate::ListBucketsRequestPrivate(
    const S3Request::Action action, ListBucketsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBucketsRequest
 * class' copy constructor.
 */
ListBucketsRequestPrivate::ListBucketsRequestPrivate(
    const ListBucketsRequestPrivate &other, ListBucketsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
