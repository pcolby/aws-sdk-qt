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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
