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

#include "describeclustersrequest.h"
#include "describeclustersrequest_p.h"
#include "describeclustersresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/**
 * @class  DescribeClustersRequest
 *
 * @brief  Implements CloudHSMV2 DescribeClusters requests.
 *
 * @see    CloudHSMV2Client::describeClusters
 */

/**
 * @brief  Constructs a new DescribeClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClustersRequest::DescribeClustersRequest(const DescribeClustersRequest &other)
    : CloudHSMV2Request(new DescribeClustersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClustersRequest object.
 */
DescribeClustersRequest::DescribeClustersRequest()
    : CloudHSMV2Request(new DescribeClustersRequestPrivate(CloudHSMV2Request::DescribeClustersAction, this))
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
 * @see  CloudHSMV2Client::send
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
 * @param  action  CloudHSMV2 action being performed.
 * @param  q       Pointer to this object's public DescribeClustersRequest instance.
 */
DescribeClustersRequestPrivate::DescribeClustersRequestPrivate(
    const CloudHSMV2Request::Action action, DescribeClustersRequest * const q)
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

} // namespace CloudHSMV2
} // namespace QtAws
