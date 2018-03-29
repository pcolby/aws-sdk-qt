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

#include "updatesamlproviderrequest.h"
#include "updatesamlproviderrequest_p.h"
#include "updatesamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateSAMLProviderRequest
 *
 * @brief  Implements IAM UpdateSAMLProvider requests.
 *
 * @see    IAMClient::updateSAMLProvider
 */

/**
 * @brief  Constructs a new UpdateSAMLProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSAMLProviderRequest::UpdateSAMLProviderRequest(const UpdateSAMLProviderRequest &other)
    : IAMRequest(new UpdateSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSAMLProviderRequest object.
 */
UpdateSAMLProviderRequest::UpdateSAMLProviderRequest()
    : IAMRequest(new UpdateSAMLProviderRequestPrivate(IAMRequest::UpdateSAMLProviderAction, this))
{

}

bool UpdateSAMLProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSAMLProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSAMLProviderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSAMLProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSAMLProviderRequestPrivate
 *
 * @brief  Private implementation for UpdateSAMLProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSAMLProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateSAMLProviderRequest instance.
 */
UpdateSAMLProviderRequestPrivate::UpdateSAMLProviderRequestPrivate(
    const IAMRequest::Action action, UpdateSAMLProviderRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSAMLProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSAMLProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSAMLProviderRequest instance.
 */
UpdateSAMLProviderRequestPrivate::UpdateSAMLProviderRequestPrivate(
    const UpdateSAMLProviderRequestPrivate &other, UpdateSAMLProviderRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
