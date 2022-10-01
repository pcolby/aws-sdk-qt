// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebrokerenginetypesrequest.h"
#include "describebrokerenginetypesrequest_p.h"
#include "describebrokerenginetypesresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeBrokerEngineTypesRequest
 * \brief The DescribeBrokerEngineTypesRequest class provides an interface for Mq DescribeBrokerEngineTypes requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeBrokerEngineTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBrokerEngineTypesRequest::DescribeBrokerEngineTypesRequest(const DescribeBrokerEngineTypesRequest &other)
    : MqRequest(new DescribeBrokerEngineTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBrokerEngineTypesRequest object.
 */
DescribeBrokerEngineTypesRequest::DescribeBrokerEngineTypesRequest()
    : MqRequest(new DescribeBrokerEngineTypesRequestPrivate(MqRequest::DescribeBrokerEngineTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBrokerEngineTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBrokerEngineTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBrokerEngineTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBrokerEngineTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DescribeBrokerEngineTypesRequestPrivate
 * \brief The DescribeBrokerEngineTypesRequestPrivate class provides private implementation for DescribeBrokerEngineTypesRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeBrokerEngineTypesRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeBrokerEngineTypesRequestPrivate::DescribeBrokerEngineTypesRequestPrivate(
    const MqRequest::Action action, DescribeBrokerEngineTypesRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBrokerEngineTypesRequest
 * class' copy constructor.
 */
DescribeBrokerEngineTypesRequestPrivate::DescribeBrokerEngineTypesRequestPrivate(
    const DescribeBrokerEngineTypesRequestPrivate &other, DescribeBrokerEngineTypesRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
