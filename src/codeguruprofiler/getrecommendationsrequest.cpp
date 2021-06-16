/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
