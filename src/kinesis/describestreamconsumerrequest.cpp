// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
