/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbucketaccelerateconfigurationrequest.h"
#include "getbucketaccelerateconfigurationrequest_p.h"
#include "getbucketaccelerateconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketAccelerateConfigurationRequest
 * \brief The GetBucketAccelerateConfigurationRequest class provides an interface for S3 GetBucketAccelerateConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketAccelerateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketAccelerateConfigurationRequest::GetBucketAccelerateConfigurationRequest(const GetBucketAccelerateConfigurationRequest &other)
    : S3Request(new GetBucketAccelerateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketAccelerateConfigurationRequest object.
 */
GetBucketAccelerateConfigurationRequest::GetBucketAccelerateConfigurationRequest()
    : S3Request(new GetBucketAccelerateConfigurationRequestPrivate(S3Request::GetBucketAccelerateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketAccelerateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketAccelerateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketAccelerateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketAccelerateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketAccelerateConfigurationRequestPrivate
 * \brief The GetBucketAccelerateConfigurationRequestPrivate class provides private implementation for GetBucketAccelerateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 *
 * Constructs a GetBucketAccelerateConfigurationRequestPrivate object for S3 \a action with,
 * public implementation \a q.
 */
GetBucketAccelerateConfigurationRequestPrivate::GetBucketAccelerateConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketAccelerateConfigurationRequest
 * class' copy constructor.
 */
GetBucketAccelerateConfigurationRequestPrivate::GetBucketAccelerateConfigurationRequestPrivate(
    const GetBucketAccelerateConfigurationRequestPrivate &other, GetBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
