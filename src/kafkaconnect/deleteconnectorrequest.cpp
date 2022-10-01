/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteconnectorrequest.h"
#include "deleteconnectorrequest_p.h"
#include "deleteconnectorresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DeleteConnectorRequest
 * \brief The DeleteConnectorRequest class provides an interface for KafkaConnect DeleteConnector requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::deleteConnector
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectorRequest::DeleteConnectorRequest(const DeleteConnectorRequest &other)
    : KafkaConnectRequest(new DeleteConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectorRequest object.
 */
DeleteConnectorRequest::DeleteConnectorRequest()
    : KafkaConnectRequest(new DeleteConnectorRequestPrivate(KafkaConnectRequest::DeleteConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::DeleteConnectorRequestPrivate
 * \brief The DeleteConnectorRequestPrivate class provides private implementation for DeleteConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DeleteConnectorRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
DeleteConnectorRequestPrivate::DeleteConnectorRequestPrivate(
    const KafkaConnectRequest::Action action, DeleteConnectorRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectorRequest
 * class' copy constructor.
 */
DeleteConnectorRequestPrivate::DeleteConnectorRequestPrivate(
    const DeleteConnectorRequestPrivate &other, DeleteConnectorRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
