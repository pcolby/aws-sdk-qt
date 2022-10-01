// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
