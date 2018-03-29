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

#include "enabledirectoryrequest.h"
#include "enabledirectoryrequest_p.h"
#include "enabledirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  EnableDirectoryRequest
 *
 * @brief  Implements CloudDirectory EnableDirectory requests.
 *
 * @see    CloudDirectoryClient::enableDirectory
 */

/**
 * @brief  Constructs a new EnableDirectoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableDirectoryRequest::EnableDirectoryRequest(const EnableDirectoryRequest &other)
    : CloudDirectoryRequest(new EnableDirectoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableDirectoryRequest object.
 */
EnableDirectoryRequest::EnableDirectoryRequest()
    : CloudDirectoryRequest(new EnableDirectoryRequestPrivate(CloudDirectoryRequest::EnableDirectoryAction, this))
{

}

bool EnableDirectoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableDirectoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableDirectoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new EnableDirectoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableDirectoryRequestPrivate
 *
 * @brief  Private implementation for EnableDirectoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableDirectoryRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public EnableDirectoryRequest instance.
 */
EnableDirectoryRequestPrivate::EnableDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, EnableDirectoryRequest * const q)
    : EnableDirectoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableDirectoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableDirectoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableDirectoryRequest instance.
 */
EnableDirectoryRequestPrivate::EnableDirectoryRequestPrivate(
    const EnableDirectoryRequestPrivate &other, EnableDirectoryRequest * const q)
    : EnableDirectoryPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
