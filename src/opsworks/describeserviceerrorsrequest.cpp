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

#include "describeserviceerrorsrequest.h"
#include "describeserviceerrorsrequest_p.h"
#include "describeserviceerrorsresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeServiceErrorsRequest
 *
 * @brief  Implements OpsWorks DescribeServiceErrors requests.
 *
 * @see    OpsWorksClient::describeServiceErrors
 */

/**
 * @brief  Constructs a new DescribeServiceErrorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeServiceErrorsRequest::DescribeServiceErrorsRequest(const DescribeServiceErrorsRequest &other)
    : OpsWorksRequest(new DescribeServiceErrorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeServiceErrorsRequest object.
 */
DescribeServiceErrorsRequest::DescribeServiceErrorsRequest()
    : OpsWorksRequest(new DescribeServiceErrorsRequestPrivate(OpsWorksRequest::DescribeServiceErrorsAction, this))
{

}

bool DescribeServiceErrorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeServiceErrorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeServiceErrorsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeServiceErrorsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceErrorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeServiceErrorsRequestPrivate
 *
 * @brief  Private implementation for DescribeServiceErrorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServiceErrorsRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeServiceErrorsRequest instance.
 */
DescribeServiceErrorsRequestPrivate::DescribeServiceErrorsRequestPrivate(
    const OpsWorksRequest::Action action, DescribeServiceErrorsRequest * const q)
    : DescribeServiceErrorsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServiceErrorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceErrorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeServiceErrorsRequest instance.
 */
DescribeServiceErrorsRequestPrivate::DescribeServiceErrorsRequestPrivate(
    const DescribeServiceErrorsRequestPrivate &other, DescribeServiceErrorsRequest * const q)
    : DescribeServiceErrorsPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
