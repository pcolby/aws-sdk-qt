// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassessmenttemplatesrequest.h"
#include "describeassessmenttemplatesrequest_p.h"
#include "describeassessmenttemplatesresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentTemplatesRequest
 * \brief The DescribeAssessmentTemplatesRequest class provides an interface for Inspector DescribeAssessmentTemplates requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssessmentTemplatesRequest::DescribeAssessmentTemplatesRequest(const DescribeAssessmentTemplatesRequest &other)
    : InspectorRequest(new DescribeAssessmentTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssessmentTemplatesRequest object.
 */
DescribeAssessmentTemplatesRequest::DescribeAssessmentTemplatesRequest()
    : InspectorRequest(new DescribeAssessmentTemplatesRequestPrivate(InspectorRequest::DescribeAssessmentTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssessmentTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssessmentTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssessmentTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::DescribeAssessmentTemplatesRequestPrivate
 * \brief The DescribeAssessmentTemplatesRequestPrivate class provides private implementation for DescribeAssessmentTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeAssessmentTemplatesRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
DescribeAssessmentTemplatesRequestPrivate::DescribeAssessmentTemplatesRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentTemplatesRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentTemplatesRequest
 * class' copy constructor.
 */
DescribeAssessmentTemplatesRequestPrivate::DescribeAssessmentTemplatesRequestPrivate(
    const DescribeAssessmentTemplatesRequestPrivate &other, DescribeAssessmentTemplatesRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
