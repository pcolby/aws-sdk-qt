// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassessmenttargetsrequest.h"
#include "describeassessmenttargetsrequest_p.h"
#include "describeassessmenttargetsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentTargetsRequest
 * \brief The DescribeAssessmentTargetsRequest class provides an interface for Inspector DescribeAssessmentTargets requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentTargets
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssessmentTargetsRequest::DescribeAssessmentTargetsRequest(const DescribeAssessmentTargetsRequest &other)
    : InspectorRequest(new DescribeAssessmentTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssessmentTargetsRequest object.
 */
DescribeAssessmentTargetsRequest::DescribeAssessmentTargetsRequest()
    : InspectorRequest(new DescribeAssessmentTargetsRequestPrivate(InspectorRequest::DescribeAssessmentTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssessmentTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssessmentTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssessmentTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentTargetsRequestPrivate
 * \brief The DescribeAssessmentTargetsRequestPrivate class provides private implementation for DescribeAssessmentTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeAssessmentTargetsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeAssessmentTargetsRequestPrivate::DescribeAssessmentTargetsRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentTargetsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentTargetsRequest
 * class' copy constructor.
 */
DescribeAssessmentTargetsRequestPrivate::DescribeAssessmentTargetsRequestPrivate(
    const DescribeAssessmentTargetsRequestPrivate &other, DescribeAssessmentTargetsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
