// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprofilinggroupsresponse.h"
#include "listprofilinggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::ListProfilingGroupsResponse
 * \brief The ListProfilingGroupsResponse class provides an interace for CodeGuruProfiler ListProfilingGroups responses.
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
 * \sa CodeGuruProfilerClient::listProfilingGroups
 */

/*!
 * Constructs a ListProfilingGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProfilingGroupsResponse::ListProfilingGroupsResponse(
        const ListProfilingGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruProfilerResponse(new ListProfilingGroupsResponsePrivate(this), parent)
{
    setRequest(new ListProfilingGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProfilingGroupsRequest * ListProfilingGroupsResponse::request() const
{
    Q_D(const ListProfilingGroupsResponse);
    return static_cast<const ListProfilingGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruProfiler ListProfilingGroups \a response.
 */
void ListProfilingGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProfilingGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruProfiler::ListProfilingGroupsResponsePrivate
 * \brief The ListProfilingGroupsResponsePrivate class provides private implementation for ListProfilingGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a ListProfilingGroupsResponsePrivate object with public implementation \a q.
 */
ListProfilingGroupsResponsePrivate::ListProfilingGroupsResponsePrivate(
    ListProfilingGroupsResponse * const q) : CodeGuruProfilerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruProfiler ListProfilingGroups response element from \a xml.
 */
void ListProfilingGroupsResponsePrivate::parseListProfilingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProfilingGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruProfiler
} // namespace QtAws
