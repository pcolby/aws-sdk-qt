// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommendationsrequest.h"
#include "getrecommendationsrequest_p.h"
#include "getrecommendationsresponse.h"
#include "codeguruprofilerrequest_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::GetRecommendationsRequest
 * \brief The GetRecommendationsRequest class provides an interface for CodeGuruProfiler GetRecommendations requests.
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
 * \sa CodeGuruProfilerClient::getRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecommendationsRequest::GetRecommendationsRequest(const GetRecommendationsRequest &other)
    : CodeGuruProfilerRequest(new GetRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecommendationsRequest object.
 */
GetRecommendationsRequest::GetRecommendationsRequest()
    : CodeGuruProfilerRequest(new GetRecommendationsRequestPrivate(CodeGuruProfilerRequest::GetRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruProfiler::GetRecommendationsRequestPrivate
 * \brief The GetRecommendationsRequestPrivate class provides private implementation for GetRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a GetRecommendationsRequestPrivate object for CodeGuruProfiler \a action,
 * with public implementation \a q.
 */
GetRecommendationsRequestPrivate::GetRecommendationsRequestPrivate(
    const CodeGuruProfilerRequest::Action action, GetRecommendationsRequest * const q)
    : CodeGuruProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecommendationsRequest
 * class' copy constructor.
 */
GetRecommendationsRequestPrivate::GetRecommendationsRequestPrivate(
    const GetRecommendationsRequestPrivate &other, GetRecommendationsRequest * const q)
    : CodeGuruProfilerRequestPrivate(other, q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
