// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketmetricsconfigurationrequest.h"
#include "getbucketmetricsconfigurationrequest_p.h"
#include "getbucketmetricsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketMetricsConfigurationRequest
 * \brief The GetBucketMetricsConfigurationRequest class provides an interface for S3 GetBucketMetricsConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketMetricsConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketMetricsConfigurationRequest::GetBucketMetricsConfigurationRequest(const GetBucketMetricsConfigurationRequest &other)
    : S3Request(new GetBucketMetricsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketMetricsConfigurationRequest object.
 */
GetBucketMetricsConfigurationRequest::GetBucketMetricsConfigurationRequest()
    : S3Request(new GetBucketMetricsConfigurationRequestPrivate(S3Request::GetBucketMetricsConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketMetricsConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketMetricsConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketMetricsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketMetricsConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketMetricsConfigurationRequestPrivate
 * \brief The GetBucketMetricsConfigurationRequestPrivate class provides private implementation for GetBucketMetricsConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketMetricsConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketMetricsConfigurationRequestPrivate::GetBucketMetricsConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketMetricsConfigurationRequest
 * class' copy constructor.
 */
GetBucketMetricsConfigurationRequestPrivate::GetBucketMetricsConfigurationRequestPrivate(
    const GetBucketMetricsConfigurationRequestPrivate &other, GetBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
