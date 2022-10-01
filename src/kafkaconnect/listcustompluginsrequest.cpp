// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustompluginsrequest.h"
#include "listcustompluginsrequest_p.h"
#include "listcustompluginsresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListCustomPluginsRequest
 * \brief The ListCustomPluginsRequest class provides an interface for KafkaConnect ListCustomPlugins requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listCustomPlugins
 */

/*!
 * Constructs a copy of \a other.
 */
ListCustomPluginsRequest::ListCustomPluginsRequest(const ListCustomPluginsRequest &other)
    : KafkaConnectRequest(new ListCustomPluginsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCustomPluginsRequest object.
 */
ListCustomPluginsRequest::ListCustomPluginsRequest()
    : KafkaConnectRequest(new ListCustomPluginsRequestPrivate(KafkaConnectRequest::ListCustomPluginsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCustomPluginsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCustomPluginsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCustomPluginsRequest::response(QNetworkReply * const reply) const
{
    return new ListCustomPluginsResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::ListCustomPluginsRequestPrivate
 * \brief The ListCustomPluginsRequestPrivate class provides private implementation for ListCustomPluginsRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListCustomPluginsRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
ListCustomPluginsRequestPrivate::ListCustomPluginsRequestPrivate(
    const KafkaConnectRequest::Action action, ListCustomPluginsRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCustomPluginsRequest
 * class' copy constructor.
 */
ListCustomPluginsRequestPrivate::ListCustomPluginsRequestPrivate(
    const ListCustomPluginsRequestPrivate &other, ListCustomPluginsRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
