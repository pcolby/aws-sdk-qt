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

#include "deletebrokerrequest.h"
#include "deletebrokerrequest_p.h"
#include "deletebrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DeleteBrokerRequest
 *
 * \brief The DeleteBrokerRequest class provides an interface for MQ DeleteBroker requests.
 *
 * \ingroup MQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::deleteBroker
 */

/*!
 * @brief  Constructs a new DeleteBrokerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBrokerRequest::DeleteBrokerRequest(const DeleteBrokerRequest &other)
    : MQRequest(new DeleteBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteBrokerRequest object.
 */
DeleteBrokerRequest::DeleteBrokerRequest()
    : MQRequest(new DeleteBrokerRequestPrivate(MQRequest::DeleteBrokerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBrokerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteBrokerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBrokerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MQClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBrokerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBrokerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteBrokerRequestPrivate
 *
 * @brief  Private implementation for DeleteBrokerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBrokerRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public DeleteBrokerRequest instance.
 */
DeleteBrokerRequestPrivate::DeleteBrokerRequestPrivate(
    const MQRequest::Action action, DeleteBrokerRequest * const q)
    : MQRequestPrivate(action, q)
{

}

/*!
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
    : MQRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
