/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatepipelinenotificationsrequest.h"
#include "updatepipelinenotificationsrequest_p.h"
#include "updatepipelinenotificationsresponse.h"
#include "elastictranscoderrequest_p.h"

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  UpdatePipelineNotificationsRequest
 *
 * @brief  Implements ElasticTranscoder UpdatePipelineNotifications requests.
 *
 * @see    ElasticTranscoderClient::updatePipelineNotifications
 */

/**
 * @brief  Constructs a new UpdatePipelineNotificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePipelineNotificationsRequest::UpdatePipelineNotificationsRequest(const UpdatePipelineNotificationsRequest &other)
    : ElasticTranscoderRequest(new UpdatePipelineNotificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePipelineNotificationsRequest object.
 */
UpdatePipelineNotificationsRequest::UpdatePipelineNotificationsRequest()
    : ElasticTranscoderRequest(new UpdatePipelineNotificationsRequestPrivate(ElasticTranscoderRequest::UpdatePipelineNotificationsAction, this))
{

}

bool UpdatePipelineNotificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePipelineNotificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePipelineNotificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * UpdatePipelineNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineNotificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePipelineNotificationsRequestPrivate
 *
 * @brief  Private implementation for UpdatePipelineNotificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineNotificationsRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public UpdatePipelineNotificationsRequest instance.
 */
UpdatePipelineNotificationsRequestPrivate::UpdatePipelineNotificationsRequestPrivate(
    const ElasticTranscoderRequest::Action action, UpdatePipelineNotificationsRequest * const q)
    : UpdatePipelineNotificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineNotificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineNotificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePipelineNotificationsRequest instance.
 */
UpdatePipelineNotificationsRequestPrivate::UpdatePipelineNotificationsRequestPrivate(
    const UpdatePipelineNotificationsRequestPrivate &other, UpdatePipelineNotificationsRequest * const q)
    : UpdatePipelineNotificationsPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace AWS
