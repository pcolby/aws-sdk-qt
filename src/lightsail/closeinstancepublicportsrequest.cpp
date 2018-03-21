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

#include "closeinstancepublicportsrequest.h"
#include "closeinstancepublicportsrequest_p.h"
#include "closeinstancepublicportsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  CloseInstancePublicPortsRequest
 *
 * @brief  Implements Lightsail CloseInstancePublicPorts requests.
 *
 * @see    LightsailClient::closeInstancePublicPorts
 */

/**
 * @brief  Constructs a new CloseInstancePublicPortsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloseInstancePublicPortsRequest::CloseInstancePublicPortsRequest(const CloseInstancePublicPortsRequest &other)
    : LightsailRequest(new CloseInstancePublicPortsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CloseInstancePublicPortsRequest object.
 */
CloseInstancePublicPortsRequest::CloseInstancePublicPortsRequest()
    : LightsailRequest(new CloseInstancePublicPortsRequestPrivate(LightsailRequest::CloseInstancePublicPortsAction, this))
{

}

bool CloseInstancePublicPortsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CloseInstancePublicPortsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CloseInstancePublicPortsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * CloseInstancePublicPortsRequest::response(QNetworkReply * const reply) const
{
    return new CloseInstancePublicPortsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CloseInstancePublicPortsRequestPrivate
 *
 * @brief  Private implementation for CloseInstancePublicPortsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloseInstancePublicPortsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CloseInstancePublicPortsRequest instance.
 */
CloseInstancePublicPortsRequestPrivate::CloseInstancePublicPortsRequestPrivate(
    const LightsailRequest::Action action, CloseInstancePublicPortsRequest * const q)
    : CloseInstancePublicPortsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloseInstancePublicPortsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CloseInstancePublicPortsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloseInstancePublicPortsRequest instance.
 */
CloseInstancePublicPortsRequestPrivate::CloseInstancePublicPortsRequestPrivate(
    const CloseInstancePublicPortsRequestPrivate &other, CloseInstancePublicPortsRequest * const q)
    : CloseInstancePublicPortsPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
