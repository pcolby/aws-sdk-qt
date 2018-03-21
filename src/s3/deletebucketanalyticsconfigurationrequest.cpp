/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletebucketanalyticsconfigurationrequest.h"
#include "deletebucketanalyticsconfigurationrequest_p.h"
#include "deletebucketanalyticsconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketAnalyticsConfigurationRequest
 *
 * @brief  Implements S3 DeleteBucketAnalyticsConfiguration requests.
 *
 * @see    S3Client::deleteBucketAnalyticsConfiguration
 */

/**
 * @brief  Constructs a new DeleteBucketAnalyticsConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketAnalyticsConfigurationResponse::DeleteBucketAnalyticsConfigurationResponse(

/**
 * @brief  Constructs a new DeleteBucketAnalyticsConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketAnalyticsConfigurationRequest::DeleteBucketAnalyticsConfigurationRequest(const DeleteBucketAnalyticsConfigurationRequest &other)
    : S3Request(new DeleteBucketAnalyticsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketAnalyticsConfigurationRequest object.
 */
DeleteBucketAnalyticsConfigurationRequest::DeleteBucketAnalyticsConfigurationRequest()
    : S3Request(new DeleteBucketAnalyticsConfigurationRequestPrivate(S3Request::DeleteBucketAnalyticsConfigurationAction, this))
{

}

bool DeleteBucketAnalyticsConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketAnalyticsConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketAnalyticsConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * DeleteBucketAnalyticsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketAnalyticsConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketAnalyticsConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketAnalyticsConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketAnalyticsConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketAnalyticsConfigurationRequest instance.
 */
DeleteBucketAnalyticsConfigurationRequestPrivate::DeleteBucketAnalyticsConfigurationRequestPrivate(
    const S3Request::Action action, DeleteBucketAnalyticsConfigurationRequest * const q)
    : DeleteBucketAnalyticsConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketAnalyticsConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketAnalyticsConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketAnalyticsConfigurationRequest instance.
 */
DeleteBucketAnalyticsConfigurationRequestPrivate::DeleteBucketAnalyticsConfigurationRequestPrivate(
    const DeleteBucketAnalyticsConfigurationRequestPrivate &other, DeleteBucketAnalyticsConfigurationRequest * const q)
    : DeleteBucketAnalyticsConfigurationPrivate(other, q)
{

}
