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

#include "describeelasticsearchdomainconfigrequest.h"
#include "describeelasticsearchdomainconfigrequest_p.h"
#include "describeelasticsearchdomainconfigresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  DescribeElasticsearchDomainConfigRequest
 *
 * @brief  Implements ElasticsearchService DescribeElasticsearchDomainConfig requests.
 *
 * @see    ElasticsearchServiceClient::describeElasticsearchDomainConfig
 */

/**
 * @brief  Constructs a new DescribeElasticsearchDomainConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticsearchDomainConfigResponse::DescribeElasticsearchDomainConfigResponse(

/**
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest(const DescribeElasticsearchDomainConfigRequest &other)
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequest object.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest()
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainConfigRequestPrivate(ElasticsearchServiceRequest::DescribeElasticsearchDomainConfigAction, this))
{

}

bool DescribeElasticsearchDomainConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeElasticsearchDomainConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticsearchDomainConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
AwsAbstractResponse * DescribeElasticsearchDomainConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeElasticsearchDomainConfigRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticsearchDomainConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public DescribeElasticsearchDomainConfigRequest instance.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeElasticsearchDomainConfigRequest * const q)
    : DescribeElasticsearchDomainConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticsearchDomainConfigRequest instance.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const DescribeElasticsearchDomainConfigRequestPrivate &other, DescribeElasticsearchDomainConfigRequest * const q)
    : DescribeElasticsearchDomainConfigPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace AWS
