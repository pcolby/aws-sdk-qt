/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createassessmenttargetrequest.h"
#include "createassessmenttargetrequest_p.h"
#include "createassessmenttargetresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateAssessmentTargetRequest
 * \brief The CreateAssessmentTargetRequest class provides an interface for Inspector CreateAssessmentTarget requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createAssessmentTarget
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAssessmentTargetRequest::CreateAssessmentTargetRequest(const CreateAssessmentTargetRequest &other)
    : InspectorRequest(new CreateAssessmentTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAssessmentTargetRequest object.
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
 * Returns a CreateAssessmentTargetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssessmentTargetRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssessmentTargetResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::CreateAssessmentTargetRequestPrivate
 * \brief The CreateAssessmentTargetRequestPrivate class provides private implementation for CreateAssessmentTargetRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateAssessmentTargetRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
CreateAssessmentTargetRequestPrivate::CreateAssessmentTargetRequestPrivate(
    const InspectorRequest::Action action, CreateAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAssessmentTargetRequest
 * class' copy constructor.
 */
CreateAssessmentTargetRequestPrivate::CreateAssessmentTargetRequestPrivate(
    const CreateAssessmentTargetRequestPrivate &other, CreateAssessmentTargetRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
