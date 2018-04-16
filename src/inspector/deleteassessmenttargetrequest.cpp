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

#include "deleteassessmenttargetrequest.h"
#include "deleteassessmenttargetrequest_p.h"
#include "deleteassessmenttargetresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentTargetRequest
 *
 * \brief The DeleteAssessmentTargetRequest class encapsulates Inspector DeleteAssessmentTarget requests.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentTarget
 */

/*!
 * @brief  Constructs a new DeleteAssessmentTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAssessmentTargetRequest::DeleteAssessmentTargetRequest(const DeleteAssessmentTargetRequest &other)
    : InspectorRequest(new DeleteAssessmentTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteAssessmentTargetRequest object.
 */
DeleteAssessmentTargetRequest::DeleteAssessmentTargetRequest()
    : InspectorRequest(new DeleteAssessmentTargetRequestPrivate(InspectorRequest::DeleteAssessmentTargetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssessmentTargetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteAssessmentTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAssessmentTargetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssessmentTargetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssessmentTargetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteAssessmentTargetRequestPrivate
 *
 * @brief  Private implementation for DeleteAssessmentTargetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentTargetRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DeleteAssessmentTargetRequest instance.
 */
DeleteAssessmentTargetRequestPrivate::DeleteAssessmentTargetRequestPrivate(
    const InspectorRequest::Action action, DeleteAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssessmentTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAssessmentTargetRequest instance.
 */
DeleteAssessmentTargetRequestPrivate::DeleteAssessmentTargetRequestPrivate(
    const DeleteAssessmentTargetRequestPrivate &other, DeleteAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
