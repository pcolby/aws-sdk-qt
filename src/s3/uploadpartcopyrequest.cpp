// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadpartcopyrequest.h"
#include "uploadpartcopyrequest_p.h"
#include "uploadpartcopyresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::UploadPartCopyRequest
 * \brief The UploadPartCopyRequest class provides an interface for S3 UploadPartCopy requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::uploadPartCopy
 */

/*!
 * Constructs a copy of \a other.
 */
UploadPartCopyRequest::UploadPartCopyRequest(const UploadPartCopyRequest &other)
    : S3Request(new UploadPartCopyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadPartCopyRequest object.
 */
UploadPartCopyRequest::UploadPartCopyRequest()
    : S3Request(new UploadPartCopyRequestPrivate(S3Request::UploadPartCopyAction, this))
{

}

/*!
 * \reimp
 */
bool UploadPartCopyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadPartCopyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadPartCopyRequest::response(QNetworkReply * const reply) const
{
    return new UploadPartCopyResponse(*this, reply);
}

/*!
 * \class QtAws::S3::UploadPartCopyRequestPrivate
 * \brief The UploadPartCopyRequestPrivate class provides private implementation for UploadPartCopyRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a UploadPartCopyRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
UploadPartCopyRequestPrivate::UploadPartCopyRequestPrivate(
    const S3Request::Action action, UploadPartCopyRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadPartCopyRequest
 * class' copy constructor.
 */
UploadPartCopyRequestPrivate::UploadPartCopyRequestPrivate(
    const UploadPartCopyRequestPrivate &other, UploadPartCopyRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
