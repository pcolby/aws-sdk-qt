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

#include "listfindingsreportsresponse.h"
#include "listfindingsreportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::ListFindingsReportsResponse
 * \brief The ListFindingsReportsResponse class provides an interace for CodeGuruProfiler ListFindingsReports responses.
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
 * \sa CodeGuruProfilerClient::listFindingsReports
 */

/*!
 * Constructs a ListFindingsReportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFindingsReportsResponse::ListFindingsReportsResponse(
        const ListFindingsReportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruProfilerResponse(new ListFindingsReportsResponsePrivate(this), parent)
{
    setRequest(new ListFindingsReportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFindingsReportsRequest * ListFindingsReportsResponse::request() const
{
    return static_cast<const ListFindingsReportsRequest *>(CodeGuruProfilerResponse::request());
}

/*!
 * \reimp
 * Parses a successful CodeGuruProfiler ListFindingsReports \a response.
 */
void ListFindingsReportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFindingsReportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruProfiler::ListFindingsReportsResponsePrivate
 * \brief The ListFindingsReportsResponsePrivate class provides private implementation for ListFindingsReportsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a ListFindingsReportsResponsePrivate object with public implementation \a q.
 */
ListFindingsReportsResponsePrivate::ListFindingsReportsResponsePrivate(
    ListFindingsReportsResponse * const q) : CodeGuruProfilerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruProfiler ListFindingsReports response element from \a xml.
 */
void ListFindingsReportsResponsePrivate::parseListFindingsReportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFindingsReportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruProfiler
} // namespace QtAws
