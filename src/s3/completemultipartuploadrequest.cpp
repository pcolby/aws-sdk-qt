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

#include "completemultipartuploadrequest.h"
#include "completemultipartuploadrequest_p.h"
#include "completemultipartuploadresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CompleteMultipartUploadRequest
 * \brief The CompleteMultipartUploadRequest class provides an interface for S3 CompleteMultipartUpload requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::completeMultipartUpload
 */

/*!
 * Constructs a copy of \a other.
 */
CompleteMultipartUploadRequest::CompleteMultipartUploadRequest(const CompleteMultipartUploadRequest &other)
    : S3Request(new CompleteMultipartUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CompleteMultipartUploadRequest object.
 */
CompleteMultipartUploadRequest::CompleteMultipartUploadRequest()
    : S3Request(new CompleteMultipartUploadRequestPrivate(S3Request::CompleteMultipartUploadAction, this))
{

}

/*!
 * \reimp
 */
bool CompleteMultipartUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CompleteMultipartUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CompleteMultipartUploadRequest::response(QNetworkReply * const reply) const
{
    return new CompleteMultipartUploadResponse(*this, reply);
}

/*!
 * \class QtAws::S3::CompleteMultipartUploadRequestPrivate
 * \brief The CompleteMultipartUploadRequestPrivate class provides private implementation for CompleteMultipartUploadRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CompleteMultipartUploadRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
CompleteMultipartUploadRequestPrivate::CompleteMultipartUploadRequestPrivate(
    const S3Request::Action action, CompleteMultipartUploadRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CompleteMultipartUploadRequest
 * class' copy constructor.
 */
CompleteMultipartUploadRequestPrivate::CompleteMultipartUploadRequestPrivate(
    const CompleteMultipartUploadRequestPrivate &other, CompleteMultipartUploadRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
