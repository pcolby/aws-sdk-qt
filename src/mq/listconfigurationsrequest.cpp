// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationsrequest.h"
#include "listconfigurationsrequest_p.h"
#include "listconfigurationsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListConfigurationsRequest
 * \brief The ListConfigurationsRequest class provides an interface for Mq ListConfigurations requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
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
 * \class QtAws::Mq::ListConfigurationsRequestPrivate
 * \brief The ListConfigurationsRequestPrivate class provides private implementation for ListConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsMq
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

} // namespace Mq
} // namespace QtAws
