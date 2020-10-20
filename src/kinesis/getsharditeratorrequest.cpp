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

#include "getsharditeratorrequest.h"
#include "getsharditeratorrequest_p.h"
#include "getsharditeratorresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::GetShardIteratorRequest
 * \brief The GetShardIteratorRequest class provides an interface for Kinesis GetShardIterator requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::getShardIterator
 */

/*!
 * Constructs a copy of \a other.
 */
GetShardIteratorRequest::GetShardIteratorRequest(const GetShardIteratorRequest &other)
    : KinesisRequest(new GetShardIteratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetShardIteratorRequest object.
 */
GetShardIteratorRequest::GetShardIteratorRequest()
    : KinesisRequest(new GetShardIteratorRequestPrivate(KinesisRequest::GetShardIteratorAction, this))
{

}

/*!
 * \reimp
 */
bool GetShardIteratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetShardIteratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetShardIteratorRequest::response(QNetworkReply * const reply) const
{
    return new GetShardIteratorResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::GetShardIteratorRequestPrivate
 * \brief The GetShardIteratorRequestPrivate class provides private implementation for GetShardIteratorRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a GetShardIteratorRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
GetShardIteratorRequestPrivate::GetShardIteratorRequestPrivate(
    const KinesisRequest::Action action, GetShardIteratorRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetShardIteratorRequest
 * class' copy constructor.
 */
GetShardIteratorRequestPrivate::GetShardIteratorRequestPrivate(
    const GetShardIteratorRequestPrivate &other, GetShardIteratorRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
