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

#include "removetagsfromstreamrequest.h"
#include "removetagsfromstreamrequest_p.h"
#include "removetagsfromstreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::RemoveTagsFromStreamRequest
 *
 * \brief The RemoveTagsFromStreamRequest class provides an interface for Kinesis RemoveTagsFromStream requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::removeTagsFromStream
 */

/*!
 * @brief  Constructs a new RemoveTagsFromStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsFromStreamRequest::RemoveTagsFromStreamRequest(const RemoveTagsFromStreamRequest &other)
    : KinesisRequest(new RemoveTagsFromStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RemoveTagsFromStreamRequest object.
 */
RemoveTagsFromStreamRequest::RemoveTagsFromStreamRequest()
    : KinesisRequest(new RemoveTagsFromStreamRequestPrivate(KinesisRequest::RemoveTagsFromStreamAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTagsFromStreamRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RemoveTagsFromStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsFromStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsFromStreamRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromStreamResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RemoveTagsFromStreamRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsFromStreamRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromStreamRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public RemoveTagsFromStreamRequest instance.
 */
RemoveTagsFromStreamRequestPrivate::RemoveTagsFromStreamRequestPrivate(
    const KinesisRequest::Action action, RemoveTagsFromStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsFromStreamRequest instance.
 */
RemoveTagsFromStreamRequestPrivate::RemoveTagsFromStreamRequestPrivate(
    const RemoveTagsFromStreamRequestPrivate &other, RemoveTagsFromStreamRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
