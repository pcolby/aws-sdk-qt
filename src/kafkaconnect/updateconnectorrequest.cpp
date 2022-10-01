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

#include "updateconnectorrequest.h"
#include "updateconnectorrequest_p.h"
#include "updateconnectorresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::UpdateConnectorRequest
 * \brief The UpdateConnectorRequest class provides an interface for KafkaConnect UpdateConnector requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::updateConnector
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectorRequest::UpdateConnectorRequest(const UpdateConnectorRequest &other)
    : KafkaConnectRequest(new UpdateConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectorRequest object.
 */
UpdateConnectorRequest::UpdateConnectorRequest()
    : KafkaConnectRequest(new UpdateConnectorRequestPrivate(KafkaConnectRequest::UpdateConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::UpdateConnectorRequestPrivate
 * \brief The UpdateConnectorRequestPrivate class provides private implementation for UpdateConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a UpdateConnectorRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
UpdateConnectorRequestPrivate::UpdateConnectorRequestPrivate(
    const KafkaConnectRequest::Action action, UpdateConnectorRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectorRequest
 * class' copy constructor.
 */
UpdateConnectorRequestPrivate::UpdateConnectorRequestPrivate(
    const UpdateConnectorRequestPrivate &other, UpdateConnectorRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
