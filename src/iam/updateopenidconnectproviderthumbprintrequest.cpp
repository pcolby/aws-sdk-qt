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

#include "updateopenidconnectproviderthumbprintrequest.h"
#include "updateopenidconnectproviderthumbprintrequest_p.h"
#include "updateopenidconnectproviderthumbprintresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateOpenIDConnectProviderThumbprintRequest
 *
 * @brief  Implements IAM UpdateOpenIDConnectProviderThumbprint requests.
 *
 * @see    IAMClient::updateOpenIDConnectProviderThumbprint
 */

/**
 * @brief  Constructs a new UpdateOpenIDConnectProviderThumbprintRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateOpenIDConnectProviderThumbprintRequest::UpdateOpenIDConnectProviderThumbprintRequest(const UpdateOpenIDConnectProviderThumbprintRequest &other)
    : IAMRequest(new UpdateOpenIDConnectProviderThumbprintRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateOpenIDConnectProviderThumbprintRequest object.
 */
UpdateOpenIDConnectProviderThumbprintRequest::UpdateOpenIDConnectProviderThumbprintRequest()
    : IAMRequest(new UpdateOpenIDConnectProviderThumbprintRequestPrivate(IAMRequest::UpdateOpenIDConnectProviderThumbprintAction, this))
{

}

bool UpdateOpenIDConnectProviderThumbprintRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateOpenIDConnectProviderThumbprintResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateOpenIDConnectProviderThumbprintResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOpenIDConnectProviderThumbprintRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOpenIDConnectProviderThumbprintResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateOpenIDConnectProviderThumbprintRequestPrivate
 *
 * @brief  Private implementation for UpdateOpenIDConnectProviderThumbprintRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOpenIDConnectProviderThumbprintRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateOpenIDConnectProviderThumbprintRequest instance.
 */
UpdateOpenIDConnectProviderThumbprintRequestPrivate::UpdateOpenIDConnectProviderThumbprintRequestPrivate(
    const IAMRequest::Action action, UpdateOpenIDConnectProviderThumbprintRequest * const q)
    : UpdateOpenIDConnectProviderThumbprintPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOpenIDConnectProviderThumbprintRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateOpenIDConnectProviderThumbprintRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateOpenIDConnectProviderThumbprintRequest instance.
 */
UpdateOpenIDConnectProviderThumbprintRequestPrivate::UpdateOpenIDConnectProviderThumbprintRequestPrivate(
    const UpdateOpenIDConnectProviderThumbprintRequestPrivate &other, UpdateOpenIDConnectProviderThumbprintRequest * const q)
    : UpdateOpenIDConnectProviderThumbprintPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
