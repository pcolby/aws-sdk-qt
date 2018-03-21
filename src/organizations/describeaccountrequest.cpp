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

#include "describeaccountrequest.h"
#include "describeaccountrequest_p.h"
#include "describeaccountresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  DescribeAccountRequest
 *
 * @brief  Implements Organizations DescribeAccount requests.
 *
 * @see    OrganizationsClient::describeAccount
 */

/**
 * @brief  Constructs a new DescribeAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAccountResponse::DescribeAccountResponse(

/**
 * @brief  Constructs a new DescribeAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAccountRequest::DescribeAccountRequest(const DescribeAccountRequest &other)
    : OrganizationsRequest(new DescribeAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAccountRequest object.
 */
DescribeAccountRequest::DescribeAccountRequest()
    : OrganizationsRequest(new DescribeAccountRequestPrivate(OrganizationsRequest::DescribeAccountAction, this))
{

}

bool DescribeAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * DescribeAccountRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAccountRequestPrivate
 *
 * @brief  Private implementation for DescribeAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DescribeAccountRequest instance.
 */
DescribeAccountRequestPrivate::DescribeAccountRequestPrivate(
    const OrganizationsRequest::Action action, DescribeAccountRequest * const q)
    : DescribeAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAccountRequest instance.
 */
DescribeAccountRequestPrivate::DescribeAccountRequestPrivate(
    const DescribeAccountRequestPrivate &other, DescribeAccountRequest * const q)
    : DescribeAccountPrivate(other, q)
{

}
