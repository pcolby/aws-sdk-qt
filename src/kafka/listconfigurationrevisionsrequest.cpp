/*
    Copyright 2013-2020 Paul Colby

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

#include "listconfigurationrevisionsrequest.h"
#include "listconfigurationrevisionsrequest_p.h"
#include "listconfigurationrevisionsresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListConfigurationRevisionsRequest
 * \brief The ListConfigurationRevisionsRequest class provides an interface for Kafka ListConfigurationRevisions requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listConfigurationRevisions
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest(const ListConfigurationRevisionsRequest &other)
    : KafkaRequest(new ListConfigurationRevisionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationRevisionsRequest object.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest()
    : KafkaRequest(new ListConfigurationRevisionsRequestPrivate(KafkaRequest::ListConfigurationRevisionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConfigurationRevisionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConfigurationRevisionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigurationRevisionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationRevisionsResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListConfigurationRevisionsRequestPrivate
 * \brief The ListConfigurationRevisionsRequestPrivate class provides private implementation for ListConfigurationRevisionsRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListConfigurationRevisionsRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListConfigurationRevisionsRequestPrivate::ListConfigurationRevisionsRequestPrivate(
    const KafkaRequest::Action action, ListConfigurationRevisionsRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationRevisionsRequest
 * class' copy constructor.
 */
ListConfigurationRevisionsRequestPrivate::ListConfigurationRevisionsRequestPrivate(
    const ListConfigurationRevisionsRequestPrivate &other, ListConfigurationRevisionsRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
