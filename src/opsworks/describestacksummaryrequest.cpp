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

#include "describestacksummaryrequest.h"
#include "describestacksummaryrequest_p.h"
#include "describestacksummaryresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeStackSummaryRequest
 *
 * @brief  Implements OpsWorks DescribeStackSummary requests.
 *
 * @see    OpsWorksClient::describeStackSummary
 */

/**
 * @brief  Constructs a new DescribeStackSummaryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackSummaryResponse::DescribeStackSummaryResponse(

/**
 * @brief  Constructs a new DescribeStackSummaryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackSummaryRequest::DescribeStackSummaryRequest(const DescribeStackSummaryRequest &other)
    : OpsWorksRequest(new DescribeStackSummaryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackSummaryRequest object.
 */
DescribeStackSummaryRequest::DescribeStackSummaryRequest()
    : OpsWorksRequest(new DescribeStackSummaryRequestPrivate(OpsWorksRequest::DescribeStackSummaryAction, this))
{

}

bool DescribeStackSummaryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackSummaryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackSummaryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeStackSummaryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackSummaryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackSummaryRequestPrivate
 *
 * @brief  Private implementation for DescribeStackSummaryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSummaryRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeStackSummaryRequest instance.
 */
DescribeStackSummaryRequestPrivate::DescribeStackSummaryRequestPrivate(
    const OpsWorksRequest::Action action, DescribeStackSummaryRequest * const q)
    : DescribeStackSummaryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSummaryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackSummaryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackSummaryRequest instance.
 */
DescribeStackSummaryRequestPrivate::DescribeStackSummaryRequestPrivate(
    const DescribeStackSummaryRequestPrivate &other, DescribeStackSummaryRequest * const q)
    : DescribeStackSummaryPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
