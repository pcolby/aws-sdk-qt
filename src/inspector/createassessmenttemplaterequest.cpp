// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
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
 * Constructs a CreateAssessmentTemplateRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
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
