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
