// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnodesrequest.h"
#include "listnodesrequest_p.h"
#include "listnodesresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListNodesRequest
 * \brief The ListNodesRequest class provides an interface for Kafka ListNodes requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listNodes
 */

/*!
 * Constructs a copy of \a other.
 */
ListNodesRequest::ListNodesRequest(const ListNodesRequest &other)
    : KafkaRequest(new ListNodesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNodesRequest object.
 */
ListNodesRequest::ListNodesRequest()
    : KafkaRequest(new ListNodesRequestPrivate(KafkaRequest::ListNodesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNodesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNodesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNodesRequest::response(QNetworkReply * const reply) const
{
    return new ListNodesResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListNodesRequestPrivate
 * \brief The ListNodesRequestPrivate class provides private implementation for ListNodesRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListNodesRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const KafkaRequest::Action action, ListNodesRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNodesRequest
 * class' copy constructor.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const ListNodesRequestPrivate &other, ListNodesRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
