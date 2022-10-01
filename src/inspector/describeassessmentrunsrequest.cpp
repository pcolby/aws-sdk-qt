// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassessmentrunsrequest.h"
#include "describeassessmentrunsrequest_p.h"
#include "describeassessmentrunsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentRunsRequest
 * \brief The DescribeAssessmentRunsRequest class provides an interface for Inspector DescribeAssessmentRuns requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentRuns
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssessmentRunsRequest::DescribeAssessmentRunsRequest(const DescribeAssessmentRunsRequest &other)
    : InspectorRequest(new DescribeAssessmentRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssessmentRunsRequest object.
 */
DescribeAssessmentRunsRequest::DescribeAssessmentRunsRequest()
    : InspectorRequest(new DescribeAssessmentRunsRequestPrivate(InspectorRequest::DescribeAssessmentRunsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssessmentRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssessmentRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssessmentRunsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentRunsRequestPrivate
 * \brief The DescribeAssessmentRunsRequestPrivate class provides private implementation for DescribeAssessmentRunsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeAssessmentRunsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeAssessmentRunsRequestPrivate::DescribeAssessmentRunsRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentRunsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentRunsRequest
 * class' copy constructor.
 */
DescribeAssessmentRunsRequestPrivate::DescribeAssessmentRunsRequestPrivate(
    const DescribeAssessmentRunsRequestPrivate &other, DescribeAssessmentRunsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
