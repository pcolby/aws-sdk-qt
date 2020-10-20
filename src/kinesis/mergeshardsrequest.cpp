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

#include "mergeshardsrequest.h"
#include "mergeshardsrequest_p.h"
#include "mergeshardsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::MergeShardsRequest
 * \brief The MergeShardsRequest class provides an interface for Kinesis MergeShards requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::mergeShards
 */

/*!
 * Constructs a copy of \a other.
 */
MergeShardsRequest::MergeShardsRequest(const MergeShardsRequest &other)
    : KinesisRequest(new MergeShardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MergeShardsRequest object.
 */
MergeShardsRequest::MergeShardsRequest()
    : KinesisRequest(new MergeShardsRequestPrivate(KinesisRequest::MergeShardsAction, this))
{

}

/*!
 * \reimp
 */
bool MergeShardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MergeShardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MergeShardsRequest::response(QNetworkReply * const reply) const
{
    return new MergeShardsResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::MergeShardsRequestPrivate
 * \brief The MergeShardsRequestPrivate class provides private implementation for MergeShardsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a MergeShardsRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
MergeShardsRequestPrivate::MergeShardsRequestPrivate(
    const KinesisRequest::Action action, MergeShardsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MergeShardsRequest
 * class' copy constructor.
 */
MergeShardsRequestPrivate::MergeShardsRequestPrivate(
    const MergeShardsRequestPrivate &other, MergeShardsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
