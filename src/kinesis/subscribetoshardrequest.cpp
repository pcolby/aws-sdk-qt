// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "subscribetoshardrequest.h"
#include "subscribetoshardrequest_p.h"
#include "subscribetoshardresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::SubscribeToShardRequest
 * \brief The SubscribeToShardRequest class provides an interface for Kinesis SubscribeToShard requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::subscribeToShard
 */

/*!
 * Constructs a copy of \a other.
 */
SubscribeToShardRequest::SubscribeToShardRequest(const SubscribeToShardRequest &other)
    : KinesisRequest(new SubscribeToShardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SubscribeToShardRequest object.
 */
SubscribeToShardRequest::SubscribeToShardRequest()
    : KinesisRequest(new SubscribeToShardRequestPrivate(KinesisRequest::SubscribeToShardAction, this))
{

}

/*!
 * \reimp
 */
bool SubscribeToShardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SubscribeToShardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SubscribeToShardRequest::response(QNetworkReply * const reply) const
{
    return new SubscribeToShardResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::SubscribeToShardRequestPrivate
 * \brief The SubscribeToShardRequestPrivate class provides private implementation for SubscribeToShardRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a SubscribeToShardRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
SubscribeToShardRequestPrivate::SubscribeToShardRequestPrivate(
    const KinesisRequest::Action action, SubscribeToShardRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SubscribeToShardRequest
 * class' copy constructor.
 */
SubscribeToShardRequestPrivate::SubscribeToShardRequestPrivate(
    const SubscribeToShardRequestPrivate &other, SubscribeToShardRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
