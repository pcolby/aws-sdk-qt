// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketlifecycleconfigurationrequest.h"
#include "putbucketlifecycleconfigurationrequest_p.h"
#include "putbucketlifecycleconfigurationresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketLifecycleConfigurationRequest
 * \brief The PutBucketLifecycleConfigurationRequest class provides an interface for S3Control PutBucketLifecycleConfiguration requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketLifecycleConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketLifecycleConfigurationRequest::PutBucketLifecycleConfigurationRequest(const PutBucketLifecycleConfigurationRequest &other)
    : S3ControlRequest(new PutBucketLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketLifecycleConfigurationRequest object.
 */
PutBucketLifecycleConfigurationRequest::PutBucketLifecycleConfigurationRequest()
    : S3ControlRequest(new PutBucketLifecycleConfigurationRequestPrivate(S3ControlRequest::PutBucketLifecycleConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketLifecycleConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketLifecycleConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutBucketLifecycleConfigurationRequestPrivate
 * \brief The PutBucketLifecycleConfigurationRequestPrivate class provides private implementation for PutBucketLifecycleConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutBucketLifecycleConfigurationRequestPrivate::PutBucketLifecycleConfigurationRequestPrivate(
    const S3ControlRequest::Action action, PutBucketLifecycleConfigurationRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketLifecycleConfigurationRequest
 * class' copy constructor.
 */
PutBucketLifecycleConfigurationRequestPrivate::PutBucketLifecycleConfigurationRequestPrivate(
    const PutBucketLifecycleConfigurationRequestPrivate &other, PutBucketLifecycleConfigurationRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
