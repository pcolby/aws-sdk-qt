// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
