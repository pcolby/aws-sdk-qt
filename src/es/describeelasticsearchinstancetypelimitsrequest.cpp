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

#include "describeelasticsearchinstancetypelimitsrequest.h"
#include "describeelasticsearchinstancetypelimitsrequest_p.h"
#include "describeelasticsearchinstancetypelimitsresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  DescribeElasticsearchInstanceTypeLimitsRequest
 *
 * @brief  Implements ElasticsearchService DescribeElasticsearchInstanceTypeLimits requests.
 *
 * @see    ElasticsearchServiceClient::describeElasticsearchInstanceTypeLimits
 */

/**
 * @brief  Constructs a new DescribeElasticsearchInstanceTypeLimitsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticsearchInstanceTypeLimitsResponse::DescribeElasticsearchInstanceTypeLimitsResponse(

/**
 * @brief  Constructs a new DescribeElasticsearchInstanceTypeLimitsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticsearchInstanceTypeLimitsRequest::DescribeElasticsearchInstanceTypeLimitsRequest(const DescribeElasticsearchInstanceTypeLimitsRequest &other)
    : ElasticsearchServiceRequest(new DescribeElasticsearchInstanceTypeLimitsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeElasticsearchInstanceTypeLimitsRequest object.
 */
DescribeElasticsearchInstanceTypeLimitsRequest::DescribeElasticsearchInstanceTypeLimitsRequest()
    : ElasticsearchServiceRequest(new DescribeElasticsearchInstanceTypeLimitsRequestPrivate(ElasticsearchServiceRequest::DescribeElasticsearchInstanceTypeLimitsAction, this))
{

}

bool DescribeElasticsearchInstanceTypeLimitsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeElasticsearchInstanceTypeLimitsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticsearchInstanceTypeLimitsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
AwsAbstractResponse * DescribeElasticsearchInstanceTypeLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchInstanceTypeLimitsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeElasticsearchInstanceTypeLimitsRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticsearchInstanceTypeLimitsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchInstanceTypeLimitsRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public DescribeElasticsearchInstanceTypeLimitsRequest instance.
 */
DescribeElasticsearchInstanceTypeLimitsRequestPrivate::DescribeElasticsearchInstanceTypeLimitsRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeElasticsearchInstanceTypeLimitsRequest * const q)
    : DescribeElasticsearchInstanceTypeLimitsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchInstanceTypeLimitsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchInstanceTypeLimitsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticsearchInstanceTypeLimitsRequest instance.
 */
DescribeElasticsearchInstanceTypeLimitsRequestPrivate::DescribeElasticsearchInstanceTypeLimitsRequestPrivate(
    const DescribeElasticsearchInstanceTypeLimitsRequestPrivate &other, DescribeElasticsearchInstanceTypeLimitsRequest * const q)
    : DescribeElasticsearchInstanceTypeLimitsPrivate(other, q)
{

}
