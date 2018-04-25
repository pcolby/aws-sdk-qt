/*
    Copyright 2013-2018 Paul Colby

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
