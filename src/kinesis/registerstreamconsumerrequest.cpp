// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerstreamconsumerrequest.h"
#include "registerstreamconsumerrequest_p.h"
#include "registerstreamconsumerresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::RegisterStreamConsumerRequest
 * \brief The RegisterStreamConsumerRequest class provides an interface for Kinesis RegisterStreamConsumer requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::registerStreamConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterStreamConsumerRequest::RegisterStreamConsumerRequest(const RegisterStreamConsumerRequest &other)
    : KinesisRequest(new RegisterStreamConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterStreamConsumerRequest object.
 */
RegisterStreamConsumerRequest::RegisterStreamConsumerRequest()
    : KinesisRequest(new RegisterStreamConsumerRequestPrivate(KinesisRequest::RegisterStreamConsumerAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterStreamConsumerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterStreamConsumerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterStreamConsumerRequest::response(QNetworkReply * const reply) const
{
    return new RegisterStreamConsumerResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::RegisterStreamConsumerRequestPrivate
 * \brief The RegisterStreamConsumerRequestPrivate class provides private implementation for RegisterStreamConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a RegisterStreamConsumerRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
RegisterStreamConsumerRequestPrivate::RegisterStreamConsumerRequestPrivate(
    const KinesisRequest::Action action, RegisterStreamConsumerRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterStreamConsumerRequest
 * class' copy constructor.
 */
RegisterStreamConsumerRequestPrivate::RegisterStreamConsumerRequestPrivate(
    const RegisterStreamConsumerRequestPrivate &other, RegisterStreamConsumerRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
