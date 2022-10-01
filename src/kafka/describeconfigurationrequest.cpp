// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationrequest.h"
#include "describeconfigurationrequest_p.h"
#include "describeconfigurationresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeConfigurationRequest
 * \brief The DescribeConfigurationRequest class provides an interface for Kafka DescribeConfiguration requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest(const DescribeConfigurationRequest &other)
    : KafkaRequest(new DescribeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationRequest object.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest()
    : KafkaRequest(new DescribeConfigurationRequestPrivate(KafkaRequest::DescribeConfigurationAction, this))
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
 * \class QtAws::Kafka::DescribeConfigurationRequestPrivate
 * \brief The DescribeConfigurationRequestPrivate class provides private implementation for DescribeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeConfigurationRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
DescribeConfigurationRequestPrivate::DescribeConfigurationRequestPrivate(
    const KafkaRequest::Action action, DescribeConfigurationRequest * const q)
    : KafkaRequestPrivate(action, q)
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
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
