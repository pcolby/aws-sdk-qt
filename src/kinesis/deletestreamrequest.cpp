/*
    Copyright 2013-2018 Paul Colby

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

#include "deletestreamrequest.h"
#include "deletestreamrequest_p.h"
#include "deletestreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DeleteStreamRequest
 * \brief The DeleteStreamRequest class provides an interface for Kinesis DeleteStream requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::deleteStream
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamRequest::DeleteStreamRequest(const DeleteStreamRequest &other)
    : KinesisRequest(new DeleteStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamRequest object.
 */
DeleteStreamRequest::DeleteStreamRequest()
    : KinesisRequest(new DeleteStreamRequestPrivate(KinesisRequest::DeleteStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DeleteStreamRequestPrivate
 * \brief The DeleteStreamRequestPrivate class provides private implementation for DeleteStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DeleteStreamRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const KinesisRequest::Action action, DeleteStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamRequest
 * class' copy constructor.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const DeleteStreamRequestPrivate &other, DeleteStreamRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
