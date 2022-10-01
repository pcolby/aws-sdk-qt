// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketversioningrequest.h"
#include "getbucketversioningrequest_p.h"
#include "getbucketversioningresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketVersioningRequest
 * \brief The GetBucketVersioningRequest class provides an interface for S3Control GetBucketVersioning requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucketVersioning
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest(const GetBucketVersioningRequest &other)
    : S3ControlRequest(new GetBucketVersioningRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketVersioningRequest object.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest()
    : S3ControlRequest(new GetBucketVersioningRequestPrivate(S3ControlRequest::GetBucketVersioningAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketVersioningRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketVersioningResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketVersioningRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketVersioningResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetBucketVersioningRequestPrivate
 * \brief The GetBucketVersioningRequestPrivate class provides private implementation for GetBucketVersioningRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketVersioningRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const S3ControlRequest::Action action, GetBucketVersioningRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketVersioningRequest
 * class' copy constructor.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const GetBucketVersioningRequestPrivate &other, GetBucketVersioningRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
