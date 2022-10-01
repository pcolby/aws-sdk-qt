// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstreamencryptionrequest.h"
#include "startstreamencryptionrequest_p.h"
#include "startstreamencryptionresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::StartStreamEncryptionRequest
 * \brief The StartStreamEncryptionRequest class provides an interface for Kinesis StartStreamEncryption requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::startStreamEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
StartStreamEncryptionRequest::StartStreamEncryptionRequest(const StartStreamEncryptionRequest &other)
    : KinesisRequest(new StartStreamEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStreamEncryptionRequest object.
 */
StartStreamEncryptionRequest::StartStreamEncryptionRequest()
    : KinesisRequest(new StartStreamEncryptionRequestPrivate(KinesisRequest::StartStreamEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool StartStreamEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStreamEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStreamEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new StartStreamEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::StartStreamEncryptionRequestPrivate
 * \brief The StartStreamEncryptionRequestPrivate class provides private implementation for StartStreamEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a StartStreamEncryptionRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
StartStreamEncryptionRequestPrivate::StartStreamEncryptionRequestPrivate(
    const KinesisRequest::Action action, StartStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStreamEncryptionRequest
 * class' copy constructor.
 */
StartStreamEncryptionRequestPrivate::StartStreamEncryptionRequestPrivate(
    const StartStreamEncryptionRequestPrivate &other, StartStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
