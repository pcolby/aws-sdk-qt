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

#include "deletebrokerrequest.h"
#include "deletebrokerrequest_p.h"
#include "deletebrokerresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  DeleteBrokerRequest
 *
 * @brief  Implements MQ DeleteBroker requests.
 *
 * @see    MQClient::deleteBroker
 */

/**
 * @brief  Constructs a new DeleteBrokerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBrokerResponse::DeleteBrokerResponse(

/**
 * @brief  Constructs a new DeleteBrokerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBrokerRequest::DeleteBrokerRequest(const DeleteBrokerRequest &other)
    : MQRequest(new DeleteBrokerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBrokerRequest object.
 */
DeleteBrokerRequest::DeleteBrokerRequest()
    : MQRequest(new DeleteBrokerRequestPrivate(MQRequest::DeleteBrokerAction, this))
{

}

bool DeleteBrokerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBrokerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBrokerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * DeleteBrokerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBrokerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBrokerRequestPrivate
 *
 * @brief  Private implementation for DeleteBrokerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBrokerRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public DeleteBrokerRequest instance.
 */
DeleteBrokerRequestPrivate::DeleteBrokerRequestPrivate(
    const MQRequest::Action action, DeleteBrokerRequest * const q)
    : DeleteBrokerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBrokerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBrokerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBrokerRequest instance.
 */
DeleteBrokerRequestPrivate::DeleteBrokerRequestPrivate(
    const DeleteBrokerRequestPrivate &other, DeleteBrokerRequest * const q)
    : DeleteBrokerPrivate(other, q)
{

}

} // namespace MQ
} // namespace AWS
