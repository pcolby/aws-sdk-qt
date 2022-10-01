// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "submitfeedbackrequest.h"
#include "submitfeedbackrequest_p.h"
#include "submitfeedbackresponse.h"
#include "codeguruprofilerrequest_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::SubmitFeedbackRequest
 * \brief The SubmitFeedbackRequest class provides an interface for CodeGuruProfiler SubmitFeedback requests.
 *
 * \inmodule QtAwsCodeGuruProfiler
 *
 *  This section provides documentation for the Amazon CodeGuru Profiler API operations.
 * 
 *  </p
 * 
 *  Amazon CodeGuru Profiler collects runtime performance data from your live applications, and provides recommendations
 *  that can help you fine-tune your application performance. Using machine learning algorithms, CodeGuru Profiler can help
 *  you find your most expensive lines of code and suggest ways you can improve efficiency and remove CPU bottlenecks.
 * 
 *  </p
 * 
 *  Amazon CodeGuru Profiler provides different visualizations of profiling data to help you identify what code is running
 *  on the CPU, see how much time is consumed, and suggest ways to reduce CPU utilization.
 * 
 *  </p <note>
 * 
 *  Amazon CodeGuru Profiler currently supports applications written in all Java virtual machine (JVM) languages and Python.
 *  While CodeGuru Profiler supports both visualizations and recommendations for applications written in Java, it can also
 *  generate visualizations and a subset of recommendations for applications written in other JVM languages and
 * 
 *  Python> </note>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/what-is-codeguru-profiler.html">What is Amazon CodeGuru
 *  Profiler</a> in the <i>Amazon CodeGuru Profiler User Guide</i>.
 *
 * \sa CodeGuruProfilerClient::submitFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
SubmitFeedbackRequest::SubmitFeedbackRequest(const SubmitFeedbackRequest &other)
    : CodeGuruProfilerRequest(new SubmitFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SubmitFeedbackRequest object.
 */
SubmitFeedbackRequest::SubmitFeedbackRequest()
    : CodeGuruProfilerRequest(new SubmitFeedbackRequestPrivate(CodeGuruProfilerRequest::SubmitFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool SubmitFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SubmitFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SubmitFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new SubmitFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruProfiler::SubmitFeedbackRequestPrivate
 * \brief The SubmitFeedbackRequestPrivate class provides private implementation for SubmitFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a SubmitFeedbackRequestPrivate object for CodeGuruProfiler \a action,
 * with public implementation \a q.
 */
SubmitFeedbackRequestPrivate::SubmitFeedbackRequestPrivate(
    const CodeGuruProfilerRequest::Action action, SubmitFeedbackRequest * const q)
    : CodeGuruProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SubmitFeedbackRequest
 * class' copy constructor.
 */
SubmitFeedbackRequestPrivate::SubmitFeedbackRequestPrivate(
    const SubmitFeedbackRequestPrivate &other, SubmitFeedbackRequest * const q)
    : CodeGuruProfilerRequestPrivate(other, q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
