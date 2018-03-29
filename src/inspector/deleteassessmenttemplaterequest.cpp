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

#include "deleteassessmenttemplaterequest.h"
#include "deleteassessmenttemplaterequest_p.h"
#include "deleteassessmenttemplateresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  DeleteAssessmentTemplateRequest
 *
 * @brief  Implements Inspector DeleteAssessmentTemplate requests.
 *
 * @see    InspectorClient::deleteAssessmentTemplate
 */

/**
 * @brief  Constructs a new DeleteAssessmentTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAssessmentTemplateRequest::DeleteAssessmentTemplateRequest(const DeleteAssessmentTemplateRequest &other)
    : InspectorRequest(new DeleteAssessmentTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAssessmentTemplateRequest object.
 */
DeleteAssessmentTemplateRequest::DeleteAssessmentTemplateRequest()
    : InspectorRequest(new DeleteAssessmentTemplateRequestPrivate(InspectorRequest::DeleteAssessmentTemplateAction, this))
{

}

bool DeleteAssessmentTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAssessmentTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAssessmentTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * DeleteAssessmentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssessmentTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAssessmentTemplateRequestPrivate
 *
 * @brief  Private implementation for DeleteAssessmentTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentTemplateRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DeleteAssessmentTemplateRequest instance.
 */
DeleteAssessmentTemplateRequestPrivate::DeleteAssessmentTemplateRequestPrivate(
    const InspectorRequest::Action action, DeleteAssessmentTemplateRequest * const q)
    : DeleteAssessmentTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssessmentTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAssessmentTemplateRequest instance.
 */
DeleteAssessmentTemplateRequestPrivate::DeleteAssessmentTemplateRequestPrivate(
    const DeleteAssessmentTemplateRequestPrivate &other, DeleteAssessmentTemplateRequest * const q)
    : DeleteAssessmentTemplatePrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
