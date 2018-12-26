/*
    Copyright 2013-2018 Paul Colby

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

#include "describestreamconsumerrequest.h"
#include "describestreamconsumerrequest_p.h"
#include "describestreamconsumerresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamConsumerRequest
 * \brief The DescribeStreamConsumerRequest class provides an interface for Kinesis DescribeStreamConsumer requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStreamConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStreamConsumerRequest::DescribeStreamConsumerRequest(const DescribeStreamConsumerRequest &other)
    : KinesisRequest(new DescribeStreamConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStreamConsumerRequest object.
 */
DescribeStreamConsumerRequest::DescribeStreamConsumerRequest()
    : KinesisRequest(new DescribeStreamConsumerRequestPrivate(KinesisRequest::DescribeStreamConsumerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamConsumerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStreamConsumerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamConsumerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamConsumerResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DescribeStreamConsumerRequestPrivate
 * \brief The DescribeStreamConsumerRequestPrivate class provides private implementation for DescribeStreamConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeStreamConsumerRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DescribeStreamConsumerRequestPrivate::DescribeStreamConsumerRequestPrivate(
    const KinesisRequest::Action action, DescribeStreamConsumerRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamConsumerRequest
 * class' copy constructor.
 */
DescribeStreamConsumerRequestPrivate::DescribeStreamConsumerRequestPrivate(
    const DescribeStreamConsumerRequestPrivate &other, DescribeStreamConsumerRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
