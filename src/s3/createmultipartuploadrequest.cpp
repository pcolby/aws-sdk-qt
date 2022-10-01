// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
