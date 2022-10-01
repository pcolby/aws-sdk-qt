// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationrequest.h"
#include "describeconfigurationrequest_p.h"
#include "describeconfigurationresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeConfigurationRequest
 * \brief The DescribeConfigurationRequest class provides an interface for Mq DescribeConfiguration requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest(const DescribeConfigurationRequest &other)
    : MqRequest(new DescribeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationRequest object.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest()
    : MqRequest(new DescribeConfigurationRequestPrivate(MqRequest::DescribeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DescribeConfigurationRequestPrivate
 * \brief The DescribeConfigurationRequestPrivate class provides private implementation for DescribeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeConfigurationRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeConfigurationRequestPrivate::DescribeConfigurationRequestPrivate(
    const MqRequest::Action action, DescribeConfigurationRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRequest
 * class' copy constructor.
 */
DescribeConfigurationRequestPrivate::DescribeConfigurationRequestPrivate(
    const DescribeConfigurationRequestPrivate &other, DescribeConfigurationRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
