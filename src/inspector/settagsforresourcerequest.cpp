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

#include "settagsforresourcerequest.h"
#include "settagsforresourcerequest_p.h"
#include "settagsforresourceresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  SetTagsForResourceRequest
 *
 * @brief  Implements Inspector SetTagsForResource requests.
 *
 * @see    InspectorClient::setTagsForResource
 */

/**
 * @brief  Constructs a new SetTagsForResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetTagsForResourceRequest::SetTagsForResourceRequest(const SetTagsForResourceRequest &other)
    : InspectorRequest(new SetTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetTagsForResourceRequest object.
 */
SetTagsForResourceRequest::SetTagsForResourceRequest()
    : InspectorRequest(new SetTagsForResourceRequestPrivate(InspectorRequest::SetTagsForResourceAction, this))
{

}

bool SetTagsForResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetTagsForResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetTagsForResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * SetTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new SetTagsForResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetTagsForResourceRequestPrivate
 *
 * @brief  Private implementation for SetTagsForResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTagsForResourceRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public SetTagsForResourceRequest instance.
 */
SetTagsForResourceRequestPrivate::SetTagsForResourceRequestPrivate(
    const InspectorRequest::Action action, SetTagsForResourceRequest * const q)
    : SetTagsForResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetTagsForResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetTagsForResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetTagsForResourceRequest instance.
 */
SetTagsForResourceRequestPrivate::SetTagsForResourceRequestPrivate(
    const SetTagsForResourceRequestPrivate &other, SetTagsForResourceRequest * const q)
    : SetTagsForResourcePrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
