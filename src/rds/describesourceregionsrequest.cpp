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

#include "describesourceregionsrequest.h"
#include "describesourceregionsrequest_p.h"
#include "describesourceregionsresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeSourceRegionsRequest
 *
 * @brief  Implements RDS DescribeSourceRegions requests.
 *
 * @see    RDSClient::describeSourceRegions
 */

/**
 * @brief  Constructs a new DescribeSourceRegionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSourceRegionsRequest::DescribeSourceRegionsRequest(const DescribeSourceRegionsRequest &other)
    : RDSRequest(new DescribeSourceRegionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSourceRegionsRequest object.
 */
DescribeSourceRegionsRequest::DescribeSourceRegionsRequest()
    : RDSRequest(new DescribeSourceRegionsRequestPrivate(RDSRequest::DescribeSourceRegionsAction, this))
{

}

bool DescribeSourceRegionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSourceRegionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSourceRegionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSourceRegionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSourceRegionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSourceRegionsRequestPrivate
 *
 * @brief  Private implementation for DescribeSourceRegionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSourceRegionsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeSourceRegionsRequest instance.
 */
DescribeSourceRegionsRequestPrivate::DescribeSourceRegionsRequestPrivate(
    const RDSRequest::Action action, DescribeSourceRegionsRequest * const q)
    : DescribeSourceRegionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSourceRegionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSourceRegionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSourceRegionsRequest instance.
 */
DescribeSourceRegionsRequestPrivate::DescribeSourceRegionsRequestPrivate(
    const DescribeSourceRegionsRequestPrivate &other, DescribeSourceRegionsRequest * const q)
    : DescribeSourceRegionsPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
