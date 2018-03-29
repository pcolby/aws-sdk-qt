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

#include "describeelasticsearchdomainrequest.h"
#include "describeelasticsearchdomainrequest_p.h"
#include "describeelasticsearchdomainresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/**
 * @class  DescribeElasticsearchDomainRequest
 *
 * @brief  Implements ElasticsearchService DescribeElasticsearchDomain requests.
 *
 * @see    ElasticsearchServiceClient::describeElasticsearchDomain
 */

/**
 * @brief  Constructs a new DescribeElasticsearchDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticsearchDomainRequest::DescribeElasticsearchDomainRequest(const DescribeElasticsearchDomainRequest &other)
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeElasticsearchDomainRequest object.
 */
DescribeElasticsearchDomainRequest::DescribeElasticsearchDomainRequest()
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainRequestPrivate(ElasticsearchServiceRequest::DescribeElasticsearchDomainAction, this))
{

}

bool DescribeElasticsearchDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeElasticsearchDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticsearchDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeElasticsearchDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeElasticsearchDomainRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticsearchDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public DescribeElasticsearchDomainRequest instance.
 */
DescribeElasticsearchDomainRequestPrivate::DescribeElasticsearchDomainRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeElasticsearchDomainRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticsearchDomainRequest instance.
 */
DescribeElasticsearchDomainRequestPrivate::DescribeElasticsearchDomainRequestPrivate(
    const DescribeElasticsearchDomainRequestPrivate &other, DescribeElasticsearchDomainRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
