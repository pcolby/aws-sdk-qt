// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketanalyticsconfigurationrequest.h"
#include "getbucketanalyticsconfigurationrequest_p.h"
#include "getbucketanalyticsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketAnalyticsConfigurationRequest
 * \brief The GetBucketAnalyticsConfigurationRequest class provides an interface for S3 GetBucketAnalyticsConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketAnalyticsConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketAnalyticsConfigurationRequest::GetBucketAnalyticsConfigurationRequest(const GetBucketAnalyticsConfigurationRequest &other)
    : S3Request(new GetBucketAnalyticsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketAnalyticsConfigurationRequest object.
 */
GetBucketAnalyticsConfigurationRequest::GetBucketAnalyticsConfigurationRequest()
    : S3Request(new GetBucketAnalyticsConfigurationRequestPrivate(S3Request::GetBucketAnalyticsConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketAnalyticsConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketAnalyticsConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketAnalyticsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketAnalyticsConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketAnalyticsConfigurationRequestPrivate
 * \brief The GetBucketAnalyticsConfigurationRequestPrivate class provides private implementation for GetBucketAnalyticsConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketAnalyticsConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketAnalyticsConfigurationRequestPrivate::GetBucketAnalyticsConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketAnalyticsConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketAnalyticsConfigurationRequest
 * class' copy constructor.
 */
GetBucketAnalyticsConfigurationRequestPrivate::GetBucketAnalyticsConfigurationRequestPrivate(
    const GetBucketAnalyticsConfigurationRequestPrivate &other, GetBucketAnalyticsConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
