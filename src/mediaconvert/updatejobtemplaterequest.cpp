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

#include "updatejobtemplaterequest.h"
#include "updatejobtemplaterequest_p.h"
#include "updatejobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  UpdateJobTemplateRequest
 *
 * @brief  Implements MediaConvert UpdateJobTemplate requests.
 *
 * @see    MediaConvertClient::updateJobTemplate
 */

/**
 * @brief  Constructs a new UpdateJobTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateJobTemplateResponse::UpdateJobTemplateResponse(

/**
 * @brief  Constructs a new UpdateJobTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateJobTemplateRequest::UpdateJobTemplateRequest(const UpdateJobTemplateRequest &other)
    : MediaConvertRequest(new UpdateJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateJobTemplateRequest object.
 */
UpdateJobTemplateRequest::UpdateJobTemplateRequest()
    : MediaConvertRequest(new UpdateJobTemplateRequestPrivate(MediaConvertRequest::UpdateJobTemplateAction, this))
{

}

bool UpdateJobTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateJobTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateJobTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * UpdateJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateJobTemplateRequestPrivate
 *
 * @brief  Private implementation for UpdateJobTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobTemplateRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public UpdateJobTemplateRequest instance.
 */
UpdateJobTemplateRequestPrivate::UpdateJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, UpdateJobTemplateRequest * const q)
    : UpdateJobTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateJobTemplateRequest instance.
 */
UpdateJobTemplateRequestPrivate::UpdateJobTemplateRequestPrivate(
    const UpdateJobTemplateRequestPrivate &other, UpdateJobTemplateRequest * const q)
    : UpdateJobTemplatePrivate(other, q)
{

}
