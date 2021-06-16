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

#include "describedeliverystreamrequest.h"
#include "describedeliverystreamrequest_p.h"
#include "describedeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::DescribeDeliveryStreamRequest
 * \brief The DescribeDeliveryStreamRequest class provides an interface for Firehose DescribeDeliveryStream requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::describeDeliveryStream
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDeliveryStreamRequest::DescribeDeliveryStreamRequest(const DescribeDeliveryStreamRequest &other)
    : FirehoseRequest(new DescribeDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDeliveryStreamRequest object.
 */
DescribeDeliveryStreamRequest::DescribeDeliveryStreamRequest()
    : FirehoseRequest(new DescribeDeliveryStreamRequestPrivate(FirehoseRequest::DescribeDeliveryStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDeliveryStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDeliveryStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeliveryStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::DescribeDeliveryStreamRequestPrivate
 * \brief The DescribeDeliveryStreamRequestPrivate class provides private implementation for DescribeDeliveryStreamRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a DescribeDeliveryStreamRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
DescribeDeliveryStreamRequestPrivate::DescribeDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, DescribeDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeliveryStreamRequest
 * class' copy constructor.
 */
DescribeDeliveryStreamRequestPrivate::DescribeDeliveryStreamRequestPrivate(
    const DescribeDeliveryStreamRequestPrivate &other, DescribeDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
