// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationrevisionrequest.h"
#include "describeconfigurationrevisionrequest_p.h"
#include "describeconfigurationrevisionresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeConfigurationRevisionRequest
 * \brief The DescribeConfigurationRevisionRequest class provides an interface for Kafka DescribeConfigurationRevision requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeConfigurationRevision
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest(const DescribeConfigurationRevisionRequest &other)
    : KafkaRequest(new DescribeConfigurationRevisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationRevisionRequest object.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest()
    : KafkaRequest(new DescribeConfigurationRevisionRequestPrivate(KafkaRequest::DescribeConfigurationRevisionAction, this))
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
 * \class QtAws::Kafka::DescribeConfigurationRevisionRequestPrivate
 * \brief The DescribeConfigurationRevisionRequestPrivate class provides private implementation for DescribeConfigurationRevisionRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeConfigurationRevisionRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
DescribeConfigurationRevisionRequestPrivate::DescribeConfigurationRevisionRequestPrivate(
    const KafkaRequest::Action action, DescribeConfigurationRevisionRequest * const q)
    : KafkaRequestPrivate(action, q)
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
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
