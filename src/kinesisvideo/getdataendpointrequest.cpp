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

#include "getdataendpointrequest.h"
#include "getdataendpointrequest_p.h"
#include "getdataendpointresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/**
 * @class  GetDataEndpointRequest
 *
 * @brief  Implements KinesisVideo GetDataEndpoint requests.
 *
 * @see    KinesisVideoClient::getDataEndpoint
 */

/**
 * @brief  Constructs a new GetDataEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDataEndpointRequest::GetDataEndpointRequest(const GetDataEndpointRequest &other)
    : KinesisVideoRequest(new GetDataEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDataEndpointRequest object.
 */
GetDataEndpointRequest::GetDataEndpointRequest()
    : KinesisVideoRequest(new GetDataEndpointRequestPrivate(KinesisVideoRequest::GetDataEndpointAction, this))
{

}

bool GetDataEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDataEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDataEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetDataEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDataEndpointRequestPrivate
 *
 * @brief  Private implementation for GetDataEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataEndpointRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public GetDataEndpointRequest instance.
 */
GetDataEndpointRequestPrivate::GetDataEndpointRequestPrivate(
    const KinesisVideoRequest::Action action, GetDataEndpointRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDataEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDataEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDataEndpointRequest instance.
 */
GetDataEndpointRequestPrivate::GetDataEndpointRequestPrivate(
    const GetDataEndpointRequestPrivate &other, GetDataEndpointRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
