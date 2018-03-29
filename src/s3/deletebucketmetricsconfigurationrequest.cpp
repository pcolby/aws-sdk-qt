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

#include "deletebucketmetricsconfigurationrequest.h"
#include "deletebucketmetricsconfigurationrequest_p.h"
#include "deletebucketmetricsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketMetricsConfigurationRequest
 *
 * @brief  Implements S3 DeleteBucketMetricsConfiguration requests.
 *
 * @see    S3Client::deleteBucketMetricsConfiguration
 */

/**
 * @brief  Constructs a new DeleteBucketMetricsConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketMetricsConfigurationRequest::DeleteBucketMetricsConfigurationRequest(const DeleteBucketMetricsConfigurationRequest &other)
    : S3Request(new DeleteBucketMetricsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketMetricsConfigurationRequest object.
 */
DeleteBucketMetricsConfigurationRequest::DeleteBucketMetricsConfigurationRequest()
    : S3Request(new DeleteBucketMetricsConfigurationRequestPrivate(S3Request::DeleteBucketMetricsConfigurationAction, this))
{

}

bool DeleteBucketMetricsConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketMetricsConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketMetricsConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketMetricsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketMetricsConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketMetricsConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketMetricsConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketMetricsConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketMetricsConfigurationRequest instance.
 */
DeleteBucketMetricsConfigurationRequestPrivate::DeleteBucketMetricsConfigurationRequestPrivate(
    const S3Request::Action action, DeleteBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketMetricsConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketMetricsConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketMetricsConfigurationRequest instance.
 */
DeleteBucketMetricsConfigurationRequestPrivate::DeleteBucketMetricsConfigurationRequestPrivate(
    const DeleteBucketMetricsConfigurationRequestPrivate &other, DeleteBucketMetricsConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
