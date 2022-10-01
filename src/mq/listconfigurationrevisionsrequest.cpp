// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationrevisionsrequest.h"
#include "listconfigurationrevisionsrequest_p.h"
#include "listconfigurationrevisionsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListConfigurationRevisionsRequest
 * \brief The ListConfigurationRevisionsRequest class provides an interface for Mq ListConfigurationRevisions requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::listConfigurationRevisions
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest(const ListConfigurationRevisionsRequest &other)
    : MqRequest(new ListConfigurationRevisionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationRevisionsRequest object.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest()
    : MqRequest(new ListConfigurationRevisionsRequestPrivate(MqRequest::ListConfigurationRevisionsAction, this))
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
 * \class QtAws::Mq::ListConfigurationRevisionsRequestPrivate
 * \brief The ListConfigurationRevisionsRequestPrivate class provides private implementation for ListConfigurationRevisionsRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a ListConfigurationRevisionsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
ListConfigurationRevisionsRequestPrivate::ListConfigurationRevisionsRequestPrivate(
    const MqRequest::Action action, ListConfigurationRevisionsRequest * const q)
    : MqRequestPrivate(action, q)
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
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
