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

#include "disabledirectoryrequest.h"
#include "disabledirectoryrequest_p.h"
#include "disabledirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DisableDirectoryRequest
 *
 * @brief  Implements CloudDirectory DisableDirectory requests.
 *
 * @see    CloudDirectoryClient::disableDirectory
 */

/**
 * @brief  Constructs a new DisableDirectoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableDirectoryRequest::DisableDirectoryRequest(const DisableDirectoryRequest &other)
    : CloudDirectoryRequest(new DisableDirectoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableDirectoryRequest object.
 */
DisableDirectoryRequest::DisableDirectoryRequest()
    : CloudDirectoryRequest(new DisableDirectoryRequestPrivate(CloudDirectoryRequest::DisableDirectoryAction, this))
{

}

bool DisableDirectoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableDirectoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableDirectoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * DisableDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new DisableDirectoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableDirectoryRequestPrivate
 *
 * @brief  Private implementation for DisableDirectoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableDirectoryRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DisableDirectoryRequest instance.
 */
DisableDirectoryRequestPrivate::DisableDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, DisableDirectoryRequest * const q)
    : DisableDirectoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableDirectoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableDirectoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableDirectoryRequest instance.
 */
DisableDirectoryRequestPrivate::DisableDirectoryRequestPrivate(
    const DisableDirectoryRequestPrivate &other, DisableDirectoryRequest * const q)
    : DisableDirectoryPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
