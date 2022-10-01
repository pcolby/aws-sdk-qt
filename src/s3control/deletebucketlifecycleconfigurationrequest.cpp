// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketlifecycleconfigurationrequest.h"
#include "deletebucketlifecycleconfigurationrequest_p.h"
#include "deletebucketlifecycleconfigurationresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketLifecycleConfigurationRequest
 * \brief The DeleteBucketLifecycleConfigurationRequest class provides an interface for S3Control DeleteBucketLifecycleConfiguration requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketLifecycleConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketLifecycleConfigurationRequest::DeleteBucketLifecycleConfigurationRequest(const DeleteBucketLifecycleConfigurationRequest &other)
    : S3ControlRequest(new DeleteBucketLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketLifecycleConfigurationRequest object.
 */
DeleteBucketLifecycleConfigurationRequest::DeleteBucketLifecycleConfigurationRequest()
    : S3ControlRequest(new DeleteBucketLifecycleConfigurationRequestPrivate(S3ControlRequest::DeleteBucketLifecycleConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketLifecycleConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketLifecycleConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteBucketLifecycleConfigurationRequestPrivate
 * \brief The DeleteBucketLifecycleConfigurationRequestPrivate class provides private implementation for DeleteBucketLifecycleConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketLifecycleConfigurationRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteBucketLifecycleConfigurationRequestPrivate::DeleteBucketLifecycleConfigurationRequestPrivate(
    const S3ControlRequest::Action action, DeleteBucketLifecycleConfigurationRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketLifecycleConfigurationRequest
 * class' copy constructor.
 */
DeleteBucketLifecycleConfigurationRequestPrivate::DeleteBucketLifecycleConfigurationRequestPrivate(
    const DeleteBucketLifecycleConfigurationRequestPrivate &other, DeleteBucketLifecycleConfigurationRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
