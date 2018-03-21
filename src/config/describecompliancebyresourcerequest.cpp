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

#include "describecompliancebyresourcerequest.h"
#include "describecompliancebyresourcerequest_p.h"
#include "describecompliancebyresourceresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeComplianceByResourceRequest
 *
 * @brief  Implements ConfigService DescribeComplianceByResource requests.
 *
 * @see    ConfigServiceClient::describeComplianceByResource
 */

/**
 * @brief  Constructs a new DescribeComplianceByResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeComplianceByResourceRequest::DescribeComplianceByResourceRequest(const DescribeComplianceByResourceRequest &other)
    : ConfigServiceRequest(new DescribeComplianceByResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeComplianceByResourceRequest object.
 */
DescribeComplianceByResourceRequest::DescribeComplianceByResourceRequest()
    : ConfigServiceRequest(new DescribeComplianceByResourceRequestPrivate(ConfigServiceRequest::DescribeComplianceByResourceAction, this))
{

}

bool DescribeComplianceByResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeComplianceByResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeComplianceByResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * DescribeComplianceByResourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeComplianceByResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeComplianceByResourceRequestPrivate
 *
 * @brief  Private implementation for DescribeComplianceByResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComplianceByResourceRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeComplianceByResourceRequest instance.
 */
DescribeComplianceByResourceRequestPrivate::DescribeComplianceByResourceRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeComplianceByResourceRequest * const q)
    : DescribeComplianceByResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComplianceByResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeComplianceByResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeComplianceByResourceRequest instance.
 */
DescribeComplianceByResourceRequestPrivate::DescribeComplianceByResourceRequestPrivate(
    const DescribeComplianceByResourceRequestPrivate &other, DescribeComplianceByResourceRequest * const q)
    : DescribeComplianceByResourcePrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
