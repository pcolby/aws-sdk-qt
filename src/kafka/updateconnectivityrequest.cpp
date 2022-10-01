// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectivityrequest.h"
#include "updateconnectivityrequest_p.h"
#include "updateconnectivityresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateConnectivityRequest
 * \brief The UpdateConnectivityRequest class provides an interface for Kafka UpdateConnectivity requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateConnectivity
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectivityRequest::UpdateConnectivityRequest(const UpdateConnectivityRequest &other)
    : KafkaRequest(new UpdateConnectivityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectivityRequest object.
 */
UpdateConnectivityRequest::UpdateConnectivityRequest()
    : KafkaRequest(new UpdateConnectivityRequestPrivate(KafkaRequest::UpdateConnectivityAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectivityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectivityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectivityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectivityResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateConnectivityRequestPrivate
 * \brief The UpdateConnectivityRequestPrivate class provides private implementation for UpdateConnectivityRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateConnectivityRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateConnectivityRequestPrivate::UpdateConnectivityRequestPrivate(
    const KafkaRequest::Action action, UpdateConnectivityRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectivityRequest
 * class' copy constructor.
 */
UpdateConnectivityRequestPrivate::UpdateConnectivityRequestPrivate(
    const UpdateConnectivityRequestPrivate &other, UpdateConnectivityRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
