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

#include "describevaultrequest.h"
#include "describevaultrequest_p.h"
#include "describevaultresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  DescribeVaultRequest
 *
 * @brief  Implements Glacier DescribeVault requests.
 *
 * @see    GlacierClient::describeVault
 */

/**
 * @brief  Constructs a new DescribeVaultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVaultRequest::DescribeVaultRequest(const DescribeVaultRequest &other)
    : GlacierRequest(new DescribeVaultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVaultRequest object.
 */
DescribeVaultRequest::DescribeVaultRequest()
    : GlacierRequest(new DescribeVaultRequestPrivate(GlacierRequest::DescribeVaultAction, this))
{

}

bool DescribeVaultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVaultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVaultResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVaultRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVaultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVaultRequestPrivate
 *
 * @brief  Private implementation for DescribeVaultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVaultRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public DescribeVaultRequest instance.
 */
DescribeVaultRequestPrivate::DescribeVaultRequestPrivate(
    const GlacierRequest::Action action, DescribeVaultRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVaultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVaultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVaultRequest instance.
 */
DescribeVaultRequestPrivate::DescribeVaultRequestPrivate(
    const DescribeVaultRequestPrivate &other, DescribeVaultRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
