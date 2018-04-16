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

#include "createassessmenttargetrequest.h"
#include "createassessmenttargetrequest_p.h"
#include "createassessmenttargetresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateAssessmentTargetRequest
 *
 * \brief The CreateAssessmentTargetRequest class encapsulates Inspector CreateAssessmentTarget requests.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createAssessmentTarget
 */

/*!
 * @brief  Constructs a new CreateAssessmentTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAssessmentTargetRequest::CreateAssessmentTargetRequest(const CreateAssessmentTargetRequest &other)
    : InspectorRequest(new CreateAssessmentTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateAssessmentTargetRequest object.
 */
CreateAssessmentTargetRequest::CreateAssessmentTargetRequest()
    : InspectorRequest(new CreateAssessmentTargetRequestPrivate(InspectorRequest::CreateAssessmentTargetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAssessmentTargetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateAssessmentTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAssessmentTargetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssessmentTargetRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssessmentTargetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateAssessmentTargetRequestPrivate
 *
 * @brief  Private implementation for CreateAssessmentTargetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateAssessmentTargetRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public CreateAssessmentTargetRequest instance.
 */
CreateAssessmentTargetRequestPrivate::CreateAssessmentTargetRequestPrivate(
    const InspectorRequest::Action action, CreateAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateAssessmentTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAssessmentTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAssessmentTargetRequest instance.
 */
CreateAssessmentTargetRequestPrivate::CreateAssessmentTargetRequestPrivate(
    const CreateAssessmentTargetRequestPrivate &other, CreateAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
