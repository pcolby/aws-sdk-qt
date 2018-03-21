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

#include "describerulespackagesrequest.h"
#include "describerulespackagesrequest_p.h"
#include "describerulespackagesresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeRulesPackagesRequest
 *
 * @brief  Implements Inspector DescribeRulesPackages requests.
 *
 * @see    InspectorClient::describeRulesPackages
 */

/**
 * @brief  Constructs a new DescribeRulesPackagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRulesPackagesResponse::DescribeRulesPackagesResponse(

/**
 * @brief  Constructs a new DescribeRulesPackagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRulesPackagesRequest::DescribeRulesPackagesRequest(const DescribeRulesPackagesRequest &other)
    : InspectorRequest(new DescribeRulesPackagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRulesPackagesRequest object.
 */
DescribeRulesPackagesRequest::DescribeRulesPackagesRequest()
    : InspectorRequest(new DescribeRulesPackagesRequestPrivate(InspectorRequest::DescribeRulesPackagesAction, this))
{

}

bool DescribeRulesPackagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRulesPackagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRulesPackagesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * DescribeRulesPackagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRulesPackagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRulesPackagesRequestPrivate
 *
 * @brief  Private implementation for DescribeRulesPackagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRulesPackagesRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DescribeRulesPackagesRequest instance.
 */
DescribeRulesPackagesRequestPrivate::DescribeRulesPackagesRequestPrivate(
    const InspectorRequest::Action action, DescribeRulesPackagesRequest * const q)
    : DescribeRulesPackagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRulesPackagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRulesPackagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRulesPackagesRequest instance.
 */
DescribeRulesPackagesRequestPrivate::DescribeRulesPackagesRequestPrivate(
    const DescribeRulesPackagesRequestPrivate &other, DescribeRulesPackagesRequest * const q)
    : DescribeRulesPackagesPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
