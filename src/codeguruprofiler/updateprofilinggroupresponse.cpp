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

#include "updateprofilinggroupresponse.h"
#include "updateprofilinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::UpdateProfilingGroupResponse
 * \brief The UpdateProfilingGroupResponse class provides an interace for CodeGuruProfiler UpdateProfilingGroup responses.
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
 * \sa CodeGuruProfilerClient::updateProfilingGroup
 */

/*!
 * Constructs a UpdateProfilingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProfilingGroupResponse::UpdateProfilingGroupResponse(
        const UpdateProfilingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruProfilerResponse(new UpdateProfilingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateProfilingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProfilingGroupRequest * UpdateProfilingGroupResponse::request() const
{
    Q_D(const UpdateProfilingGroupResponse);
    return static_cast<const UpdateProfilingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruProfiler UpdateProfilingGroup \a response.
 */
void UpdateProfilingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProfilingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruProfiler::UpdateProfilingGroupResponsePrivate
 * \brief The UpdateProfilingGroupResponsePrivate class provides private implementation for UpdateProfilingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a UpdateProfilingGroupResponsePrivate object with public implementation \a q.
 */
UpdateProfilingGroupResponsePrivate::UpdateProfilingGroupResponsePrivate(
    UpdateProfilingGroupResponse * const q) : CodeGuruProfilerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruProfiler UpdateProfilingGroup response element from \a xml.
 */
void UpdateProfilingGroupResponsePrivate::parseUpdateProfilingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProfilingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruProfiler
} // namespace QtAws
