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

#include "createbrokerrequest.h"
#include "createbrokerrequest_p.h"
#include "createbrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/**
 * @class  CreateBrokerRequest
 *
 * @brief  Implements MQ CreateBroker requests.
 *
 * @see    MQClient::createBroker
 */

/**
 * @brief  Constructs a new CreateBrokerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBrokerRequest::CreateBrokerRequest(const CreateBrokerRequest &other)
    : MQRequest(new CreateBrokerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBrokerRequest object.
 */
CreateBrokerRequest::CreateBrokerRequest()
    : MQRequest(new CreateBrokerRequestPrivate(MQRequest::CreateBrokerAction, this))
{

}

bool CreateBrokerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBrokerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBrokerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MQClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBrokerRequest::response(QNetworkReply * const reply) const
{
    return new CreateBrokerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBrokerRequestPrivate
 *
 * @brief  Private implementation for CreateBrokerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBrokerRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public CreateBrokerRequest instance.
 */
CreateBrokerRequestPrivate::CreateBrokerRequestPrivate(
    const MQRequest::Action action, CreateBrokerRequest * const q)
    : CreateBrokerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBrokerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBrokerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBrokerRequest instance.
 */
CreateBrokerRequestPrivate::CreateBrokerRequestPrivate(
    const CreateBrokerRequestPrivate &other, CreateBrokerRequest * const q)
    : CreateBrokerPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
