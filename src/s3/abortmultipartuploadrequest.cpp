// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "abortmultipartuploadrequest.h"
#include "abortmultipartuploadrequest_p.h"
#include "abortmultipartuploadresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::AbortMultipartUploadRequest
 * \brief The AbortMultipartUploadRequest class provides an interface for S3 AbortMultipartUpload requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::abortMultipartUpload
 */

/*!
 * Constructs a copy of \a other.
 */
AbortMultipartUploadRequest::AbortMultipartUploadRequest(const AbortMultipartUploadRequest &other)
    : S3Request(new AbortMultipartUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AbortMultipartUploadRequest object.
 */
AbortMultipartUploadRequest::AbortMultipartUploadRequest()
    : S3Request(new AbortMultipartUploadRequestPrivate(S3Request::AbortMultipartUploadAction, this))
{

}

/*!
 * \reimp
 */
bool AbortMultipartUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AbortMultipartUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AbortMultipartUploadRequest::response(QNetworkReply * const reply) const
{
    return new AbortMultipartUploadResponse(*this, reply);
}

/*!
 * \class QtAws::S3::AbortMultipartUploadRequestPrivate
 * \brief The AbortMultipartUploadRequestPrivate class provides private implementation for AbortMultipartUploadRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a AbortMultipartUploadRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
AbortMultipartUploadRequestPrivate::AbortMultipartUploadRequestPrivate(
    const S3Request::Action action, AbortMultipartUploadRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AbortMultipartUploadRequest
 * class' copy constructor.
 */
AbortMultipartUploadRequestPrivate::AbortMultipartUploadRequestPrivate(
    const AbortMultipartUploadRequestPrivate &other, AbortMultipartUploadRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
