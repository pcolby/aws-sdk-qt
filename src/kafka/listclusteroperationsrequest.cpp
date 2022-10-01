// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
