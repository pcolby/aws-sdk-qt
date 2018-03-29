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

#include "enablessorequest.h"
#include "enablessorequest_p.h"
#include "enablessoresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  EnableSsoRequest
 *
 * @brief  Implements DirectoryService EnableSso requests.
 *
 * @see    DirectoryServiceClient::enableSso
 */

/**
 * @brief  Constructs a new EnableSsoRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableSsoRequest::EnableSsoRequest(const EnableSsoRequest &other)
    : DirectoryServiceRequest(new EnableSsoRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableSsoRequest object.
 */
EnableSsoRequest::EnableSsoRequest()
    : DirectoryServiceRequest(new EnableSsoRequestPrivate(DirectoryServiceRequest::EnableSsoAction, this))
{

}

bool EnableSsoRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableSsoResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableSsoResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * EnableSsoRequest::response(QNetworkReply * const reply) const
{
    return new EnableSsoResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableSsoRequestPrivate
 *
 * @brief  Private implementation for EnableSsoRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableSsoRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public EnableSsoRequest instance.
 */
EnableSsoRequestPrivate::EnableSsoRequestPrivate(
    const DirectoryServiceRequest::Action action, EnableSsoRequest * const q)
    : EnableSsoPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableSsoRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableSsoRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableSsoRequest instance.
 */
EnableSsoRequestPrivate::EnableSsoRequestPrivate(
    const EnableSsoRequestPrivate &other, EnableSsoRequest * const q)
    : EnableSsoPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
