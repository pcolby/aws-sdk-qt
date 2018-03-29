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

#include "describelayersrequest.h"
#include "describelayersrequest_p.h"
#include "describelayersresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeLayersRequest
 *
 * @brief  Implements OpsWorks DescribeLayers requests.
 *
 * @see    OpsWorksClient::describeLayers
 */

/**
 * @brief  Constructs a new DescribeLayersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLayersRequest::DescribeLayersRequest(const DescribeLayersRequest &other)
    : OpsWorksRequest(new DescribeLayersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLayersRequest object.
 */
DescribeLayersRequest::DescribeLayersRequest()
    : OpsWorksRequest(new DescribeLayersRequestPrivate(OpsWorksRequest::DescribeLayersAction, this))
{

}

bool DescribeLayersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLayersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLayersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLayersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLayersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLayersRequestPrivate
 *
 * @brief  Private implementation for DescribeLayersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLayersRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeLayersRequest instance.
 */
DescribeLayersRequestPrivate::DescribeLayersRequestPrivate(
    const OpsWorksRequest::Action action, DescribeLayersRequest * const q)
    : DescribeLayersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLayersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLayersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLayersRequest instance.
 */
DescribeLayersRequestPrivate::DescribeLayersRequestPrivate(
    const DescribeLayersRequestPrivate &other, DescribeLayersRequest * const q)
    : DescribeLayersPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
