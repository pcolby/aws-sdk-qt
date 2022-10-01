// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationrevisionrequest.h"
#include "describeconfigurationrevisionrequest_p.h"
#include "describeconfigurationrevisionresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeConfigurationRevisionRequest
 * \brief The DescribeConfigurationRevisionRequest class provides an interface for Mq DescribeConfigurationRevision requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeConfigurationRevision
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest(const DescribeConfigurationRevisionRequest &other)
    : MqRequest(new DescribeConfigurationRevisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationRevisionRequest object.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest()
    : MqRequest(new DescribeConfigurationRevisionRequestPrivate(MqRequest::DescribeConfigurationRevisionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConfigurationRevisionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConfigurationRevisionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationRevisionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationRevisionResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DescribeConfigurationRevisionRequestPrivate
 * \brief The DescribeConfigurationRevisionRequestPrivate class provides private implementation for DescribeConfigurationRevisionRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeConfigurationRevisionRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeConfigurationRevisionRequestPrivate::DescribeConfigurationRevisionRequestPrivate(
    const MqRequest::Action action, DescribeConfigurationRevisionRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRevisionRequest
 * class' copy constructor.
 */
DescribeConfigurationRevisionRequestPrivate::DescribeConfigurationRevisionRequestPrivate(
    const DescribeConfigurationRevisionRequestPrivate &other, DescribeConfigurationRevisionRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
