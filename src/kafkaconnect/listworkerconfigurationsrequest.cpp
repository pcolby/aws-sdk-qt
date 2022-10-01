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

#include "listworkerconfigurationsrequest.h"
#include "listworkerconfigurationsrequest_p.h"
#include "listworkerconfigurationsresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsRequest
 * \brief The ListWorkerConfigurationsRequest class provides an interface for KafkaConnect ListWorkerConfigurations requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listWorkerConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkerConfigurationsRequest::ListWorkerConfigurationsRequest(const ListWorkerConfigurationsRequest &other)
    : KafkaConnectRequest(new ListWorkerConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkerConfigurationsRequest object.
 */
ListWorkerConfigurationsRequest::ListWorkerConfigurationsRequest()
    : KafkaConnectRequest(new ListWorkerConfigurationsRequestPrivate(KafkaConnectRequest::ListWorkerConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkerConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkerConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkerConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkerConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsRequestPrivate
 * \brief The ListWorkerConfigurationsRequestPrivate class provides private implementation for ListWorkerConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListWorkerConfigurationsRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
ListWorkerConfigurationsRequestPrivate::ListWorkerConfigurationsRequestPrivate(
    const KafkaConnectRequest::Action action, ListWorkerConfigurationsRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkerConfigurationsRequest
 * class' copy constructor.
 */
ListWorkerConfigurationsRequestPrivate::ListWorkerConfigurationsRequestPrivate(
    const ListWorkerConfigurationsRequestPrivate &other, ListWorkerConfigurationsRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
