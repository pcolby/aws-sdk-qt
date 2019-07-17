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

#include "createmultipartuploadrequest.h"
#include "createmultipartuploadrequest_p.h"
#include "createmultipartuploadresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CreateMultipartUploadRequest
 * \brief The CreateMultipartUploadRequest class provides an interface for S3 CreateMultipartUpload requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::createMultipartUpload
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMultipartUploadRequest::CreateMultipartUploadRequest(const CreateMultipartUploadRequest &other)
    : S3Request(new CreateMultipartUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMultipartUploadRequest object.
 */
CreateMultipartUploadRequest::CreateMultipartUploadRequest()
    : S3Request(new CreateMultipartUploadRequestPrivate(S3Request::CreateMultipartUploadAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMultipartUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMultipartUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMultipartUploadRequest::response(QNetworkReply * const reply) const
{
    return new CreateMultipartUploadResponse(*this, reply);
}

/*!
 * \class QtAws::S3::CreateMultipartUploadRequestPrivate
 * \brief The CreateMultipartUploadRequestPrivate class provides private implementation for CreateMultipartUploadRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CreateMultipartUploadRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
CreateMultipartUploadRequestPrivate::CreateMultipartUploadRequestPrivate(
    const S3Request::Action action, CreateMultipartUploadRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMultipartUploadRequest
 * class' copy constructor.
 */
CreateMultipartUploadRequestPrivate::CreateMultipartUploadRequestPrivate(
    const CreateMultipartUploadRequestPrivate &other, CreateMultipartUploadRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
