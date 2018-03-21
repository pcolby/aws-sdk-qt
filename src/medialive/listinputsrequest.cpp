/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listinputsrequest.h"
#include "listinputsrequest_p.h"
#include "listinputsresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  ListInputsRequest
 *
 * @brief  Implements MediaLive ListInputs requests.
 *
 * @see    MediaLiveClient::listInputs
 */

/**
 * @brief  Constructs a new ListInputsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInputsResponse::ListInputsResponse(

/**
 * @brief  Constructs a new ListInputsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInputsRequest::ListInputsRequest(const ListInputsRequest &other)
    : MediaLiveRequest(new ListInputsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInputsRequest object.
 */
ListInputsRequest::ListInputsRequest()
    : MediaLiveRequest(new ListInputsRequestPrivate(MediaLiveRequest::ListInputsAction, this))
{

}

bool ListInputsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInputsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInputsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * ListInputsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInputsRequestPrivate
 *
 * @brief  Private implementation for ListInputsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInputsRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public ListInputsRequest instance.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const MediaLiveRequest::Action action, ListInputsRequest * const q)
    : ListInputsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInputsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInputsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInputsRequest instance.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const ListInputsRequestPrivate &other, ListInputsRequest * const q)
    : ListInputsPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
