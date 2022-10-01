// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
