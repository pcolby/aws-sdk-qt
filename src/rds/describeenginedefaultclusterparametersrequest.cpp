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

#include "describeenginedefaultclusterparametersrequest.h"
#include "describeenginedefaultclusterparametersrequest_p.h"
#include "describeenginedefaultclusterparametersresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeEngineDefaultClusterParametersRequest
 *
 * @brief  Implements RDS DescribeEngineDefaultClusterParameters requests.
 *
 * @see    RDSClient::describeEngineDefaultClusterParameters
 */

/**
 * @brief  Constructs a new DescribeEngineDefaultClusterParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEngineDefaultClusterParametersRequest::DescribeEngineDefaultClusterParametersRequest(const DescribeEngineDefaultClusterParametersRequest &other)
    : RDSRequest(new DescribeEngineDefaultClusterParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEngineDefaultClusterParametersRequest object.
 */
DescribeEngineDefaultClusterParametersRequest::DescribeEngineDefaultClusterParametersRequest()
    : RDSRequest(new DescribeEngineDefaultClusterParametersRequestPrivate(RDSRequest::DescribeEngineDefaultClusterParametersAction, this))
{

}

bool DescribeEngineDefaultClusterParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEngineDefaultClusterParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEngineDefaultClusterParametersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEngineDefaultClusterParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEngineDefaultClusterParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEngineDefaultClusterParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeEngineDefaultClusterParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEngineDefaultClusterParametersRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeEngineDefaultClusterParametersRequest instance.
 */
DescribeEngineDefaultClusterParametersRequestPrivate::DescribeEngineDefaultClusterParametersRequestPrivate(
    const RDSRequest::Action action, DescribeEngineDefaultClusterParametersRequest * const q)
    : DescribeEngineDefaultClusterParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEngineDefaultClusterParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEngineDefaultClusterParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEngineDefaultClusterParametersRequest instance.
 */
DescribeEngineDefaultClusterParametersRequestPrivate::DescribeEngineDefaultClusterParametersRequestPrivate(
    const DescribeEngineDefaultClusterParametersRequestPrivate &other, DescribeEngineDefaultClusterParametersRequest * const q)
    : DescribeEngineDefaultClusterParametersPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
