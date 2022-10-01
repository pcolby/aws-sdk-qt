// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketmetricsconfigurationrequest.h"
#include "deletebucketmetricsconfigurationrequest_p.h"
#include "deletebucketmetricsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketMetricsConfigurationRequest
 * \brief The DeleteBucketMetricsConfigurationRequest class provides an interface for S3 DeleteBucketMetricsConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketMetricsConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketMetricsConfigurationRequest::DeleteBucketMetricsConfigurationRequest(const DeleteBucketMetricsConfigurationRequest &other)
    : S3Request(new DeleteBucketMetricsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketMetricsConfigurationRequest object.
 */
DeleteBucketMetricsConfigurationRequest::DeleteBucketMetricsConfigurationRequest()
    : S3Request(new DeleteBucketMetricsConfigurationRequestPrivate(S3Request::DeleteBucketMetricsConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketMetricsConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketMetricsConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketMetricsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketMetricsConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketMetricsConfigurationRequestPrivate
 * \brief The DeleteBucketMetricsConfigurationRequestPrivate class provides private implementation for DeleteBucketMetricsConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketMetricsConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketMetricsConfigurationRequestPrivate::DeleteBucketMetricsConfigurationRequestPrivate(
    const S3Request::Action action, DeleteBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketMetricsConfigurationRequest
 * class' copy constructor.
 */
DeleteBucketMetricsConfigurationRequestPrivate::DeleteBucketMetricsConfigurationRequestPrivate(
    const DeleteBucketMetricsConfigurationRequestPrivate &other, DeleteBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
