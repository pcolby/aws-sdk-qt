// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectorsrequest.h"
#include "listconnectorsrequest_p.h"
#include "listconnectorsresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListConnectorsRequest
 * \brief The ListConnectorsRequest class provides an interface for KafkaConnect ListConnectors requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listConnectors
 */

/*!
 * Constructs a copy of \a other.
 */
ListConnectorsRequest::ListConnectorsRequest(const ListConnectorsRequest &other)
    : KafkaConnectRequest(new ListConnectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConnectorsRequest object.
 */
ListConnectorsRequest::ListConnectorsRequest()
    : KafkaConnectRequest(new ListConnectorsRequestPrivate(KafkaConnectRequest::ListConnectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConnectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConnectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConnectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListConnectorsResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::ListConnectorsRequestPrivate
 * \brief The ListConnectorsRequestPrivate class provides private implementation for ListConnectorsRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListConnectorsRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
ListConnectorsRequestPrivate::ListConnectorsRequestPrivate(
    const KafkaConnectRequest::Action action, ListConnectorsRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConnectorsRequest
 * class' copy constructor.
 */
ListConnectorsRequestPrivate::ListConnectorsRequestPrivate(
    const ListConnectorsRequestPrivate &other, ListConnectorsRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
