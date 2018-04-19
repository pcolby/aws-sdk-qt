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

#include "listconfigurationrevisionsrequest.h"
#include "listconfigurationrevisionsrequest_p.h"
#include "listconfigurationrevisionsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::ListConfigurationRevisionsRequest
 * \brief The ListConfigurationRevisionsRequest class provides an interface for MQ ListConfigurationRevisions requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::listConfigurationRevisions
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest(const ListConfigurationRevisionsRequest &other)
    : MQRequest(new ListConfigurationRevisionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationRevisionsRequest object.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest()
    : MQRequest(new ListConfigurationRevisionsRequestPrivate(MQRequest::ListConfigurationRevisionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConfigurationRevisionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConfigurationRevisionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigurationRevisionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationRevisionsResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::ListConfigurationRevisionsRequestPrivate
 * \brief The ListConfigurationRevisionsRequestPrivate class provides private implementation for ListConfigurationRevisionsRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a ListConfigurationRevisionsRequestPrivate object for MQ \a action,
 * with public implementation \a q.
 */
ListConfigurationRevisionsRequestPrivate::ListConfigurationRevisionsRequestPrivate(
    const MQRequest::Action action, ListConfigurationRevisionsRequest * const q)
    : MQRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationRevisionsRequest
 * class' copy constructor.
 */
ListConfigurationRevisionsRequestPrivate::ListConfigurationRevisionsRequestPrivate(
    const ListConfigurationRevisionsRequestPrivate &other, ListConfigurationRevisionsRequest * const q)
    : MQRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
