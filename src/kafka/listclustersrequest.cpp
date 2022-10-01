// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclustersrequest.h"
#include "listclustersrequest_p.h"
#include "listclustersresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListClustersRequest
 * \brief The ListClustersRequest class provides an interface for Kafka ListClusters requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listClusters
 */

/*!
 * Constructs a copy of \a other.
 */
ListClustersRequest::ListClustersRequest(const ListClustersRequest &other)
    : KafkaRequest(new ListClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListClustersRequest object.
 */
ListClustersRequest::ListClustersRequest()
    : KafkaRequest(new ListClustersRequestPrivate(KafkaRequest::ListClustersAction, this))
{

}

/*!
 * \reimp
 */
bool ListClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClustersRequest::response(QNetworkReply * const reply) const
{
    return new ListClustersResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListClustersRequestPrivate
 * \brief The ListClustersRequestPrivate class provides private implementation for ListClustersRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListClustersRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const KafkaRequest::Action action, ListClustersRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListClustersRequest
 * class' copy constructor.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const ListClustersRequestPrivate &other, ListClustersRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
