/*
    Copyright 2013-2021 Paul Colby

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

#include "deleteassessmenttemplaterequest.h"
#include "deleteassessmenttemplaterequest_p.h"
#include "deleteassessmenttemplateresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DeleteAssessmentTemplateRequest
 * \brief The DeleteAssessmentTemplateRequest class provides an interface for Inspector DeleteAssessmentTemplate requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::deleteAssessmentTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssessmentTemplateRequest::DeleteAssessmentTemplateRequest(const DeleteAssessmentTemplateRequest &other)
    : InspectorRequest(new DeleteAssessmentTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssessmentTemplateRequest object.
 */
DeleteAssessmentTemplateRequest::DeleteAssessmentTemplateRequest()
    : InspectorRequest(new DeleteAssessmentTemplateRequestPrivate(InspectorRequest::DeleteAssessmentTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssessmentTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssessmentTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssessmentTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssessmentTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DeleteAssessmentTemplateRequestPrivate
 * \brief The DeleteAssessmentTemplateRequestPrivate class provides private implementation for DeleteAssessmentTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DeleteAssessmentTemplateRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DeleteAssessmentTemplateRequestPrivate::DeleteAssessmentTemplateRequestPrivate(
    const InspectorRequest::Action action, DeleteAssessmentTemplateRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssessmentTemplateRequest
 * class' copy constructor.
 */
DeleteAssessmentTemplateRequestPrivate::DeleteAssessmentTemplateRequestPrivate(
    const DeleteAssessmentTemplateRequestPrivate &other, DeleteAssessmentTemplateRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
