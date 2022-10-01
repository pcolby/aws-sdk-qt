// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
