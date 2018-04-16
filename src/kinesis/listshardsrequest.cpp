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

#include "listshardsrequest.h"
#include "listshardsrequest_p.h"
#include "listshardsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListShardsRequest
 *
 * \brief The ListShardsRequest class encapsulates Kinesis ListShards requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listShards
 */

/*!
 * @brief  Constructs a new ListShardsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListShardsRequest::ListShardsRequest(const ListShardsRequest &other)
    : KinesisRequest(new ListShardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListShardsRequest object.
 */
ListShardsRequest::ListShardsRequest()
    : KinesisRequest(new ListShardsRequestPrivate(KinesisRequest::ListShardsAction, this))
{

}

/*!
 * \reimp
 */
bool ListShardsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListShardsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListShardsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * ListShardsRequest::response(QNetworkReply * const reply) const
{
    return new ListShardsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListShardsRequestPrivate
 *
 * @brief  Private implementation for ListShardsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListShardsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public ListShardsRequest instance.
 */
ListShardsRequestPrivate::ListShardsRequestPrivate(
    const KinesisRequest::Action action, ListShardsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListShardsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListShardsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListShardsRequest instance.
 */
ListShardsRequestPrivate::ListShardsRequestPrivate(
    const ListShardsRequestPrivate &other, ListShardsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
