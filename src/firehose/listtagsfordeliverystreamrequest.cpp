// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsfordeliverystreamrequest.h"
#include "listtagsfordeliverystreamrequest_p.h"
#include "listtagsfordeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::ListTagsForDeliveryStreamRequest
 * \brief The ListTagsForDeliveryStreamRequest class provides an interface for Firehose ListTagsForDeliveryStream requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::listTagsForDeliveryStream
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForDeliveryStreamRequest::ListTagsForDeliveryStreamRequest(const ListTagsForDeliveryStreamRequest &other)
    : FirehoseRequest(new ListTagsForDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForDeliveryStreamRequest object.
 */
ListTagsForDeliveryStreamRequest::ListTagsForDeliveryStreamRequest()
    : FirehoseRequest(new ListTagsForDeliveryStreamRequestPrivate(FirehoseRequest::ListTagsForDeliveryStreamAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForDeliveryStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForDeliveryStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForDeliveryStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::ListTagsForDeliveryStreamRequestPrivate
 * \brief The ListTagsForDeliveryStreamRequestPrivate class provides private implementation for ListTagsForDeliveryStreamRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a ListTagsForDeliveryStreamRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
ListTagsForDeliveryStreamRequestPrivate::ListTagsForDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, ListTagsForDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForDeliveryStreamRequest
 * class' copy constructor.
 */
ListTagsForDeliveryStreamRequestPrivate::ListTagsForDeliveryStreamRequestPrivate(
    const ListTagsForDeliveryStreamRequestPrivate &other, ListTagsForDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
