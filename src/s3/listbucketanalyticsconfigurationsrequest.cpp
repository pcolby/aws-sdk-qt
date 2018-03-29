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

#include "listbucketanalyticsconfigurationsrequest.h"
#include "listbucketanalyticsconfigurationsrequest_p.h"
#include "listbucketanalyticsconfigurationsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  ListBucketAnalyticsConfigurationsRequest
 *
 * @brief  Implements S3 ListBucketAnalyticsConfigurations requests.
 *
 * @see    S3Client::listBucketAnalyticsConfigurations
 */

/**
 * @brief  Constructs a new ListBucketAnalyticsConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBucketAnalyticsConfigurationsRequest::ListBucketAnalyticsConfigurationsRequest(const ListBucketAnalyticsConfigurationsRequest &other)
    : S3Request(new ListBucketAnalyticsConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBucketAnalyticsConfigurationsRequest object.
 */
ListBucketAnalyticsConfigurationsRequest::ListBucketAnalyticsConfigurationsRequest()
    : S3Request(new ListBucketAnalyticsConfigurationsRequestPrivate(S3Request::ListBucketAnalyticsConfigurationsAction, this))
{

}

bool ListBucketAnalyticsConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBucketAnalyticsConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBucketAnalyticsConfigurationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketAnalyticsConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketAnalyticsConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBucketAnalyticsConfigurationsRequestPrivate
 *
 * @brief  Private implementation for ListBucketAnalyticsConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketAnalyticsConfigurationsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public ListBucketAnalyticsConfigurationsRequest instance.
 */
ListBucketAnalyticsConfigurationsRequestPrivate::ListBucketAnalyticsConfigurationsRequestPrivate(
    const S3Request::Action action, ListBucketAnalyticsConfigurationsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketAnalyticsConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBucketAnalyticsConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBucketAnalyticsConfigurationsRequest instance.
 */
ListBucketAnalyticsConfigurationsRequestPrivate::ListBucketAnalyticsConfigurationsRequestPrivate(
    const ListBucketAnalyticsConfigurationsRequestPrivate &other, ListBucketAnalyticsConfigurationsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
