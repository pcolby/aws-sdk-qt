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

#include "describeclustersrequest.h"
#include "describeclustersrequest_p.h"
#include "describeclustersresponse.h"
#include "daxrequest_p.h"

namespace AWS {
namespace DAX {

/**
 * @class  DescribeClustersRequest
 *
 * @brief  Implements DAX DescribeClusters requests.
 *
 * @see    DAXClient::describeClusters
 */

/**
 * @brief  Constructs a new DescribeClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClustersRequest::DescribeClustersRequest(const DescribeClustersRequest &other)
    : DAXRequest(new DescribeClustersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClustersRequest object.
 */
DescribeClustersRequest::DescribeClustersRequest()
    : DAXRequest(new DescribeClustersRequestPrivate(DAXRequest::DescribeClustersAction, this))
{

}

bool DescribeClustersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClustersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClustersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * DescribeClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClustersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClustersRequestPrivate
 *
 * @brief  Private implementation for DescribeClustersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClustersRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DescribeClustersRequest instance.
 */
DescribeClustersRequestPrivate::DescribeClustersRequestPrivate(
    const DAXRequest::Action action, DescribeClustersRequest * const q)
    : DescribeClustersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClustersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClustersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClustersRequest instance.
 */
DescribeClustersRequestPrivate::DescribeClustersRequestPrivate(
    const DescribeClustersRequestPrivate &other, DescribeClustersRequest * const q)
    : DescribeClustersPrivate(other, q)
{

}

} // namespace DAX
} // namespace AWS
