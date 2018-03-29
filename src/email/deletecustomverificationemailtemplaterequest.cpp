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

#include "deletecustomverificationemailtemplaterequest.h"
#include "deletecustomverificationemailtemplaterequest_p.h"
#include "deletecustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DeleteCustomVerificationEmailTemplateRequest
 *
 * @brief  Implements SES DeleteCustomVerificationEmailTemplate requests.
 *
 * @see    SESClient::deleteCustomVerificationEmailTemplate
 */

/**
 * @brief  Constructs a new DeleteCustomVerificationEmailTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCustomVerificationEmailTemplateRequest::DeleteCustomVerificationEmailTemplateRequest(const DeleteCustomVerificationEmailTemplateRequest &other)
    : SESRequest(new DeleteCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCustomVerificationEmailTemplateRequest object.
 */
DeleteCustomVerificationEmailTemplateRequest::DeleteCustomVerificationEmailTemplateRequest()
    : SESRequest(new DeleteCustomVerificationEmailTemplateRequestPrivate(SESRequest::DeleteCustomVerificationEmailTemplateAction, this))
{

}

bool DeleteCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCustomVerificationEmailTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCustomVerificationEmailTemplateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomVerificationEmailTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCustomVerificationEmailTemplateRequestPrivate
 *
 * @brief  Private implementation for DeleteCustomVerificationEmailTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomVerificationEmailTemplateRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteCustomVerificationEmailTemplateRequest instance.
 */
DeleteCustomVerificationEmailTemplateRequestPrivate::DeleteCustomVerificationEmailTemplateRequestPrivate(
    const SESRequest::Action action, DeleteCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomVerificationEmailTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCustomVerificationEmailTemplateRequest instance.
 */
DeleteCustomVerificationEmailTemplateRequestPrivate::DeleteCustomVerificationEmailTemplateRequestPrivate(
    const DeleteCustomVerificationEmailTemplateRequestPrivate &other, DeleteCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
