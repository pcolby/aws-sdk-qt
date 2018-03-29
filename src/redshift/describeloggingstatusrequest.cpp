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

#include "describeloggingstatusrequest.h"
#include "describeloggingstatusrequest_p.h"
#include "describeloggingstatusresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeLoggingStatusRequest
 *
 * @brief  Implements Redshift DescribeLoggingStatus requests.
 *
 * @see    RedshiftClient::describeLoggingStatus
 */

/**
 * @brief  Constructs a new DescribeLoggingStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoggingStatusRequest::DescribeLoggingStatusRequest(const DescribeLoggingStatusRequest &other)
    : RedshiftRequest(new DescribeLoggingStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLoggingStatusRequest object.
 */
DescribeLoggingStatusRequest::DescribeLoggingStatusRequest()
    : RedshiftRequest(new DescribeLoggingStatusRequestPrivate(RedshiftRequest::DescribeLoggingStatusAction, this))
{

}

bool DescribeLoggingStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLoggingStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoggingStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeLoggingStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoggingStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLoggingStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeLoggingStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoggingStatusRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeLoggingStatusRequest instance.
 */
DescribeLoggingStatusRequestPrivate::DescribeLoggingStatusRequestPrivate(
    const RedshiftRequest::Action action, DescribeLoggingStatusRequest * const q)
    : DescribeLoggingStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoggingStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoggingStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoggingStatusRequest instance.
 */
DescribeLoggingStatusRequestPrivate::DescribeLoggingStatusRequestPrivate(
    const DescribeLoggingStatusRequestPrivate &other, DescribeLoggingStatusRequest * const q)
    : DescribeLoggingStatusPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
