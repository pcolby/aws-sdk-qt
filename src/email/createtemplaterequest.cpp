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

#include "createtemplaterequest.h"
#include "createtemplaterequest_p.h"
#include "createtemplateresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  CreateTemplateRequest
 *
 * @brief  Implements SES CreateTemplate requests.
 *
 * @see    SESClient::createTemplate
 */

/**
 * @brief  Constructs a new CreateTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTemplateResponse::CreateTemplateResponse(

/**
 * @brief  Constructs a new CreateTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTemplateRequest::CreateTemplateRequest(const CreateTemplateRequest &other)
    : SESRequest(new CreateTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTemplateRequest object.
 */
CreateTemplateRequest::CreateTemplateRequest()
    : SESRequest(new CreateTemplateRequestPrivate(SESRequest::CreateTemplateAction, this))
{

}

bool CreateTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * CreateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTemplateRequestPrivate
 *
 * @brief  Private implementation for CreateTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTemplateRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public CreateTemplateRequest instance.
 */
CreateTemplateRequestPrivate::CreateTemplateRequestPrivate(
    const SESRequest::Action action, CreateTemplateRequest * const q)
    : CreateTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTemplateRequest instance.
 */
CreateTemplateRequestPrivate::CreateTemplateRequestPrivate(
    const CreateTemplateRequestPrivate &other, CreateTemplateRequest * const q)
    : CreateTemplatePrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
