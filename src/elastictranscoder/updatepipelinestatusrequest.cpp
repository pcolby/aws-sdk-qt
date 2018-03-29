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

#include "updatepipelinestatusrequest.h"
#include "updatepipelinestatusrequest_p.h"
#include "updatepipelinestatusresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  UpdatePipelineStatusRequest
 *
 * @brief  Implements ElasticTranscoder UpdatePipelineStatus requests.
 *
 * @see    ElasticTranscoderClient::updatePipelineStatus
 */

/**
 * @brief  Constructs a new UpdatePipelineStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePipelineStatusRequest::UpdatePipelineStatusRequest(const UpdatePipelineStatusRequest &other)
    : ElasticTranscoderRequest(new UpdatePipelineStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePipelineStatusRequest object.
 */
UpdatePipelineStatusRequest::UpdatePipelineStatusRequest()
    : ElasticTranscoderRequest(new UpdatePipelineStatusRequestPrivate(ElasticTranscoderRequest::UpdatePipelineStatusAction, this))
{

}

bool UpdatePipelineStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePipelineStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePipelineStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePipelineStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePipelineStatusRequestPrivate
 *
 * @brief  Private implementation for UpdatePipelineStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineStatusRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public UpdatePipelineStatusRequest instance.
 */
UpdatePipelineStatusRequestPrivate::UpdatePipelineStatusRequestPrivate(
    const ElasticTranscoderRequest::Action action, UpdatePipelineStatusRequest * const q)
    : UpdatePipelineStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePipelineStatusRequest instance.
 */
UpdatePipelineStatusRequestPrivate::UpdatePipelineStatusRequestPrivate(
    const UpdatePipelineStatusRequestPrivate &other, UpdatePipelineStatusRequest * const q)
    : UpdatePipelineStatusPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
