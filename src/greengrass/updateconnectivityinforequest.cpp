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

#include "updateconnectivityinforequest.h"
#include "updateconnectivityinforequest_p.h"
#include "updateconnectivityinforesponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  UpdateConnectivityInfoRequest
 *
 * @brief  Implements Greengrass UpdateConnectivityInfo requests.
 *
 * @see    GreengrassClient::updateConnectivityInfo
 */

/**
 * @brief  Constructs a new UpdateConnectivityInfoRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConnectivityInfoRequest::UpdateConnectivityInfoRequest(const UpdateConnectivityInfoRequest &other)
    : GreengrassRequest(new UpdateConnectivityInfoRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConnectivityInfoRequest object.
 */
UpdateConnectivityInfoRequest::UpdateConnectivityInfoRequest()
    : GreengrassRequest(new UpdateConnectivityInfoRequestPrivate(GreengrassRequest::UpdateConnectivityInfoAction, this))
{

}

bool UpdateConnectivityInfoRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConnectivityInfoResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConnectivityInfoResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectivityInfoRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectivityInfoResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConnectivityInfoRequestPrivate
 *
 * @brief  Private implementation for UpdateConnectivityInfoRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConnectivityInfoRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateConnectivityInfoRequest instance.
 */
UpdateConnectivityInfoRequestPrivate::UpdateConnectivityInfoRequestPrivate(
    const GreengrassRequest::Action action, UpdateConnectivityInfoRequest * const q)
    : UpdateConnectivityInfoPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConnectivityInfoRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectivityInfoRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConnectivityInfoRequest instance.
 */
UpdateConnectivityInfoRequestPrivate::UpdateConnectivityInfoRequestPrivate(
    const UpdateConnectivityInfoRequestPrivate &other, UpdateConnectivityInfoRequest * const q)
    : UpdateConnectivityInfoPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
