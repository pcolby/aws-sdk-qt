// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketlifecycleconfigurationrequest.h"
#include "getbucketlifecycleconfigurationrequest_p.h"
#include "getbucketlifecycleconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationRequest
 * \brief The GetBucketLifecycleConfigurationRequest class provides an interface for S3 GetBucketLifecycleConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLifecycleConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketLifecycleConfigurationRequest::GetBucketLifecycleConfigurationRequest(const GetBucketLifecycleConfigurationRequest &other)
    : S3Request(new GetBucketLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketLifecycleConfigurationRequest object.
 */
GetBucketLifecycleConfigurationRequest::GetBucketLifecycleConfigurationRequest()
    : S3Request(new GetBucketLifecycleConfigurationRequestPrivate(S3Request::GetBucketLifecycleConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketLifecycleConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLifecycleConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationRequestPrivate
 * \brief The GetBucketLifecycleConfigurationRequestPrivate class provides private implementation for GetBucketLifecycleConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketLifecycleConfigurationRequestPrivate::GetBucketLifecycleConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketLifecycleConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLifecycleConfigurationRequest
 * class' copy constructor.
 */
GetBucketLifecycleConfigurationRequestPrivate::GetBucketLifecycleConfigurationRequestPrivate(
    const GetBucketLifecycleConfigurationRequestPrivate &other, GetBucketLifecycleConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
