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

#include "getcustomverificationemailtemplaterequest.h"
#include "getcustomverificationemailtemplaterequest_p.h"
#include "getcustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  GetCustomVerificationEmailTemplateRequest
 *
 * @brief  Implements SES GetCustomVerificationEmailTemplate requests.
 *
 * @see    SESClient::getCustomVerificationEmailTemplate
 */

/**
 * @brief  Constructs a new GetCustomVerificationEmailTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest(const GetCustomVerificationEmailTemplateRequest &other)
    : SESRequest(new GetCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCustomVerificationEmailTemplateRequest object.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest()
    : SESRequest(new GetCustomVerificationEmailTemplateRequestPrivate(SESRequest::GetCustomVerificationEmailTemplateAction, this))
{

}

bool GetCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCustomVerificationEmailTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCustomVerificationEmailTemplateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetCustomVerificationEmailTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCustomVerificationEmailTemplateRequestPrivate
 *
 * @brief  Private implementation for GetCustomVerificationEmailTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCustomVerificationEmailTemplateRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public GetCustomVerificationEmailTemplateRequest instance.
 */
GetCustomVerificationEmailTemplateRequestPrivate::GetCustomVerificationEmailTemplateRequestPrivate(
    const SESRequest::Action action, GetCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCustomVerificationEmailTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCustomVerificationEmailTemplateRequest instance.
 */
GetCustomVerificationEmailTemplateRequestPrivate::GetCustomVerificationEmailTemplateRequestPrivate(
    const GetCustomVerificationEmailTemplateRequestPrivate &other, GetCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
