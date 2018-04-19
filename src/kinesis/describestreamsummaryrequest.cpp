/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
