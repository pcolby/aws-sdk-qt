// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeliverystreamsrequest.h"
#include "listdeliverystreamsrequest_p.h"
#include "listdeliverystreamsresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::ListDeliveryStreamsRequest
 * \brief The ListDeliveryStreamsRequest class provides an interface for Firehose ListDeliveryStreams requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::listDeliveryStreams
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeliveryStreamsRequest::ListDeliveryStreamsRequest(const ListDeliveryStreamsRequest &other)
    : FirehoseRequest(new ListDeliveryStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeliveryStreamsRequest object.
 */
ListDeliveryStreamsRequest::ListDeliveryStreamsRequest()
    : FirehoseRequest(new ListDeliveryStreamsRequestPrivate(FirehoseRequest::ListDeliveryStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeliveryStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeliveryStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeliveryStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeliveryStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::ListDeliveryStreamsRequestPrivate
 * \brief The ListDeliveryStreamsRequestPrivate class provides private implementation for ListDeliveryStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a ListDeliveryStreamsRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
ListDeliveryStreamsRequestPrivate::ListDeliveryStreamsRequestPrivate(
    const FirehoseRequest::Action action, ListDeliveryStreamsRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeliveryStreamsRequest
 * class' copy constructor.
 */
ListDeliveryStreamsRequestPrivate::ListDeliveryStreamsRequestPrivate(
    const ListDeliveryStreamsRequestPrivate &other, ListDeliveryStreamsRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
