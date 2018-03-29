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

#include "updatecustomverificationemailtemplaterequest.h"
#include "updatecustomverificationemailtemplaterequest_p.h"
#include "updatecustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  UpdateCustomVerificationEmailTemplateRequest
 *
 * @brief  Implements SES UpdateCustomVerificationEmailTemplate requests.
 *
 * @see    SESClient::updateCustomVerificationEmailTemplate
 */

/**
 * @brief  Constructs a new UpdateCustomVerificationEmailTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCustomVerificationEmailTemplateRequest::UpdateCustomVerificationEmailTemplateRequest(const UpdateCustomVerificationEmailTemplateRequest &other)
    : SESRequest(new UpdateCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCustomVerificationEmailTemplateRequest object.
 */
UpdateCustomVerificationEmailTemplateRequest::UpdateCustomVerificationEmailTemplateRequest()
    : SESRequest(new UpdateCustomVerificationEmailTemplateRequestPrivate(SESRequest::UpdateCustomVerificationEmailTemplateAction, this))
{

}

bool UpdateCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCustomVerificationEmailTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCustomVerificationEmailTemplateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCustomVerificationEmailTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCustomVerificationEmailTemplateRequestPrivate
 *
 * @brief  Private implementation for UpdateCustomVerificationEmailTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCustomVerificationEmailTemplateRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateCustomVerificationEmailTemplateRequest instance.
 */
UpdateCustomVerificationEmailTemplateRequestPrivate::UpdateCustomVerificationEmailTemplateRequestPrivate(
    const SESRequest::Action action, UpdateCustomVerificationEmailTemplateRequest * const q)
    : UpdateCustomVerificationEmailTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCustomVerificationEmailTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCustomVerificationEmailTemplateRequest instance.
 */
UpdateCustomVerificationEmailTemplateRequestPrivate::UpdateCustomVerificationEmailTemplateRequestPrivate(
    const UpdateCustomVerificationEmailTemplateRequestPrivate &other, UpdateCustomVerificationEmailTemplateRequest * const q)
    : UpdateCustomVerificationEmailTemplatePrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
