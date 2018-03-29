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

#include "validatetemplaterequest.h"
#include "validatetemplaterequest_p.h"
#include "validatetemplateresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ValidateTemplateRequest
 *
 * @brief  Implements CloudFormation ValidateTemplate requests.
 *
 * @see    CloudFormationClient::validateTemplate
 */

/**
 * @brief  Constructs a new ValidateTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ValidateTemplateRequest::ValidateTemplateRequest(const ValidateTemplateRequest &other)
    : CloudFormationRequest(new ValidateTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ValidateTemplateRequest object.
 */
ValidateTemplateRequest::ValidateTemplateRequest()
    : CloudFormationRequest(new ValidateTemplateRequestPrivate(CloudFormationRequest::ValidateTemplateAction, this))
{

}

bool ValidateTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ValidateTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ValidateTemplateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * ValidateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new ValidateTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ValidateTemplateRequestPrivate
 *
 * @brief  Private implementation for ValidateTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ValidateTemplateRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ValidateTemplateRequest instance.
 */
ValidateTemplateRequestPrivate::ValidateTemplateRequestPrivate(
    const CloudFormationRequest::Action action, ValidateTemplateRequest * const q)
    : ValidateTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ValidateTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ValidateTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ValidateTemplateRequest instance.
 */
ValidateTemplateRequestPrivate::ValidateTemplateRequestPrivate(
    const ValidateTemplateRequestPrivate &other, ValidateTemplateRequest * const q)
    : ValidateTemplatePrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
