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

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  TagResourceRequest
 *
 * @brief  Implements SecretsManager TagResource requests.
 *
 * @see    SecretsManagerClient::tagResource
 */

/**
 * @brief  Constructs a new TagResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : SecretsManagerRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : SecretsManagerRequest(new TagResourceRequestPrivate(SecretsManagerRequest::TagResourceAction, this))
{

}

bool TagResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TagResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TagResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TagResourceRequestPrivate
 *
 * @brief  Private implementation for TagResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagResourceRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public TagResourceRequest instance.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const SecretsManagerRequest::Action action, TagResourceRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TagResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TagResourceRequest instance.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
