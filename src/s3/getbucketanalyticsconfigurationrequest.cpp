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
