/*
    Copyright 2013-2020 Paul Colby

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
