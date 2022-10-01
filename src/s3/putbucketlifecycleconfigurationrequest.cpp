// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketlifecycleconfigurationrequest.h"
#include "putbucketlifecycleconfigurationrequest_p.h"
#include "putbucketlifecycleconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLifecycleConfigurationRequest
 * \brief The PutBucketLifecycleConfigurationRequest class provides an interface for S3 PutBucketLifecycleConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLifecycleConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketLifecycleConfigurationRequest::PutBucketLifecycleConfigurationRequest(const PutBucketLifecycleConfigurationRequest &other)
    : S3Request(new PutBucketLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketLifecycleConfigurationRequest object.
 */
PutBucketLifecycleConfigurationRequest::PutBucketLifecycleConfigurationRequest()
    : S3Request(new PutBucketLifecycleConfigurationRequestPrivate(S3Request::PutBucketLifecycleConfigurationAction, this))
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
 * \class QtAws::S3::PutBucketLifecycleConfigurationRequestPrivate
 * \brief The PutBucketLifecycleConfigurationRequestPrivate class provides private implementation for PutBucketLifecycleConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketLifecycleConfigurationRequestPrivate::PutBucketLifecycleConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketLifecycleConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
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
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
