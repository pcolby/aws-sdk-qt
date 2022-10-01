// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreportdefinitionresponse.h"
#include "getreportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::GetReportDefinitionResponse
 * \brief The GetReportDefinitionResponse class provides an interace for ApplicationCostProfiler GetReportDefinition responses.
 *
 * \inmodule QtAwsApplicationCostProfiler
 *
 *  This reference provides descriptions of the AWS Application Cost Profiler
 * 
 *  API>
 * 
 *  The AWS Application Cost Profiler API provides programmatic access to view, create, update, and delete application cost
 *  report definitions, as well as to import your usage data into the Application Cost Profiler
 * 
 *  service>
 * 
 *  For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/application-cost-profiler/latest/userguide/introduction.html">AWS Application Cost
 *  Profiler User
 *
 * \sa ApplicationCostProfilerClient::getReportDefinition
 */

/*!
 * Constructs a GetReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetReportDefinitionResponse::GetReportDefinitionResponse(
        const GetReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationCostProfilerResponse(new GetReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetReportDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReportDefinitionRequest * GetReportDefinitionResponse::request() const
{
    Q_D(const GetReportDefinitionResponse);
    return static_cast<const GetReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationCostProfiler GetReportDefinition \a response.
 */
void GetReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationCostProfiler::GetReportDefinitionResponsePrivate
 * \brief The GetReportDefinitionResponsePrivate class provides private implementation for GetReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a GetReportDefinitionResponsePrivate object with public implementation \a q.
 */
GetReportDefinitionResponsePrivate::GetReportDefinitionResponsePrivate(
    GetReportDefinitionResponse * const q) : ApplicationCostProfilerResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationCostProfiler GetReportDefinition response element from \a xml.
 */
void GetReportDefinitionResponsePrivate::parseGetReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationCostProfiler
} // namespace QtAws
