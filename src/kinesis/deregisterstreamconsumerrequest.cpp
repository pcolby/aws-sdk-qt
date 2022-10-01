// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterstreamconsumerrequest.h"
#include "deregisterstreamconsumerrequest_p.h"
#include "deregisterstreamconsumerresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DeregisterStreamConsumerRequest
 * \brief The DeregisterStreamConsumerRequest class provides an interface for Kinesis DeregisterStreamConsumer requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::deregisterStreamConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterStreamConsumerRequest::DeregisterStreamConsumerRequest(const DeregisterStreamConsumerRequest &other)
    : KinesisRequest(new DeregisterStreamConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterStreamConsumerRequest object.
 */
DeregisterStreamConsumerRequest::DeregisterStreamConsumerRequest()
    : KinesisRequest(new DeregisterStreamConsumerRequestPrivate(KinesisRequest::DeregisterStreamConsumerAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterStreamConsumerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterStreamConsumerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterStreamConsumerRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterStreamConsumerResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DeregisterStreamConsumerRequestPrivate
 * \brief The DeregisterStreamConsumerRequestPrivate class provides private implementation for DeregisterStreamConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DeregisterStreamConsumerRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DeregisterStreamConsumerRequestPrivate::DeregisterStreamConsumerRequestPrivate(
    const KinesisRequest::Action action, DeregisterStreamConsumerRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterStreamConsumerRequest
 * class' copy constructor.
 */
DeregisterStreamConsumerRequestPrivate::DeregisterStreamConsumerRequestPrivate(
    const DeregisterStreamConsumerRequestPrivate &other, DeregisterStreamConsumerRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
