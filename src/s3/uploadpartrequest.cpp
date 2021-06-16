/*
    Copyright 2013-2021 Paul Colby

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

#include "uploadpartrequest.h"
#include "uploadpartrequest_p.h"
#include "uploadpartresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::UploadPartRequest
 * \brief The UploadPartRequest class provides an interface for S3 UploadPart requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::uploadPart
 */

/*!
 * Constructs a copy of \a other.
 */
UploadPartRequest::UploadPartRequest(const UploadPartRequest &other)
    : S3Request(new UploadPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadPartRequest object.
 */
UploadPartRequest::UploadPartRequest()
    : S3Request(new UploadPartRequestPrivate(S3Request::UploadPartAction, this))
{

}

/*!
 * \reimp
 */
bool UploadPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadPartRequest::response(QNetworkReply * const reply) const
{
    return new UploadPartResponse(*this, reply);
}

/*!
 * \class QtAws::S3::UploadPartRequestPrivate
 * \brief The UploadPartRequestPrivate class provides private implementation for UploadPartRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a UploadPartRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
UploadPartRequestPrivate::UploadPartRequestPrivate(
    const S3Request::Action action, UploadPartRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadPartRequest
 * class' copy constructor.
 */
UploadPartRequestPrivate::UploadPartRequestPrivate(
    const UploadPartRequestPrivate &other, UploadPartRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
