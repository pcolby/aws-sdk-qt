// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
