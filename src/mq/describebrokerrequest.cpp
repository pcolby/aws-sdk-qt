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

#include "describebrokerrequest.h"
#include "describebrokerrequest_p.h"
#include "describebrokerresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  DescribeBrokerRequest
 *
 * @brief  Implements MQ DescribeBroker requests.
 *
 * @see    MQClient::describeBroker
 */

/**
 * @brief  Constructs a new DescribeBrokerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBrokerRequest::DescribeBrokerRequest(const DescribeBrokerRequest &other)
    : MQRequest(new DescribeBrokerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBrokerRequest object.
 */
DescribeBrokerRequest::DescribeBrokerRequest()
    : MQRequest(new DescribeBrokerRequestPrivate(MQRequest::DescribeBrokerAction, this))
{

}

bool DescribeBrokerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBrokerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBrokerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * DescribeBrokerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBrokerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBrokerRequestPrivate
 *
 * @brief  Private implementation for DescribeBrokerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBrokerRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public DescribeBrokerRequest instance.
 */
DescribeBrokerRequestPrivate::DescribeBrokerRequestPrivate(
    const MQRequest::Action action, DescribeBrokerRequest * const q)
    : DescribeBrokerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBrokerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBrokerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBrokerRequest instance.
 */
DescribeBrokerRequestPrivate::DescribeBrokerRequestPrivate(
    const DescribeBrokerRequestPrivate &other, DescribeBrokerRequest * const q)
    : DescribeBrokerPrivate(other, q)
{

}

} // namespace MQ
} // namespace AWS
