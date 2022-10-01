// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnotificationconfigurationresponse.h"
#include "getnotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::GetNotificationConfigurationResponse
 * \brief The GetNotificationConfigurationResponse class provides an interace for CodeGuruProfiler GetNotificationConfiguration responses.
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
 * \sa CodeGuruProfilerClient::getNotificationConfiguration
 */

/*!
 * Constructs a GetNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetNotificationConfigurationResponse::GetNotificationConfigurationResponse(
        const GetNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruProfilerResponse(new GetNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNotificationConfigurationRequest * GetNotificationConfigurationResponse::request() const
{
    Q_D(const GetNotificationConfigurationResponse);
    return static_cast<const GetNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruProfiler GetNotificationConfiguration \a response.
 */
void GetNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruProfiler::GetNotificationConfigurationResponsePrivate
 * \brief The GetNotificationConfigurationResponsePrivate class provides private implementation for GetNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a GetNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
GetNotificationConfigurationResponsePrivate::GetNotificationConfigurationResponsePrivate(
    GetNotificationConfigurationResponse * const q) : CodeGuruProfilerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruProfiler GetNotificationConfiguration response element from \a xml.
 */
void GetNotificationConfigurationResponsePrivate::parseGetNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruProfiler
} // namespace QtAws
