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

#include "describestackprovisioningparametersrequest.h"
#include "describestackprovisioningparametersrequest_p.h"
#include "describestackprovisioningparametersresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeStackProvisioningParametersRequest
 *
 * @brief  Implements OpsWorks DescribeStackProvisioningParameters requests.
 *
 * @see    OpsWorksClient::describeStackProvisioningParameters
 */

/**
 * @brief  Constructs a new DescribeStackProvisioningParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackProvisioningParametersResponse::DescribeStackProvisioningParametersResponse(

/**
 * @brief  Constructs a new DescribeStackProvisioningParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackProvisioningParametersRequest::DescribeStackProvisioningParametersRequest(const DescribeStackProvisioningParametersRequest &other)
    : OpsWorksRequest(new DescribeStackProvisioningParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackProvisioningParametersRequest object.
 */
DescribeStackProvisioningParametersRequest::DescribeStackProvisioningParametersRequest()
    : OpsWorksRequest(new DescribeStackProvisioningParametersRequestPrivate(OpsWorksRequest::DescribeStackProvisioningParametersAction, this))
{

}

bool DescribeStackProvisioningParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackProvisioningParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackProvisioningParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeStackProvisioningParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackProvisioningParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackProvisioningParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeStackProvisioningParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackProvisioningParametersRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeStackProvisioningParametersRequest instance.
 */
DescribeStackProvisioningParametersRequestPrivate::DescribeStackProvisioningParametersRequestPrivate(
    const OpsWorksRequest::Action action, DescribeStackProvisioningParametersRequest * const q)
    : DescribeStackProvisioningParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackProvisioningParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackProvisioningParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackProvisioningParametersRequest instance.
 */
DescribeStackProvisioningParametersRequestPrivate::DescribeStackProvisioningParametersRequestPrivate(
    const DescribeStackProvisioningParametersRequestPrivate &other, DescribeStackProvisioningParametersRequest * const q)
    : DescribeStackProvisioningParametersPrivate(other, q)
{

}
