// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
