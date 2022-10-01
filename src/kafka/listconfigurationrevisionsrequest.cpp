// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
