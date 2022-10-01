// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
