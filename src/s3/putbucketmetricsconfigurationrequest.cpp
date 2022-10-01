// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketmetricsconfigurationrequest.h"
#include "putbucketmetricsconfigurationrequest_p.h"
#include "putbucketmetricsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketMetricsConfigurationRequest
 * \brief The PutBucketMetricsConfigurationRequest class provides an interface for S3 PutBucketMetricsConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketMetricsConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketMetricsConfigurationRequest::PutBucketMetricsConfigurationRequest(const PutBucketMetricsConfigurationRequest &other)
    : S3Request(new PutBucketMetricsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketMetricsConfigurationRequest object.
 */
PutBucketMetricsConfigurationRequest::PutBucketMetricsConfigurationRequest()
    : S3Request(new PutBucketMetricsConfigurationRequestPrivate(S3Request::PutBucketMetricsConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketMetricsConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketMetricsConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketMetricsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketMetricsConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketMetricsConfigurationRequestPrivate
 * \brief The PutBucketMetricsConfigurationRequestPrivate class provides private implementation for PutBucketMetricsConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketMetricsConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketMetricsConfigurationRequestPrivate::PutBucketMetricsConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketMetricsConfigurationRequest
 * class' copy constructor.
 */
PutBucketMetricsConfigurationRequestPrivate::PutBucketMetricsConfigurationRequestPrivate(
    const PutBucketMetricsConfigurationRequestPrivate &other, PutBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
