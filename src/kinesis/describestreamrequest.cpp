// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamrequest.h"
#include "describestreamrequest_p.h"
#include "describestreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamRequest
 * \brief The DescribeStreamRequest class provides an interface for Kinesis DescribeStream requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStream
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStreamRequest::DescribeStreamRequest(const DescribeStreamRequest &other)
    : KinesisRequest(new DescribeStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStreamRequest object.
 */
DescribeStreamRequest::DescribeStreamRequest()
    : KinesisRequest(new DescribeStreamRequestPrivate(KinesisRequest::DescribeStreamAction, this))
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
 * \class QtAws::Kinesis::DescribeStreamRequestPrivate
 * \brief The DescribeStreamRequestPrivate class provides private implementation for DescribeStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeStreamRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const KinesisRequest::Action action, DescribeStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
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
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
