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

#include "describecreateaccountstatusrequest.h"
#include "describecreateaccountstatusrequest_p.h"
#include "describecreateaccountstatusresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  DescribeCreateAccountStatusRequest
 *
 * @brief  Implements Organizations DescribeCreateAccountStatus requests.
 *
 * @see    OrganizationsClient::describeCreateAccountStatus
 */

/**
 * @brief  Constructs a new DescribeCreateAccountStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCreateAccountStatusRequest::DescribeCreateAccountStatusRequest(const DescribeCreateAccountStatusRequest &other)
    : OrganizationsRequest(new DescribeCreateAccountStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCreateAccountStatusRequest object.
 */
DescribeCreateAccountStatusRequest::DescribeCreateAccountStatusRequest()
    : OrganizationsRequest(new DescribeCreateAccountStatusRequestPrivate(OrganizationsRequest::DescribeCreateAccountStatusAction, this))
{

}

bool DescribeCreateAccountStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCreateAccountStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCreateAccountStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCreateAccountStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCreateAccountStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCreateAccountStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeCreateAccountStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCreateAccountStatusRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DescribeCreateAccountStatusRequest instance.
 */
DescribeCreateAccountStatusRequestPrivate::DescribeCreateAccountStatusRequestPrivate(
    const OrganizationsRequest::Action action, DescribeCreateAccountStatusRequest * const q)
    : DescribeCreateAccountStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCreateAccountStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCreateAccountStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCreateAccountStatusRequest instance.
 */
DescribeCreateAccountStatusRequestPrivate::DescribeCreateAccountStatusRequestPrivate(
    const DescribeCreateAccountStatusRequestPrivate &other, DescribeCreateAccountStatusRequest * const q)
    : DescribeCreateAccountStatusPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
