/*
    Copyright 2013-2020 Paul Colby

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
