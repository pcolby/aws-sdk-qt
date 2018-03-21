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

#include "describeserversrequest.h"
#include "describeserversrequest_p.h"
#include "describeserversresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DescribeServersRequest
 *
 * @brief  Implements OpsWorksCM DescribeServers requests.
 *
 * @see    OpsWorksCMClient::describeServers
 */

/**
 * @brief  Constructs a new DescribeServersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeServersResponse::DescribeServersResponse(

/**
 * @brief  Constructs a new DescribeServersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeServersRequest::DescribeServersRequest(const DescribeServersRequest &other)
    : OpsWorksCMRequest(new DescribeServersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeServersRequest object.
 */
DescribeServersRequest::DescribeServersRequest()
    : OpsWorksCMRequest(new DescribeServersRequestPrivate(OpsWorksCMRequest::DescribeServersAction, this))
{

}

bool DescribeServersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeServersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeServersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * DescribeServersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeServersRequestPrivate
 *
 * @brief  Private implementation for DescribeServersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServersRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public DescribeServersRequest instance.
 */
DescribeServersRequestPrivate::DescribeServersRequestPrivate(
    const OpsWorksCMRequest::Action action, DescribeServersRequest * const q)
    : DescribeServersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeServersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeServersRequest instance.
 */
DescribeServersRequestPrivate::DescribeServersRequestPrivate(
    const DescribeServersRequestPrivate &other, DescribeServersRequest * const q)
    : DescribeServersPrivate(other, q)
{

}
