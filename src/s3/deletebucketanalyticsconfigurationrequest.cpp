// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketanalyticsconfigurationrequest.h"
#include "deletebucketanalyticsconfigurationrequest_p.h"
#include "deletebucketanalyticsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketAnalyticsConfigurationRequest
 * \brief The DeleteBucketAnalyticsConfigurationRequest class provides an interface for S3 DeleteBucketAnalyticsConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketAnalyticsConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketAnalyticsConfigurationRequest::DeleteBucketAnalyticsConfigurationRequest(const DeleteBucketAnalyticsConfigurationRequest &other)
    : S3Request(new DeleteBucketAnalyticsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketAnalyticsConfigurationRequest object.
 */
DeleteBucketAnalyticsConfigurationRequest::DeleteBucketAnalyticsConfigurationRequest()
    : S3Request(new DeleteBucketAnalyticsConfigurationRequestPrivate(S3Request::DeleteBucketAnalyticsConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketAnalyticsConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketAnalyticsConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketAnalyticsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketAnalyticsConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketAnalyticsConfigurationRequestPrivate
 * \brief The DeleteBucketAnalyticsConfigurationRequestPrivate class provides private implementation for DeleteBucketAnalyticsConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketAnalyticsConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketAnalyticsConfigurationRequestPrivate::DeleteBucketAnalyticsConfigurationRequestPrivate(
    const S3Request::Action action, DeleteBucketAnalyticsConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketAnalyticsConfigurationRequest
 * class' copy constructor.
 */
DeleteBucketAnalyticsConfigurationRequestPrivate::DeleteBucketAnalyticsConfigurationRequestPrivate(
    const DeleteBucketAnalyticsConfigurationRequestPrivate &other, DeleteBucketAnalyticsConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
