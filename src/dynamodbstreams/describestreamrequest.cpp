// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamrequest.h"
#include "describestreamrequest_p.h"
#include "describestreamresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::DescribeStreamRequest
 * \brief The DescribeStreamRequest class provides an interface for DynamoDbStreams DescribeStream requests.
 *
 * \inmodule QtAwsDynamoDbStreams
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB Streams provides API actions for accessing streams and processing stream records. To learn more about
 *  application development with Streams, see <a
 *  href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing Table Activity with
 *  DynamoDB Streams</a> in the Amazon DynamoDB Developer
 *
 * \sa DynamoDbStreamsClient::describeStream
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStreamRequest::DescribeStreamRequest(const DescribeStreamRequest &other)
    : DynamoDbStreamsRequest(new DescribeStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStreamRequest object.
 */
DescribeStreamRequest::DescribeStreamRequest()
    : DynamoDbStreamsRequest(new DescribeStreamRequestPrivate(DynamoDbStreamsRequest::DescribeStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDbStreams::DescribeStreamRequestPrivate
 * \brief The DescribeStreamRequestPrivate class provides private implementation for DescribeStreamRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a DescribeStreamRequestPrivate object for DynamoDbStreams \a action,
 * with public implementation \a q.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const DynamoDbStreamsRequest::Action action, DescribeStreamRequest * const q)
    : DynamoDbStreamsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamRequest
 * class' copy constructor.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const DescribeStreamRequestPrivate &other, DescribeStreamRequest * const q)
    : DynamoDbStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDbStreams
} // namespace QtAws
