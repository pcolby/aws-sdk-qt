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

#include "listclustersv2request.h"
#include "listclustersv2request_p.h"
#include "listclustersv2response.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListClustersV2Request
 * \brief The ListClustersV2Request class provides an interface for Kafka ListClustersV2 requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listClustersV2
 */

/*!
 * Constructs a copy of \a other.
 */
ListClustersV2Request::ListClustersV2Request(const ListClustersV2Request &other)
    : KafkaRequest(new ListClustersV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListClustersV2Request object.
 */
ListClustersV2Request::ListClustersV2Request()
    : KafkaRequest(new ListClustersV2RequestPrivate(KafkaRequest::ListClustersV2Action, this))
{

}

/*!
 * \reimp
 */
bool ListClustersV2Request::isValid() const
{
    return false;
}


/*!
 * Returns a ListClustersV2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClustersV2Request::response(QNetworkReply * const reply) const
{
    return new ListClustersV2Response(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListClustersV2RequestPrivate
 * \brief The ListClustersV2RequestPrivate class provides private implementation for ListClustersV2Request.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListClustersV2RequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListClustersV2RequestPrivate::ListClustersV2RequestPrivate(
    const KafkaRequest::Action action, ListClustersV2Request * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListClustersV2Request
 * class' copy constructor.
 */
ListClustersV2RequestPrivate::ListClustersV2RequestPrivate(
    const ListClustersV2RequestPrivate &other, ListClustersV2Request * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
