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
