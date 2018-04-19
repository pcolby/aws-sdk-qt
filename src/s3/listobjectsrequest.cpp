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

#include "listobjectsrequest.h"
#include "listobjectsrequest_p.h"
#include "listobjectsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectsRequest
 * \brief The ListObjectsRequest class provides an interface for S3 ListObjects requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectsRequest::ListObjectsRequest(const ListObjectsRequest &other)
    : S3Request(new ListObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectsRequest object.
 */
ListObjectsRequest::ListObjectsRequest()
    : S3Request(new ListObjectsRequestPrivate(S3Request::ListObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListObjectsRequestPrivate
 * \brief The ListObjectsRequestPrivate class provides private implementation for ListObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 *
 * Constructs a ListObjectsRequestPrivate object for S3 \a action with,
 * public implementation \a q.
 */
ListObjectsRequestPrivate::ListObjectsRequestPrivate(
    const S3Request::Action action, ListObjectsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectsRequest
 * class' copy constructor.
 */
ListObjectsRequestPrivate::ListObjectsRequestPrivate(
    const ListObjectsRequestPrivate &other, ListObjectsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
