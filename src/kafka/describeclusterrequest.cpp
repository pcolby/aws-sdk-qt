// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclusterrequest.h"
#include "describeclusterrequest_p.h"
#include "describeclusterresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeClusterRequest
 * \brief The DescribeClusterRequest class provides an interface for Kafka DescribeCluster requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClusterRequest::DescribeClusterRequest(const DescribeClusterRequest &other)
    : KafkaRequest(new DescribeClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClusterRequest object.
 */
DescribeClusterRequest::DescribeClusterRequest()
    : KafkaRequest(new DescribeClusterRequestPrivate(KafkaRequest::DescribeClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClusterRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::DescribeClusterRequestPrivate
 * \brief The DescribeClusterRequestPrivate class provides private implementation for DescribeClusterRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeClusterRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
DescribeClusterRequestPrivate::DescribeClusterRequestPrivate(
    const KafkaRequest::Action action, DescribeClusterRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterRequest
 * class' copy constructor.
 */
DescribeClusterRequestPrivate::DescribeClusterRequestPrivate(
    const DescribeClusterRequestPrivate &other, DescribeClusterRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
