/*
    Copyright 2013-2019 Paul Colby

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

#include "listclusteroperationsrequest.h"
#include "listclusteroperationsrequest_p.h"
#include "listclusteroperationsresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListClusterOperationsRequest
 * \brief The ListClusterOperationsRequest class provides an interface for Kafka ListClusterOperations requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listClusterOperations
 */

/*!
 * Constructs a copy of \a other.
 */
ListClusterOperationsRequest::ListClusterOperationsRequest(const ListClusterOperationsRequest &other)
    : KafkaRequest(new ListClusterOperationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListClusterOperationsRequest object.
 */
ListClusterOperationsRequest::ListClusterOperationsRequest()
    : KafkaRequest(new ListClusterOperationsRequestPrivate(KafkaRequest::ListClusterOperationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListClusterOperationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListClusterOperationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClusterOperationsRequest::response(QNetworkReply * const reply) const
{
    return new ListClusterOperationsResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListClusterOperationsRequestPrivate
 * \brief The ListClusterOperationsRequestPrivate class provides private implementation for ListClusterOperationsRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListClusterOperationsRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListClusterOperationsRequestPrivate::ListClusterOperationsRequestPrivate(
    const KafkaRequest::Action action, ListClusterOperationsRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListClusterOperationsRequest
 * class' copy constructor.
 */
ListClusterOperationsRequestPrivate::ListClusterOperationsRequestPrivate(
    const ListClusterOperationsRequestPrivate &other, ListClusterOperationsRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
