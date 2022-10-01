// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprofilinggroupresponse.h"
#include "describeprofilinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::DescribeProfilingGroupResponse
 * \brief The DescribeProfilingGroupResponse class provides an interace for CodeGuruProfiler DescribeProfilingGroup responses.
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
 * \sa CodeGuruProfilerClient::describeProfilingGroup
 */

/*!
 * Constructs a DescribeProfilingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProfilingGroupResponse::DescribeProfilingGroupResponse(
        const DescribeProfilingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruProfilerResponse(new DescribeProfilingGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeProfilingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProfilingGroupRequest * DescribeProfilingGroupResponse::request() const
{
    Q_D(const DescribeProfilingGroupResponse);
    return static_cast<const DescribeProfilingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruProfiler DescribeProfilingGroup \a response.
 */
void DescribeProfilingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProfilingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruProfiler::DescribeProfilingGroupResponsePrivate
 * \brief The DescribeProfilingGroupResponsePrivate class provides private implementation for DescribeProfilingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a DescribeProfilingGroupResponsePrivate object with public implementation \a q.
 */
DescribeProfilingGroupResponsePrivate::DescribeProfilingGroupResponsePrivate(
    DescribeProfilingGroupResponse * const q) : CodeGuruProfilerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruProfiler DescribeProfilingGroup response element from \a xml.
 */
void DescribeProfilingGroupResponsePrivate::parseDescribeProfilingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProfilingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruProfiler
} // namespace QtAws
