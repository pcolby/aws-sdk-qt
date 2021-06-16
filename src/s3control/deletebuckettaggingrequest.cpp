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

#include "deletebuckettaggingrequest.h"
#include "deletebuckettaggingrequest_p.h"
#include "deletebuckettaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketTaggingRequest
 * \brief The DeleteBucketTaggingRequest class provides an interface for S3Control DeleteBucketTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketTagging
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest(const DeleteBucketTaggingRequest &other)
    : S3ControlRequest(new DeleteBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketTaggingRequest object.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest()
    : S3ControlRequest(new DeleteBucketTaggingRequestPrivate(S3ControlRequest::DeleteBucketTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteBucketTaggingRequestPrivate
 * \brief The DeleteBucketTaggingRequestPrivate class provides private implementation for DeleteBucketTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const S3ControlRequest::Action action, DeleteBucketTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketTaggingRequest
 * class' copy constructor.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const DeleteBucketTaggingRequestPrivate &other, DeleteBucketTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
