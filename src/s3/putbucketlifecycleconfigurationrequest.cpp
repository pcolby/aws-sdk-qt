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

#include "putbucketlifecycleconfigurationrequest.h"
#include "putbucketlifecycleconfigurationrequest_p.h"
#include "putbucketlifecycleconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketLifecycleConfigurationRequest
 *
 * @brief  Implements S3 PutBucketLifecycleConfiguration requests.
 *
 * @see    S3Client::putBucketLifecycleConfiguration
 */

/**
 * @brief  Constructs a new PutBucketLifecycleConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketLifecycleConfigurationRequest::PutBucketLifecycleConfigurationRequest(const PutBucketLifecycleConfigurationRequest &other)
    : S3Request(new PutBucketLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketLifecycleConfigurationRequest object.
 */
PutBucketLifecycleConfigurationRequest::PutBucketLifecycleConfigurationRequest()
    : S3Request(new PutBucketLifecycleConfigurationRequestPrivate(S3Request::PutBucketLifecycleConfigurationAction, this))
{

}

bool PutBucketLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketLifecycleConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketLifecycleConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketLifecycleConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketLifecycleConfigurationRequestPrivate
 *
 * @brief  Private implementation for PutBucketLifecycleConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketLifecycleConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketLifecycleConfigurationRequest instance.
 */
PutBucketLifecycleConfigurationRequestPrivate::PutBucketLifecycleConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketLifecycleConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketLifecycleConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketLifecycleConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketLifecycleConfigurationRequest instance.
 */
PutBucketLifecycleConfigurationRequestPrivate::PutBucketLifecycleConfigurationRequestPrivate(
    const PutBucketLifecycleConfigurationRequestPrivate &other, PutBucketLifecycleConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
