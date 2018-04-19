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

#include "headobjectrequest.h"
#include "headobjectrequest_p.h"
#include "headobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadObjectRequest
 * \brief The HeadObjectRequest class provides an interface for S3 HeadObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::headObject
 */

/*!
 * Constructs a copy of \a other.
 */
HeadObjectRequest::HeadObjectRequest(const HeadObjectRequest &other)
    : S3Request(new HeadObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a HeadObjectRequest object.
 */
HeadObjectRequest::HeadObjectRequest()
    : S3Request(new HeadObjectRequestPrivate(S3Request::HeadObjectAction, this))
{

}

/*!
 * \reimp
 */
bool HeadObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a HeadObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * HeadObjectRequest::response(QNetworkReply * const reply) const
{
    return new HeadObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::HeadObjectRequestPrivate
 * \brief The HeadObjectRequestPrivate class provides private implementation for HeadObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a HeadObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
HeadObjectRequestPrivate::HeadObjectRequestPrivate(
    const S3Request::Action action, HeadObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the HeadObjectRequest
 * class' copy constructor.
 */
HeadObjectRequestPrivate::HeadObjectRequestPrivate(
    const HeadObjectRequestPrivate &other, HeadObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
