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
