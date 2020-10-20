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

#include "getbucketlifecycleconfigurationrequest.h"
#include "getbucketlifecycleconfigurationrequest_p.h"
#include "getbucketlifecycleconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationRequest
 * \brief The GetBucketLifecycleConfigurationRequest class provides an interface for S3 GetBucketLifecycleConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLifecycleConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketLifecycleConfigurationRequest::GetBucketLifecycleConfigurationRequest(const GetBucketLifecycleConfigurationRequest &other)
    : S3Request(new GetBucketLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketLifecycleConfigurationRequest object.
 */
GetBucketLifecycleConfigurationRequest::GetBucketLifecycleConfigurationRequest()
    : S3Request(new GetBucketLifecycleConfigurationRequestPrivate(S3Request::GetBucketLifecycleConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketLifecycleConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLifecycleConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationRequestPrivate
 * \brief The GetBucketLifecycleConfigurationRequestPrivate class provides private implementation for GetBucketLifecycleConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketLifecycleConfigurationRequestPrivate::GetBucketLifecycleConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketLifecycleConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLifecycleConfigurationRequest
 * class' copy constructor.
 */
GetBucketLifecycleConfigurationRequestPrivate::GetBucketLifecycleConfigurationRequestPrivate(
    const GetBucketLifecycleConfigurationRequestPrivate &other, GetBucketLifecycleConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
