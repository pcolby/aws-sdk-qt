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

#include "createconnectorrequest.h"
#include "createconnectorrequest_p.h"
#include "createconnectorresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::CreateConnectorRequest
 * \brief The CreateConnectorRequest class provides an interface for KafkaConnect CreateConnector requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::createConnector
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectorRequest::CreateConnectorRequest(const CreateConnectorRequest &other)
    : KafkaConnectRequest(new CreateConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectorRequest object.
 */
CreateConnectorRequest::CreateConnectorRequest()
    : KafkaConnectRequest(new CreateConnectorRequestPrivate(KafkaConnectRequest::CreateConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectorRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::CreateConnectorRequestPrivate
 * \brief The CreateConnectorRequestPrivate class provides private implementation for CreateConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a CreateConnectorRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
CreateConnectorRequestPrivate::CreateConnectorRequestPrivate(
    const KafkaConnectRequest::Action action, CreateConnectorRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectorRequest
 * class' copy constructor.
 */
CreateConnectorRequestPrivate::CreateConnectorRequestPrivate(
    const CreateConnectorRequestPrivate &other, CreateConnectorRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
