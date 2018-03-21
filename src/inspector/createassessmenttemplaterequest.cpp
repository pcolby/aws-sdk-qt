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

#include "createassessmenttemplaterequest.h"
#include "createassessmenttemplaterequest_p.h"
#include "createassessmenttemplateresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  CreateAssessmentTemplateRequest
 *
 * @brief  Implements Inspector CreateAssessmentTemplate requests.
 *
 * @see    InspectorClient::createAssessmentTemplate
 */

/**
 * @brief  Constructs a new CreateAssessmentTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAssessmentTemplateResponse::CreateAssessmentTemplateResponse(

/**
 * @brief  Constructs a new CreateAssessmentTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAssessmentTemplateRequest::CreateAssessmentTemplateRequest(const CreateAssessmentTemplateRequest &other)
    : InspectorRequest(new CreateAssessmentTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAssessmentTemplateRequest object.
 */
CreateAssessmentTemplateRequest::CreateAssessmentTemplateRequest()
    : InspectorRequest(new CreateAssessmentTemplateRequestPrivate(InspectorRequest::CreateAssessmentTemplateAction, this))
{

}

bool CreateAssessmentTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAssessmentTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAssessmentTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * CreateAssessmentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssessmentTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAssessmentTemplateRequestPrivate
 *
 * @brief  Private implementation for CreateAssessmentTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssessmentTemplateRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public CreateAssessmentTemplateRequest instance.
 */
CreateAssessmentTemplateRequestPrivate::CreateAssessmentTemplateRequestPrivate(
    const InspectorRequest::Action action, CreateAssessmentTemplateRequest * const q)
    : CreateAssessmentTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssessmentTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAssessmentTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAssessmentTemplateRequest instance.
 */
CreateAssessmentTemplateRequestPrivate::CreateAssessmentTemplateRequestPrivate(
    const CreateAssessmentTemplateRequestPrivate &other, CreateAssessmentTemplateRequest * const q)
    : CreateAssessmentTemplatePrivate(other, q)
{

}
