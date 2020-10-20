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
