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

#include "previewagentsrequest.h"
#include "previewagentsrequest_p.h"
#include "previewagentsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  PreviewAgentsRequest
 *
 * @brief  Implements Inspector PreviewAgents requests.
 *
 * @see    InspectorClient::previewAgents
 */

/**
 * @brief  Constructs a new PreviewAgentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PreviewAgentsRequest::PreviewAgentsRequest(const PreviewAgentsRequest &other)
    : InspectorRequest(new PreviewAgentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PreviewAgentsRequest object.
 */
PreviewAgentsRequest::PreviewAgentsRequest()
    : InspectorRequest(new PreviewAgentsRequestPrivate(InspectorRequest::PreviewAgentsAction, this))
{

}

bool PreviewAgentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PreviewAgentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PreviewAgentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * PreviewAgentsRequest::response(QNetworkReply * const reply) const
{
    return new PreviewAgentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PreviewAgentsRequestPrivate
 *
 * @brief  Private implementation for PreviewAgentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PreviewAgentsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public PreviewAgentsRequest instance.
 */
PreviewAgentsRequestPrivate::PreviewAgentsRequestPrivate(
    const InspectorRequest::Action action, PreviewAgentsRequest * const q)
    : PreviewAgentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PreviewAgentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PreviewAgentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PreviewAgentsRequest instance.
 */
PreviewAgentsRequestPrivate::PreviewAgentsRequestPrivate(
    const PreviewAgentsRequestPrivate &other, PreviewAgentsRequest * const q)
    : PreviewAgentsPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
