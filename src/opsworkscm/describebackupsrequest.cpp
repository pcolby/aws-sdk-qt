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

#include "describebackupsrequest.h"
#include "describebackupsrequest_p.h"
#include "describebackupsresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DescribeBackupsRequest
 *
 * @brief  Implements OpsWorksCM DescribeBackups requests.
 *
 * @see    OpsWorksCMClient::describeBackups
 */

/**
 * @brief  Constructs a new DescribeBackupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBackupsRequest::DescribeBackupsRequest(const DescribeBackupsRequest &other)
    : OpsWorksCMRequest(new DescribeBackupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBackupsRequest object.
 */
DescribeBackupsRequest::DescribeBackupsRequest()
    : OpsWorksCMRequest(new DescribeBackupsRequestPrivate(OpsWorksCMRequest::DescribeBackupsAction, this))
{

}

bool DescribeBackupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBackupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBackupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * DescribeBackupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBackupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBackupsRequestPrivate
 *
 * @brief  Private implementation for DescribeBackupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBackupsRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public DescribeBackupsRequest instance.
 */
DescribeBackupsRequestPrivate::DescribeBackupsRequestPrivate(
    const OpsWorksCMRequest::Action action, DescribeBackupsRequest * const q)
    : DescribeBackupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBackupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBackupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBackupsRequest instance.
 */
DescribeBackupsRequestPrivate::DescribeBackupsRequestPrivate(
    const DescribeBackupsRequestPrivate &other, DescribeBackupsRequest * const q)
    : DescribeBackupsPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS
