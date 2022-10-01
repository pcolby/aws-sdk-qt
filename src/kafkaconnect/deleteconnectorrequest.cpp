// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
