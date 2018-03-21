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

#include "updatetemplaterequest.h"
#include "updatetemplaterequest_p.h"
#include "updatetemplateresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  UpdateTemplateRequest
 *
 * @brief  Implements SES UpdateTemplate requests.
 *
 * @see    SESClient::updateTemplate
 */

/**
 * @brief  Constructs a new UpdateTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTemplateResponse::UpdateTemplateResponse(

/**
 * @brief  Constructs a new UpdateTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTemplateRequest::UpdateTemplateRequest(const UpdateTemplateRequest &other)
    : SESRequest(new UpdateTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTemplateRequest object.
 */
UpdateTemplateRequest::UpdateTemplateRequest()
    : SESRequest(new UpdateTemplateRequestPrivate(SESRequest::UpdateTemplateAction, this))
{

}

bool UpdateTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * UpdateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTemplateRequestPrivate
 *
 * @brief  Private implementation for UpdateTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTemplateRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateTemplateRequest instance.
 */
UpdateTemplateRequestPrivate::UpdateTemplateRequestPrivate(
    const SESRequest::Action action, UpdateTemplateRequest * const q)
    : UpdateTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTemplateRequest instance.
 */
UpdateTemplateRequestPrivate::UpdateTemplateRequestPrivate(
    const UpdateTemplateRequestPrivate &other, UpdateTemplateRequest * const q)
    : UpdateTemplatePrivate(other, q)
{

}
