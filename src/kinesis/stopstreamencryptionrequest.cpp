// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopstreamencryptionrequest.h"
#include "stopstreamencryptionrequest_p.h"
#include "stopstreamencryptionresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::StopStreamEncryptionRequest
 * \brief The StopStreamEncryptionRequest class provides an interface for Kinesis StopStreamEncryption requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::stopStreamEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
StopStreamEncryptionRequest::StopStreamEncryptionRequest(const StopStreamEncryptionRequest &other)
    : KinesisRequest(new StopStreamEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopStreamEncryptionRequest object.
 */
StopStreamEncryptionRequest::StopStreamEncryptionRequest()
    : KinesisRequest(new StopStreamEncryptionRequestPrivate(KinesisRequest::StopStreamEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool StopStreamEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopStreamEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopStreamEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new StopStreamEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::StopStreamEncryptionRequestPrivate
 * \brief The StopStreamEncryptionRequestPrivate class provides private implementation for StopStreamEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a StopStreamEncryptionRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
StopStreamEncryptionRequestPrivate::StopStreamEncryptionRequestPrivate(
    const KinesisRequest::Action action, StopStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopStreamEncryptionRequest
 * class' copy constructor.
 */
StopStreamEncryptionRequestPrivate::StopStreamEncryptionRequestPrivate(
    const StopStreamEncryptionRequestPrivate &other, StopStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
