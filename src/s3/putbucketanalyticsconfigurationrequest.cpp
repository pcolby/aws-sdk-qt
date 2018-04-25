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
