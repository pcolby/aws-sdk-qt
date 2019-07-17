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

#include "startdeliverystreamencryptionrequest.h"
#include "startdeliverystreamencryptionrequest_p.h"
#include "startdeliverystreamencryptionresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::StartDeliveryStreamEncryptionRequest
 * \brief The StartDeliveryStreamEncryptionRequest class provides an interface for Firehose StartDeliveryStreamEncryption requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::startDeliveryStreamEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
StartDeliveryStreamEncryptionRequest::StartDeliveryStreamEncryptionRequest(const StartDeliveryStreamEncryptionRequest &other)
    : FirehoseRequest(new StartDeliveryStreamEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDeliveryStreamEncryptionRequest object.
 */
StartDeliveryStreamEncryptionRequest::StartDeliveryStreamEncryptionRequest()
    : FirehoseRequest(new StartDeliveryStreamEncryptionRequestPrivate(FirehoseRequest::StartDeliveryStreamEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool StartDeliveryStreamEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDeliveryStreamEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDeliveryStreamEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new StartDeliveryStreamEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::StartDeliveryStreamEncryptionRequestPrivate
 * \brief The StartDeliveryStreamEncryptionRequestPrivate class provides private implementation for StartDeliveryStreamEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a StartDeliveryStreamEncryptionRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
StartDeliveryStreamEncryptionRequestPrivate::StartDeliveryStreamEncryptionRequestPrivate(
    const FirehoseRequest::Action action, StartDeliveryStreamEncryptionRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDeliveryStreamEncryptionRequest
 * class' copy constructor.
 */
StartDeliveryStreamEncryptionRequestPrivate::StartDeliveryStreamEncryptionRequestPrivate(
    const StartDeliveryStreamEncryptionRequestPrivate &other, StartDeliveryStreamEncryptionRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
