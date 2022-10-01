// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetframemetricdatarequest.h"
#include "batchgetframemetricdatarequest_p.h"
#include "batchgetframemetricdataresponse.h"
#include "codeguruprofilerrequest_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::BatchGetFrameMetricDataRequest
 * \brief The BatchGetFrameMetricDataRequest class provides an interface for CodeGuruProfiler BatchGetFrameMetricData requests.
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
 * \sa CodeGuruProfilerClient::batchGetFrameMetricData
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetFrameMetricDataRequest::BatchGetFrameMetricDataRequest(const BatchGetFrameMetricDataRequest &other)
    : CodeGuruProfilerRequest(new BatchGetFrameMetricDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetFrameMetricDataRequest object.
 */
BatchGetFrameMetricDataRequest::BatchGetFrameMetricDataRequest()
    : CodeGuruProfilerRequest(new BatchGetFrameMetricDataRequestPrivate(CodeGuruProfilerRequest::BatchGetFrameMetricDataAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetFrameMetricDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetFrameMetricDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetFrameMetricDataRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetFrameMetricDataResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruProfiler::BatchGetFrameMetricDataRequestPrivate
 * \brief The BatchGetFrameMetricDataRequestPrivate class provides private implementation for BatchGetFrameMetricDataRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a BatchGetFrameMetricDataRequestPrivate object for CodeGuruProfiler \a action,
 * with public implementation \a q.
 */
BatchGetFrameMetricDataRequestPrivate::BatchGetFrameMetricDataRequestPrivate(
    const CodeGuruProfilerRequest::Action action, BatchGetFrameMetricDataRequest * const q)
    : CodeGuruProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetFrameMetricDataRequest
 * class' copy constructor.
 */
BatchGetFrameMetricDataRequestPrivate::BatchGetFrameMetricDataRequestPrivate(
    const BatchGetFrameMetricDataRequestPrivate &other, BatchGetFrameMetricDataRequest * const q)
    : CodeGuruProfilerRequestPrivate(other, q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
