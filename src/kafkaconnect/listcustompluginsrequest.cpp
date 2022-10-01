/*
    Copyright 2013-2021 Paul Colby

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
