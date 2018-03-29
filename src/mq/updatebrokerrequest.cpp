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

#include "updatebrokerrequest.h"
#include "updatebrokerrequest_p.h"
#include "updatebrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/**
 * @class  UpdateBrokerRequest
 *
 * @brief  Implements MQ UpdateBroker requests.
 *
 * @see    MQClient::updateBroker
 */

/**
 * @brief  Constructs a new UpdateBrokerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateBrokerRequest::UpdateBrokerRequest(const UpdateBrokerRequest &other)
    : MQRequest(new UpdateBrokerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateBrokerRequest object.
 */
UpdateBrokerRequest::UpdateBrokerRequest()
    : MQRequest(new UpdateBrokerRequestPrivate(MQRequest::UpdateBrokerAction, this))
{

}

bool UpdateBrokerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateBrokerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateBrokerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MQClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBrokerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBrokerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateBrokerRequestPrivate
 *
 * @brief  Private implementation for UpdateBrokerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBrokerRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public UpdateBrokerRequest instance.
 */
UpdateBrokerRequestPrivate::UpdateBrokerRequestPrivate(
    const MQRequest::Action action, UpdateBrokerRequest * const q)
    : UpdateBrokerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBrokerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateBrokerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateBrokerRequest instance.
 */
UpdateBrokerRequestPrivate::UpdateBrokerRequestPrivate(
    const UpdateBrokerRequestPrivate &other, UpdateBrokerRequest * const q)
    : UpdateBrokerPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
