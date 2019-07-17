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

#include "stopdeliverystreamencryptionrequest.h"
#include "stopdeliverystreamencryptionrequest_p.h"
#include "stopdeliverystreamencryptionresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::StopDeliveryStreamEncryptionRequest
 * \brief The StopDeliveryStreamEncryptionRequest class provides an interface for Firehose StopDeliveryStreamEncryption requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::stopDeliveryStreamEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
StopDeliveryStreamEncryptionRequest::StopDeliveryStreamEncryptionRequest(const StopDeliveryStreamEncryptionRequest &other)
    : FirehoseRequest(new StopDeliveryStreamEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDeliveryStreamEncryptionRequest object.
 */
StopDeliveryStreamEncryptionRequest::StopDeliveryStreamEncryptionRequest()
    : FirehoseRequest(new StopDeliveryStreamEncryptionRequestPrivate(FirehoseRequest::StopDeliveryStreamEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool StopDeliveryStreamEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDeliveryStreamEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDeliveryStreamEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new StopDeliveryStreamEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::StopDeliveryStreamEncryptionRequestPrivate
 * \brief The StopDeliveryStreamEncryptionRequestPrivate class provides private implementation for StopDeliveryStreamEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a StopDeliveryStreamEncryptionRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
StopDeliveryStreamEncryptionRequestPrivate::StopDeliveryStreamEncryptionRequestPrivate(
    const FirehoseRequest::Action action, StopDeliveryStreamEncryptionRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDeliveryStreamEncryptionRequest
 * class' copy constructor.
 */
StopDeliveryStreamEncryptionRequestPrivate::StopDeliveryStreamEncryptionRequestPrivate(
    const StopDeliveryStreamEncryptionRequestPrivate &other, StopDeliveryStreamEncryptionRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
