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

#include "updatebrokercountrequest.h"
#include "updatebrokercountrequest_p.h"
#include "updatebrokercountresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateBrokerCountRequest
 * \brief The UpdateBrokerCountRequest class provides an interface for Kafka UpdateBrokerCount requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateBrokerCount
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBrokerCountRequest::UpdateBrokerCountRequest(const UpdateBrokerCountRequest &other)
    : KafkaRequest(new UpdateBrokerCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBrokerCountRequest object.
 */
UpdateBrokerCountRequest::UpdateBrokerCountRequest()
    : KafkaRequest(new UpdateBrokerCountRequestPrivate(KafkaRequest::UpdateBrokerCountAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBrokerCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBrokerCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBrokerCountRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBrokerCountResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateBrokerCountRequestPrivate
 * \brief The UpdateBrokerCountRequestPrivate class provides private implementation for UpdateBrokerCountRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateBrokerCountRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateBrokerCountRequestPrivate::UpdateBrokerCountRequestPrivate(
    const KafkaRequest::Action action, UpdateBrokerCountRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBrokerCountRequest
 * class' copy constructor.
 */
UpdateBrokerCountRequestPrivate::UpdateBrokerCountRequestPrivate(
    const UpdateBrokerCountRequestPrivate &other, UpdateBrokerCountRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
