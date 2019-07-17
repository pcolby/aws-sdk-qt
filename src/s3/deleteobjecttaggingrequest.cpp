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

#include "deleteobjecttaggingrequest.h"
#include "deleteobjecttaggingrequest_p.h"
#include "deleteobjecttaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectTaggingRequest
 * \brief The DeleteObjectTaggingRequest class provides an interface for S3 DeleteObjectTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjectTagging
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectTaggingRequest::DeleteObjectTaggingRequest(const DeleteObjectTaggingRequest &other)
    : S3Request(new DeleteObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectTaggingRequest object.
 */
DeleteObjectTaggingRequest::DeleteObjectTaggingRequest()
    : S3Request(new DeleteObjectTaggingRequestPrivate(S3Request::DeleteObjectTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteObjectTaggingRequestPrivate
 * \brief The DeleteObjectTaggingRequestPrivate class provides private implementation for DeleteObjectTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteObjectTaggingRequestPrivate::DeleteObjectTaggingRequestPrivate(
    const S3Request::Action action, DeleteObjectTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectTaggingRequest
 * class' copy constructor.
 */
DeleteObjectTaggingRequestPrivate::DeleteObjectTaggingRequestPrivate(
    const DeleteObjectTaggingRequestPrivate &other, DeleteObjectTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
