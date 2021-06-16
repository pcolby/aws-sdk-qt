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
