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

#include "addnotificationchannelsrequest.h"
#include "addnotificationchannelsrequest_p.h"
#include "addnotificationchannelsresponse.h"
#include "codeguruprofilerrequest_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::AddNotificationChannelsRequest
 * \brief The AddNotificationChannelsRequest class provides an interface for CodeGuruProfiler AddNotificationChannels requests.
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
 * \sa CodeGuruProfilerClient::addNotificationChannels
 */

/*!
 * Constructs a copy of \a other.
 */
AddNotificationChannelsRequest::AddNotificationChannelsRequest(const AddNotificationChannelsRequest &other)
    : CodeGuruProfilerRequest(new AddNotificationChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddNotificationChannelsRequest object.
 */
AddNotificationChannelsRequest::AddNotificationChannelsRequest()
    : CodeGuruProfilerRequest(new AddNotificationChannelsRequestPrivate(CodeGuruProfilerRequest::AddNotificationChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool AddNotificationChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddNotificationChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddNotificationChannelsRequest::response(QNetworkReply * const reply) const
{
    return new AddNotificationChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeGuruProfiler::AddNotificationChannelsRequestPrivate
 * \brief The AddNotificationChannelsRequestPrivate class provides private implementation for AddNotificationChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a AddNotificationChannelsRequestPrivate object for CodeGuruProfiler \a action,
 * with public implementation \a q.
 */
AddNotificationChannelsRequestPrivate::AddNotificationChannelsRequestPrivate(
    const CodeGuruProfilerRequest::Action action, AddNotificationChannelsRequest * const q)
    : CodeGuruProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddNotificationChannelsRequest
 * class' copy constructor.
 */
AddNotificationChannelsRequestPrivate::AddNotificationChannelsRequestPrivate(
    const AddNotificationChannelsRequestPrivate &other, AddNotificationChannelsRequest * const q)
    : CodeGuruProfilerRequestPrivate(other, q)
{

}

} // namespace CodeGuruProfiler
} // namespace QtAws
