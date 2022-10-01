// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebrokerinstanceoptionsrequest.h"
#include "describebrokerinstanceoptionsrequest_p.h"
#include "describebrokerinstanceoptionsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeBrokerInstanceOptionsRequest
 * \brief The DescribeBrokerInstanceOptionsRequest class provides an interface for Mq DescribeBrokerInstanceOptions requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeBrokerInstanceOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBrokerInstanceOptionsRequest::DescribeBrokerInstanceOptionsRequest(const DescribeBrokerInstanceOptionsRequest &other)
    : MqRequest(new DescribeBrokerInstanceOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBrokerInstanceOptionsRequest object.
 */
DescribeBrokerInstanceOptionsRequest::DescribeBrokerInstanceOptionsRequest()
    : MqRequest(new DescribeBrokerInstanceOptionsRequestPrivate(MqRequest::DescribeBrokerInstanceOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBrokerInstanceOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBrokerInstanceOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBrokerInstanceOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBrokerInstanceOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DescribeBrokerInstanceOptionsRequestPrivate
 * \brief The DescribeBrokerInstanceOptionsRequestPrivate class provides private implementation for DescribeBrokerInstanceOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeBrokerInstanceOptionsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeBrokerInstanceOptionsRequestPrivate::DescribeBrokerInstanceOptionsRequestPrivate(
    const MqRequest::Action action, DescribeBrokerInstanceOptionsRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBrokerInstanceOptionsRequest
 * class' copy constructor.
 */
DescribeBrokerInstanceOptionsRequestPrivate::DescribeBrokerInstanceOptionsRequestPrivate(
    const DescribeBrokerInstanceOptionsRequestPrivate &other, DescribeBrokerInstanceOptionsRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
