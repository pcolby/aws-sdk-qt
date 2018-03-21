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

#include "describetablerestorestatusrequest.h"
#include "describetablerestorestatusrequest_p.h"
#include "describetablerestorestatusresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeTableRestoreStatusRequest
 *
 * @brief  Implements Redshift DescribeTableRestoreStatus requests.
 *
 * @see    RedshiftClient::describeTableRestoreStatus
 */

/**
 * @brief  Constructs a new DescribeTableRestoreStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTableRestoreStatusResponse::DescribeTableRestoreStatusResponse(

/**
 * @brief  Constructs a new DescribeTableRestoreStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTableRestoreStatusRequest::DescribeTableRestoreStatusRequest(const DescribeTableRestoreStatusRequest &other)
    : RedshiftRequest(new DescribeTableRestoreStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTableRestoreStatusRequest object.
 */
DescribeTableRestoreStatusRequest::DescribeTableRestoreStatusRequest()
    : RedshiftRequest(new DescribeTableRestoreStatusRequestPrivate(RedshiftRequest::DescribeTableRestoreStatusAction, this))
{

}

bool DescribeTableRestoreStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTableRestoreStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTableRestoreStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeTableRestoreStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTableRestoreStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTableRestoreStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeTableRestoreStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableRestoreStatusRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeTableRestoreStatusRequest instance.
 */
DescribeTableRestoreStatusRequestPrivate::DescribeTableRestoreStatusRequestPrivate(
    const RedshiftRequest::Action action, DescribeTableRestoreStatusRequest * const q)
    : DescribeTableRestoreStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableRestoreStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTableRestoreStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTableRestoreStatusRequest instance.
 */
DescribeTableRestoreStatusRequestPrivate::DescribeTableRestoreStatusRequestPrivate(
    const DescribeTableRestoreStatusRequestPrivate &other, DescribeTableRestoreStatusRequest * const q)
    : DescribeTableRestoreStatusPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
