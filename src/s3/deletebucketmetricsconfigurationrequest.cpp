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
