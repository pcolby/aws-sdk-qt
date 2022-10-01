// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationsrequest.h"
#include "listconfigurationsrequest_p.h"
#include "listconfigurationsresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListConfigurationsRequest
 * \brief The ListConfigurationsRequest class provides an interface for Kafka ListConfigurations requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationsRequest::ListConfigurationsRequest(const ListConfigurationsRequest &other)
    : KafkaRequest(new ListConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationsRequest object.
 */
ListConfigurationsRequest::ListConfigurationsRequest()
    : KafkaRequest(new ListConfigurationsRequestPrivate(KafkaRequest::ListConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListConfigurationsRequestPrivate
 * \brief The ListConfigurationsRequestPrivate class provides private implementation for ListConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListConfigurationsRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListConfigurationsRequestPrivate::ListConfigurationsRequestPrivate(
    const KafkaRequest::Action action, ListConfigurationsRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationsRequest
 * class' copy constructor.
 */
ListConfigurationsRequestPrivate::ListConfigurationsRequestPrivate(
    const ListConfigurationsRequestPrivate &other, ListConfigurationsRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
