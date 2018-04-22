/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listconfigurationsrequest.h"
#include "listconfigurationsrequest_p.h"
#include "listconfigurationsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::ListConfigurationsRequest
 * \brief The ListConfigurationsRequest class provides an interface for MQ ListConfigurations requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::listConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationsRequest::ListConfigurationsRequest(const ListConfigurationsRequest &other)
    : MqRequest(new ListConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationsRequest object.
 */
ListConfigurationsRequest::ListConfigurationsRequest()
    : MqRequest(new ListConfigurationsRequestPrivate(MqRequest::ListConfigurationsAction, this))
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
 * \class QtAws::MQ::ListConfigurationsRequestPrivate
 * \brief The ListConfigurationsRequestPrivate class provides private implementation for ListConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a ListConfigurationsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
ListConfigurationsRequestPrivate::ListConfigurationsRequestPrivate(
    const MqRequest::Action action, ListConfigurationsRequest * const q)
    : MqRequestPrivate(action, q)
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
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
