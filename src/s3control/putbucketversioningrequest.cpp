// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketversioningrequest.h"
#include "putbucketversioningrequest_p.h"
#include "putbucketversioningresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketVersioningRequest
 * \brief The PutBucketVersioningRequest class provides an interface for S3Control PutBucketVersioning requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketVersioning
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketVersioningRequest::PutBucketVersioningRequest(const PutBucketVersioningRequest &other)
    : S3ControlRequest(new PutBucketVersioningRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketVersioningRequest object.
 */
PutBucketVersioningRequest::PutBucketVersioningRequest()
    : S3ControlRequest(new PutBucketVersioningRequestPrivate(S3ControlRequest::PutBucketVersioningAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketVersioningRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketVersioningResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketVersioningRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketVersioningResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutBucketVersioningRequestPrivate
 * \brief The PutBucketVersioningRequestPrivate class provides private implementation for PutBucketVersioningRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketVersioningRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutBucketVersioningRequestPrivate::PutBucketVersioningRequestPrivate(
    const S3ControlRequest::Action action, PutBucketVersioningRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketVersioningRequest
 * class' copy constructor.
 */
PutBucketVersioningRequestPrivate::PutBucketVersioningRequestPrivate(
    const PutBucketVersioningRequestPrivate &other, PutBucketVersioningRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
