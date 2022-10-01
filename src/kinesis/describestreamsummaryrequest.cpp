// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamsummaryrequest.h"
#include "describestreamsummaryrequest_p.h"
#include "describestreamsummaryresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamSummaryRequest
 * \brief The DescribeStreamSummaryRequest class provides an interface for Kinesis DescribeStreamSummary requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStreamSummary
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStreamSummaryRequest::DescribeStreamSummaryRequest(const DescribeStreamSummaryRequest &other)
    : KinesisRequest(new DescribeStreamSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStreamSummaryRequest object.
 */
DescribeStreamSummaryRequest::DescribeStreamSummaryRequest()
    : KinesisRequest(new DescribeStreamSummaryRequestPrivate(KinesisRequest::DescribeStreamSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStreamSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamSummaryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DescribeStreamSummaryRequestPrivate
 * \brief The DescribeStreamSummaryRequestPrivate class provides private implementation for DescribeStreamSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeStreamSummaryRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DescribeStreamSummaryRequestPrivate::DescribeStreamSummaryRequestPrivate(
    const KinesisRequest::Action action, DescribeStreamSummaryRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamSummaryRequest
 * class' copy constructor.
 */
DescribeStreamSummaryRequestPrivate::DescribeStreamSummaryRequestPrivate(
    const DescribeStreamSummaryRequestPrivate &other, DescribeStreamSummaryRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
