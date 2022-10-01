// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofilinggrouprequest.h"
#include "deleteprofilinggrouprequest_p.h"
#include "deleteprofilinggroupresponse.h"
#include "codeguruprofilerrequest_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::DeleteProfilingGroupRequest
 * \brief The DeleteProfilingGroupRequest class provides an interface for CodeGuruProfiler DeleteProfilingGroup requests.
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
 * \sa CodeGuruProfilerClient::deleteProfilingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProfilingGroupRequest::DeleteProfilingGroupRequest(const DeleteProfilingGroupRequest &other)
    : CodeGuruProfilerRequest(new DeleteProfilingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProfilingGroupRequest object.
 */
DeleteProfilingGroupRequest::DeleteProfilingGroupRequest()
    : CodeGuruProfilerRequest(new DeleteProfilingGroupRequestPrivate(CodeGuruProfilerRequest::DeleteProfilingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProfilingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProfilingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProfilingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProfilingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruProfiler::DeleteProfilingGroupRequestPrivate
 * \brief The DeleteProfilingGroupRequestPrivate class provides private implementation for DeleteProfilingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a DeleteProfilingGroupRequestPrivate object for CodeGuruProfiler \a action,
 * with public implementation \a q.
 */
DeleteProfilingGroupRequestPrivate::DeleteProfilingGroupRequestPrivate(
    const CodeGuruProfilerRequest::Action action, DeleteProfilingGroupRequest * const q)
    : CodeGuruProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProfilingGroupRequest
 * class' copy constructor.
 */
DeleteProfilingGroupRequestPrivate::DeleteProfilingGroupRequestPrivate(
    const DeleteProfilingGroupRequestPrivate &other, DeleteProfilingGroupRequest * const q)
    : CodeGuruProfilerRequestPrivate(other, q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
