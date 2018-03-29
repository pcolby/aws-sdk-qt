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

#include "listbucketmetricsconfigurationsrequest.h"
#include "listbucketmetricsconfigurationsrequest_p.h"
#include "listbucketmetricsconfigurationsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  ListBucketMetricsConfigurationsRequest
 *
 * @brief  Implements S3 ListBucketMetricsConfigurations requests.
 *
 * @see    S3Client::listBucketMetricsConfigurations
 */

/**
 * @brief  Constructs a new ListBucketMetricsConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBucketMetricsConfigurationsRequest::ListBucketMetricsConfigurationsRequest(const ListBucketMetricsConfigurationsRequest &other)
    : S3Request(new ListBucketMetricsConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBucketMetricsConfigurationsRequest object.
 */
ListBucketMetricsConfigurationsRequest::ListBucketMetricsConfigurationsRequest()
    : S3Request(new ListBucketMetricsConfigurationsRequestPrivate(S3Request::ListBucketMetricsConfigurationsAction, this))
{

}

bool ListBucketMetricsConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBucketMetricsConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBucketMetricsConfigurationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketMetricsConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketMetricsConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBucketMetricsConfigurationsRequestPrivate
 *
 * @brief  Private implementation for ListBucketMetricsConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketMetricsConfigurationsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public ListBucketMetricsConfigurationsRequest instance.
 */
ListBucketMetricsConfigurationsRequestPrivate::ListBucketMetricsConfigurationsRequestPrivate(
    const S3Request::Action action, ListBucketMetricsConfigurationsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketMetricsConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBucketMetricsConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBucketMetricsConfigurationsRequest instance.
 */
ListBucketMetricsConfigurationsRequestPrivate::ListBucketMetricsConfigurationsRequestPrivate(
    const ListBucketMetricsConfigurationsRequestPrivate &other, ListBucketMetricsConfigurationsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
