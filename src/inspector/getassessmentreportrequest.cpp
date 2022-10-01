// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassessmentreportrequest.h"
#include "getassessmentreportrequest_p.h"
#include "getassessmentreportresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetAssessmentReportRequest
 * \brief The GetAssessmentReportRequest class provides an interface for Inspector GetAssessmentReport requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getAssessmentReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssessmentReportRequest::GetAssessmentReportRequest(const GetAssessmentReportRequest &other)
    : InspectorRequest(new GetAssessmentReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssessmentReportRequest object.
 */
GetAssessmentReportRequest::GetAssessmentReportRequest()
    : InspectorRequest(new GetAssessmentReportRequestPrivate(InspectorRequest::GetAssessmentReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssessmentReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssessmentReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssessmentReportRequest::response(QNetworkReply * const reply) const
{
    return new GetAssessmentReportResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::GetAssessmentReportRequestPrivate
 * \brief The GetAssessmentReportRequestPrivate class provides private implementation for GetAssessmentReportRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetAssessmentReportRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
GetAssessmentReportRequestPrivate::GetAssessmentReportRequestPrivate(
    const InspectorRequest::Action action, GetAssessmentReportRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssessmentReportRequest
 * class' copy constructor.
 */
GetAssessmentReportRequestPrivate::GetAssessmentReportRequestPrivate(
    const GetAssessmentReportRequestPrivate &other, GetAssessmentReportRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
