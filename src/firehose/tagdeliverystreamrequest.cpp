// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagdeliverystreamrequest.h"
#include "tagdeliverystreamrequest_p.h"
#include "tagdeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::TagDeliveryStreamRequest
 * \brief The TagDeliveryStreamRequest class provides an interface for Firehose TagDeliveryStream requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::tagDeliveryStream
 */

/*!
 * Constructs a copy of \a other.
 */
TagDeliveryStreamRequest::TagDeliveryStreamRequest(const TagDeliveryStreamRequest &other)
    : FirehoseRequest(new TagDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagDeliveryStreamRequest object.
 */
TagDeliveryStreamRequest::TagDeliveryStreamRequest()
    : FirehoseRequest(new TagDeliveryStreamRequestPrivate(FirehoseRequest::TagDeliveryStreamAction, this))
{

}

/*!
 * \reimp
 */
bool TagDeliveryStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagDeliveryStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new TagDeliveryStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::TagDeliveryStreamRequestPrivate
 * \brief The TagDeliveryStreamRequestPrivate class provides private implementation for TagDeliveryStreamRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a TagDeliveryStreamRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
TagDeliveryStreamRequestPrivate::TagDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, TagDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagDeliveryStreamRequest
 * class' copy constructor.
 */
TagDeliveryStreamRequestPrivate::TagDeliveryStreamRequestPrivate(
    const TagDeliveryStreamRequestPrivate &other, TagDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
