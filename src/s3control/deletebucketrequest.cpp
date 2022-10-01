// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketrequest.h"
#include "deletebucketrequest_p.h"
#include "deletebucketresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketRequest
 * \brief The DeleteBucketRequest class provides an interface for S3Control DeleteBucket requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucket
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketRequest::DeleteBucketRequest(const DeleteBucketRequest &other)
    : S3ControlRequest(new DeleteBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketRequest object.
 */
DeleteBucketRequest::DeleteBucketRequest()
    : S3ControlRequest(new DeleteBucketRequestPrivate(S3ControlRequest::DeleteBucketAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteBucketRequestPrivate
 * \brief The DeleteBucketRequestPrivate class provides private implementation for DeleteBucketRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteBucketRequestPrivate::DeleteBucketRequestPrivate(
    const S3ControlRequest::Action action, DeleteBucketRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketRequest
 * class' copy constructor.
 */
DeleteBucketRequestPrivate::DeleteBucketRequestPrivate(
    const DeleteBucketRequestPrivate &other, DeleteBucketRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
