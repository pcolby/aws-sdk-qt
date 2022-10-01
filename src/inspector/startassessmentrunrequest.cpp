// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startassessmentrunrequest.h"
#include "startassessmentrunrequest_p.h"
#include "startassessmentrunresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::StartAssessmentRunRequest
 * \brief The StartAssessmentRunRequest class provides an interface for Inspector StartAssessmentRun requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::startAssessmentRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartAssessmentRunRequest::StartAssessmentRunRequest(const StartAssessmentRunRequest &other)
    : InspectorRequest(new StartAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartAssessmentRunRequest object.
 */
StartAssessmentRunRequest::StartAssessmentRunRequest()
    : InspectorRequest(new StartAssessmentRunRequestPrivate(InspectorRequest::StartAssessmentRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartAssessmentRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartAssessmentRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new StartAssessmentRunResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::StartAssessmentRunRequestPrivate
 * \brief The StartAssessmentRunRequestPrivate class provides private implementation for StartAssessmentRunRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a StartAssessmentRunRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
StartAssessmentRunRequestPrivate::StartAssessmentRunRequestPrivate(
    const InspectorRequest::Action action, StartAssessmentRunRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartAssessmentRunRequest
 * class' copy constructor.
 */
StartAssessmentRunRequestPrivate::StartAssessmentRunRequestPrivate(
    const StartAssessmentRunRequestPrivate &other, StartAssessmentRunRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
