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

#include "listobjectsv2request.h"
#include "listobjectsv2request_p.h"
#include "listobjectsv2response.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectsV2Request
 * \brief The ListObjectsV2Request class provides an interface for S3 ListObjectsV2 requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjectsV2
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectsV2Request::ListObjectsV2Request(const ListObjectsV2Request &other)
    : S3Request(new ListObjectsV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectsV2Request object.
 */
ListObjectsV2Request::ListObjectsV2Request()
    : S3Request(new ListObjectsV2RequestPrivate(S3Request::ListObjectsV2Action, this))
{

}

/*!
 * \reimp
 */
bool ListObjectsV2Request::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectsV2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectsV2Request::response(QNetworkReply * const reply) const
{
    return new ListObjectsV2Response(*this, reply);
}

/*!
 * \class QtAws::S3::ListObjectsV2RequestPrivate
 * \brief The ListObjectsV2RequestPrivate class provides private implementation for ListObjectsV2Request.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectsV2RequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListObjectsV2RequestPrivate::ListObjectsV2RequestPrivate(
    const S3Request::Action action, ListObjectsV2Request * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectsV2Request
 * class' copy constructor.
 */
ListObjectsV2RequestPrivate::ListObjectsV2RequestPrivate(
    const ListObjectsV2RequestPrivate &other, ListObjectsV2Request * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
