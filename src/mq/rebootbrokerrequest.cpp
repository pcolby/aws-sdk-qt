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

#include "rebootbrokerrequest.h"
#include "rebootbrokerrequest_p.h"
#include "rebootbrokerresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  RebootBrokerRequest
 *
 * @brief  Implements MQ RebootBroker requests.
 *
 * @see    MQClient::rebootBroker
 */

/**
 * @brief  Constructs a new RebootBrokerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootBrokerResponse::RebootBrokerResponse(

/**
 * @brief  Constructs a new RebootBrokerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootBrokerRequest::RebootBrokerRequest(const RebootBrokerRequest &other)
    : MQRequest(new RebootBrokerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootBrokerRequest object.
 */
RebootBrokerRequest::RebootBrokerRequest()
    : MQRequest(new RebootBrokerRequestPrivate(MQRequest::RebootBrokerAction, this))
{

}

bool RebootBrokerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootBrokerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootBrokerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * RebootBrokerRequest::response(QNetworkReply * const reply) const
{
    return new RebootBrokerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootBrokerRequestPrivate
 *
 * @brief  Private implementation for RebootBrokerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootBrokerRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public RebootBrokerRequest instance.
 */
RebootBrokerRequestPrivate::RebootBrokerRequestPrivate(
    const MQRequest::Action action, RebootBrokerRequest * const q)
    : RebootBrokerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootBrokerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootBrokerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootBrokerRequest instance.
 */
RebootBrokerRequestPrivate::RebootBrokerRequestPrivate(
    const RebootBrokerRequestPrivate &other, RebootBrokerRequest * const q)
    : RebootBrokerPrivate(other, q)
{

}

} // namespace MQ
} // namespace AWS
