/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
