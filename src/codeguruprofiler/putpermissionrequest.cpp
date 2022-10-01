// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpermissionrequest.h"
#include "putpermissionrequest_p.h"
#include "putpermissionresponse.h"
#include "codeguruprofilerrequest_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::PutPermissionRequest
 * \brief The PutPermissionRequest class provides an interface for CodeGuruProfiler PutPermission requests.
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
 * \sa CodeGuruProfilerClient::putPermission
 */

/*!
 * Constructs a copy of \a other.
 */
PutPermissionRequest::PutPermissionRequest(const PutPermissionRequest &other)
    : CodeGuruProfilerRequest(new PutPermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPermissionRequest object.
 */
PutPermissionRequest::PutPermissionRequest()
    : CodeGuruProfilerRequest(new PutPermissionRequestPrivate(CodeGuruProfilerRequest::PutPermissionAction, this))
{

}

/*!
 * \reimp
 */
bool PutPermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPermissionRequest::response(QNetworkReply * const reply) const
{
    return new PutPermissionResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruProfiler::PutPermissionRequestPrivate
 * \brief The PutPermissionRequestPrivate class provides private implementation for PutPermissionRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a PutPermissionRequestPrivate object for CodeGuruProfiler \a action,
 * with public implementation \a q.
 */
PutPermissionRequestPrivate::PutPermissionRequestPrivate(
    const CodeGuruProfilerRequest::Action action, PutPermissionRequest * const q)
    : CodeGuruProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPermissionRequest
 * class' copy constructor.
 */
PutPermissionRequestPrivate::PutPermissionRequestPrivate(
    const PutPermissionRequestPrivate &other, PutPermissionRequest * const q)
    : CodeGuruProfilerRequestPrivate(other, q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
