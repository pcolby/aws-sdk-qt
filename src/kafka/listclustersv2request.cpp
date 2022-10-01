// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
