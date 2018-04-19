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

#include "createassessmenttemplaterequest.h"
#include "createassessmenttemplaterequest_p.h"
#include "createassessmenttemplateresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateAssessmentTemplateRequest
 * \brief The CreateAssessmentTemplateRequest class provides an interface for Inspector CreateAssessmentTemplate requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createAssessmentTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAssessmentTemplateRequest::CreateAssessmentTemplateRequest(const CreateAssessmentTemplateRequest &other)
    : InspectorRequest(new CreateAssessmentTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAssessmentTemplateRequest object.
 */
CreateAssessmentTemplateRequest::CreateAssessmentTemplateRequest()
    : InspectorRequest(new CreateAssessmentTemplateRequestPrivate(InspectorRequest::CreateAssessmentTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAssessmentTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAssessmentTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssessmentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssessmentTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::CreateAssessmentTemplateRequestPrivate
 * \brief The CreateAssessmentTemplateRequestPrivate class provides private implementation for CreateAssessmentTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 *
 * Constructs a CreateAssessmentTemplateRequestPrivate object for Inspector \a action with,
 * public implementation \a q.
 */
CreateAssessmentTemplateRequestPrivate::CreateAssessmentTemplateRequestPrivate(
    const InspectorRequest::Action action, CreateAssessmentTemplateRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAssessmentTemplateRequest
 * class' copy constructor.
 */
CreateAssessmentTemplateRequestPrivate::CreateAssessmentTemplateRequestPrivate(
    const CreateAssessmentTemplateRequestPrivate &other, CreateAssessmentTemplateRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
