/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "splitshardrequest.h"
#include "splitshardrequest_p.h"
#include "splitshardresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::SplitShardRequest
 *
 * \brief The SplitShardRequest class provides an interface for Kinesis SplitShard requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::splitShard
 */

/*!
 * @brief  Constructs a new SplitShardRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SplitShardRequest::SplitShardRequest(const SplitShardRequest &other)
    : KinesisRequest(new SplitShardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SplitShardRequest object.
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
 * @brief  Construct an SplitShardResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SplitShardResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * SplitShardRequest::response(QNetworkReply * const reply) const
{
    return new SplitShardResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SplitShardRequestPrivate
 *
 * @brief  Private implementation for SplitShardRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SplitShardRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public SplitShardRequest instance.
 */
SplitShardRequestPrivate::SplitShardRequestPrivate(
    const KinesisRequest::Action action, SplitShardRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SplitShardRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SplitShardRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SplitShardRequest instance.
 */
SplitShardRequestPrivate::SplitShardRequestPrivate(
    const SplitShardRequestPrivate &other, SplitShardRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
