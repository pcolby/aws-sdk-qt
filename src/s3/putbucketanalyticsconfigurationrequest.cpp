// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketanalyticsconfigurationrequest.h"
#include "putbucketanalyticsconfigurationrequest_p.h"
#include "putbucketanalyticsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAnalyticsConfigurationRequest
 * \brief The PutBucketAnalyticsConfigurationRequest class provides an interface for S3 PutBucketAnalyticsConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAnalyticsConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketAnalyticsConfigurationRequest::PutBucketAnalyticsConfigurationRequest(const PutBucketAnalyticsConfigurationRequest &other)
    : S3Request(new PutBucketAnalyticsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketAnalyticsConfigurationRequest object.
 */
PutBucketAnalyticsConfigurationRequest::PutBucketAnalyticsConfigurationRequest()
    : S3Request(new PutBucketAnalyticsConfigurationRequestPrivate(S3Request::PutBucketAnalyticsConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketAnalyticsConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketAnalyticsConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketAnalyticsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketAnalyticsConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketAnalyticsConfigurationRequestPrivate
 * \brief The PutBucketAnalyticsConfigurationRequestPrivate class provides private implementation for PutBucketAnalyticsConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAnalyticsConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketAnalyticsConfigurationRequestPrivate::PutBucketAnalyticsConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketAnalyticsConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketAnalyticsConfigurationRequest
 * class' copy constructor.
 */
PutBucketAnalyticsConfigurationRequestPrivate::PutBucketAnalyticsConfigurationRequestPrivate(
    const PutBucketAnalyticsConfigurationRequestPrivate &other, PutBucketAnalyticsConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
