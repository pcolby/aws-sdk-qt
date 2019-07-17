/*
    Copyright 2013-2019 Paul Colby

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
