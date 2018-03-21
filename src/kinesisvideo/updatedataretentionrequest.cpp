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

#include "updatedataretentionrequest.h"
#include "updatedataretentionrequest_p.h"
#include "updatedataretentionresponse.h"
#include "kinesisvideorequest_p.h"

namespace AWS {
namespace KinesisVideo {

/**
 * @class  UpdateDataRetentionRequest
 *
 * @brief  Implements KinesisVideo UpdateDataRetention requests.
 *
 * @see    KinesisVideoClient::updateDataRetention
 */

/**
 * @brief  Constructs a new UpdateDataRetentionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDataRetentionResponse::UpdateDataRetentionResponse(

/**
 * @brief  Constructs a new UpdateDataRetentionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDataRetentionRequest::UpdateDataRetentionRequest(const UpdateDataRetentionRequest &other)
    : KinesisVideoRequest(new UpdateDataRetentionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDataRetentionRequest object.
 */
UpdateDataRetentionRequest::UpdateDataRetentionRequest()
    : KinesisVideoRequest(new UpdateDataRetentionRequestPrivate(KinesisVideoRequest::UpdateDataRetentionAction, this))
{

}

bool UpdateDataRetentionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDataRetentionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDataRetentionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
AwsAbstractResponse * UpdateDataRetentionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataRetentionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDataRetentionRequestPrivate
 *
 * @brief  Private implementation for UpdateDataRetentionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDataRetentionRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public UpdateDataRetentionRequest instance.
 */
UpdateDataRetentionRequestPrivate::UpdateDataRetentionRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateDataRetentionRequest * const q)
    : UpdateDataRetentionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDataRetentionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataRetentionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDataRetentionRequest instance.
 */
UpdateDataRetentionRequestPrivate::UpdateDataRetentionRequestPrivate(
    const UpdateDataRetentionRequestPrivate &other, UpdateDataRetentionRequest * const q)
    : UpdateDataRetentionPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace AWS
