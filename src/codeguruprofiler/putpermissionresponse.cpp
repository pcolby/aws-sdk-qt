// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpermissionresponse.h"
#include "putpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::PutPermissionResponse
 * \brief The PutPermissionResponse class provides an interace for CodeGuruProfiler PutPermission responses.
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
 * Constructs a PutPermissionResponse object for \a reply to \a request, with parent \a parent.
 */
PutPermissionResponse::PutPermissionResponse(
        const PutPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruProfilerResponse(new PutPermissionResponsePrivate(this), parent)
{
    setRequest(new PutPermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPermissionRequest * PutPermissionResponse::request() const
{
    Q_D(const PutPermissionResponse);
    return static_cast<const PutPermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruProfiler PutPermission \a response.
 */
void PutPermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruProfiler::PutPermissionResponsePrivate
 * \brief The PutPermissionResponsePrivate class provides private implementation for PutPermissionResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a PutPermissionResponsePrivate object with public implementation \a q.
 */
PutPermissionResponsePrivate::PutPermissionResponsePrivate(
    PutPermissionResponse * const q) : CodeGuruProfilerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruProfiler PutPermission response element from \a xml.
 */
void PutPermissionResponsePrivate::parsePutPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruProfiler
} // namespace QtAws
