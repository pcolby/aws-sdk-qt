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

#include "listkafkaversionsrequest.h"
#include "listkafkaversionsrequest_p.h"
#include "listkafkaversionsresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListKafkaVersionsRequest
 * \brief The ListKafkaVersionsRequest class provides an interface for Kafka ListKafkaVersions requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listKafkaVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListKafkaVersionsRequest::ListKafkaVersionsRequest(const ListKafkaVersionsRequest &other)
    : KafkaRequest(new ListKafkaVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListKafkaVersionsRequest object.
 */
ListKafkaVersionsRequest::ListKafkaVersionsRequest()
    : KafkaRequest(new ListKafkaVersionsRequestPrivate(KafkaRequest::ListKafkaVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListKafkaVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListKafkaVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListKafkaVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListKafkaVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListKafkaVersionsRequestPrivate
 * \brief The ListKafkaVersionsRequestPrivate class provides private implementation for ListKafkaVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListKafkaVersionsRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListKafkaVersionsRequestPrivate::ListKafkaVersionsRequestPrivate(
    const KafkaRequest::Action action, ListKafkaVersionsRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListKafkaVersionsRequest
 * class' copy constructor.
 */
ListKafkaVersionsRequestPrivate::ListKafkaVersionsRequestPrivate(
    const ListKafkaVersionsRequestPrivate &other, ListKafkaVersionsRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
