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

#include "attachtypedlinkrequest.h"
#include "attachtypedlinkrequest_p.h"
#include "attachtypedlinkresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  AttachTypedLinkRequest
 *
 * @brief  Implements CloudDirectory AttachTypedLink requests.
 *
 * @see    CloudDirectoryClient::attachTypedLink
 */

/**
 * @brief  Constructs a new AttachTypedLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachTypedLinkRequest::AttachTypedLinkRequest(const AttachTypedLinkRequest &other)
    : CloudDirectoryRequest(new AttachTypedLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachTypedLinkRequest object.
 */
AttachTypedLinkRequest::AttachTypedLinkRequest()
    : CloudDirectoryRequest(new AttachTypedLinkRequestPrivate(CloudDirectoryRequest::AttachTypedLinkAction, this))
{

}

bool AttachTypedLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachTypedLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachTypedLinkResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachTypedLinkRequest::response(QNetworkReply * const reply) const
{
    return new AttachTypedLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachTypedLinkRequestPrivate
 *
 * @brief  Private implementation for AttachTypedLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachTypedLinkRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public AttachTypedLinkRequest instance.
 */
AttachTypedLinkRequestPrivate::AttachTypedLinkRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachTypedLinkRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachTypedLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachTypedLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachTypedLinkRequest instance.
 */
AttachTypedLinkRequestPrivate::AttachTypedLinkRequestPrivate(
    const AttachTypedLinkRequestPrivate &other, AttachTypedLinkRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
