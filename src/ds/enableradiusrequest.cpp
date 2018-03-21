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

#include "enableradiusrequest.h"
#include "enableradiusrequest_p.h"
#include "enableradiusresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  EnableRadiusRequest
 *
 * @brief  Implements DirectoryService EnableRadius requests.
 *
 * @see    DirectoryServiceClient::enableRadius
 */

/**
 * @brief  Constructs a new EnableRadiusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableRadiusResponse::EnableRadiusResponse(

/**
 * @brief  Constructs a new EnableRadiusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableRadiusRequest::EnableRadiusRequest(const EnableRadiusRequest &other)
    : DirectoryServiceRequest(new EnableRadiusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableRadiusRequest object.
 */
EnableRadiusRequest::EnableRadiusRequest()
    : DirectoryServiceRequest(new EnableRadiusRequestPrivate(DirectoryServiceRequest::EnableRadiusAction, this))
{

}

bool EnableRadiusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableRadiusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableRadiusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * EnableRadiusRequest::response(QNetworkReply * const reply) const
{
    return new EnableRadiusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableRadiusRequestPrivate
 *
 * @brief  Private implementation for EnableRadiusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableRadiusRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public EnableRadiusRequest instance.
 */
EnableRadiusRequestPrivate::EnableRadiusRequestPrivate(
    const DirectoryServiceRequest::Action action, EnableRadiusRequest * const q)
    : EnableRadiusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableRadiusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableRadiusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableRadiusRequest instance.
 */
EnableRadiusRequestPrivate::EnableRadiusRequestPrivate(
    const EnableRadiusRequestPrivate &other, EnableRadiusRequest * const q)
    : EnableRadiusPrivate(other, q)
{

}
