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

#include "deletedeliverystreamrequest.h"
#include "deletedeliverystreamrequest_p.h"
#include "deletedeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::DeleteDeliveryStreamRequest
 * \brief The DeleteDeliveryStreamRequest class provides an interface for Firehose DeleteDeliveryStream requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::deleteDeliveryStream
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeliveryStreamRequest::DeleteDeliveryStreamRequest(const DeleteDeliveryStreamRequest &other)
    : FirehoseRequest(new DeleteDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeliveryStreamRequest object.
 */
DeleteDeliveryStreamRequest::DeleteDeliveryStreamRequest()
    : FirehoseRequest(new DeleteDeliveryStreamRequestPrivate(FirehoseRequest::DeleteDeliveryStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeliveryStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeliveryStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeliveryStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::DeleteDeliveryStreamRequestPrivate
 * \brief The DeleteDeliveryStreamRequestPrivate class provides private implementation for DeleteDeliveryStreamRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a DeleteDeliveryStreamRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
DeleteDeliveryStreamRequestPrivate::DeleteDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, DeleteDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeliveryStreamRequest
 * class' copy constructor.
 */
DeleteDeliveryStreamRequestPrivate::DeleteDeliveryStreamRequestPrivate(
    const DeleteDeliveryStreamRequestPrivate &other, DeleteDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
