// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
