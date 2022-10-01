// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclusteroperationrequest.h"
#include "describeclusteroperationrequest_p.h"
#include "describeclusteroperationresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeClusterOperationRequest
 * \brief The DescribeClusterOperationRequest class provides an interface for Kafka DescribeClusterOperation requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeClusterOperation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClusterOperationRequest::DescribeClusterOperationRequest(const DescribeClusterOperationRequest &other)
    : KafkaRequest(new DescribeClusterOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClusterOperationRequest object.
 */
DescribeClusterOperationRequest::DescribeClusterOperationRequest()
    : KafkaRequest(new DescribeClusterOperationRequestPrivate(KafkaRequest::DescribeClusterOperationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeClusterOperationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClusterOperationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClusterOperationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterOperationResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::DescribeClusterOperationRequestPrivate
 * \brief The DescribeClusterOperationRequestPrivate class provides private implementation for DescribeClusterOperationRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeClusterOperationRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
DescribeClusterOperationRequestPrivate::DescribeClusterOperationRequestPrivate(
    const KafkaRequest::Action action, DescribeClusterOperationRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterOperationRequest
 * class' copy constructor.
 */
DescribeClusterOperationRequestPrivate::DescribeClusterOperationRequestPrivate(
    const DescribeClusterOperationRequestPrivate &other, DescribeClusterOperationRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
