/*
    Copyright 2013-2018 Paul Colby

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

#include "untagdeliverystreamrequest.h"
#include "untagdeliverystreamrequest_p.h"
#include "untagdeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::UntagDeliveryStreamRequest
 * \brief The UntagDeliveryStreamRequest class provides an interface for Firehose UntagDeliveryStream requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::untagDeliveryStream
 */

/*!
 * Constructs a copy of \a other.
 */
UntagDeliveryStreamRequest::UntagDeliveryStreamRequest(const UntagDeliveryStreamRequest &other)
    : FirehoseRequest(new UntagDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagDeliveryStreamRequest object.
 */
UntagDeliveryStreamRequest::UntagDeliveryStreamRequest()
    : FirehoseRequest(new UntagDeliveryStreamRequestPrivate(FirehoseRequest::UntagDeliveryStreamAction, this))
{

}

/*!
 * \reimp
 */
bool UntagDeliveryStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagDeliveryStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new UntagDeliveryStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::UntagDeliveryStreamRequestPrivate
 * \brief The UntagDeliveryStreamRequestPrivate class provides private implementation for UntagDeliveryStreamRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a UntagDeliveryStreamRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
UntagDeliveryStreamRequestPrivate::UntagDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, UntagDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagDeliveryStreamRequest
 * class' copy constructor.
 */
UntagDeliveryStreamRequestPrivate::UntagDeliveryStreamRequestPrivate(
    const UntagDeliveryStreamRequestPrivate &other, UntagDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
