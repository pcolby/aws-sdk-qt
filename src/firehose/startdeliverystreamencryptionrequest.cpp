// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
