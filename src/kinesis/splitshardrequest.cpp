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

#include "splitshardrequest.h"
#include "splitshardrequest_p.h"
#include "splitshardresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::SplitShardRequest
 * \brief The SplitShardRequest class provides an interface for Kinesis SplitShard requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::splitShard
 */

/*!
 * Constructs a copy of \a other.
 */
SplitShardRequest::SplitShardRequest(const SplitShardRequest &other)
    : KinesisRequest(new SplitShardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SplitShardRequest object.
 */
SplitShardRequest::SplitShardRequest()
    : KinesisRequest(new SplitShardRequestPrivate(KinesisRequest::SplitShardAction, this))
{

}

/*!
 * \reimp
 */
bool SplitShardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SplitShardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SplitShardRequest::response(QNetworkReply * const reply) const
{
    return new SplitShardResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::SplitShardRequestPrivate
 * \brief The SplitShardRequestPrivate class provides private implementation for SplitShardRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a SplitShardRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
SplitShardRequestPrivate::SplitShardRequestPrivate(
    const KinesisRequest::Action action, SplitShardRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SplitShardRequest
 * class' copy constructor.
 */
SplitShardRequestPrivate::SplitShardRequestPrivate(
    const SplitShardRequestPrivate &other, SplitShardRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
