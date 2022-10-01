// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putreportdefinitionresponse.h"
#include "putreportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::PutReportDefinitionResponse
 * \brief The PutReportDefinitionResponse class provides an interace for ApplicationCostProfiler PutReportDefinition responses.
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
 * \sa ApplicationCostProfilerClient::putReportDefinition
 */

/*!
 * Constructs a PutReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
PutReportDefinitionResponse::PutReportDefinitionResponse(
        const PutReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationCostProfilerResponse(new PutReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new PutReportDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutReportDefinitionRequest * PutReportDefinitionResponse::request() const
{
    Q_D(const PutReportDefinitionResponse);
    return static_cast<const PutReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationCostProfiler PutReportDefinition \a response.
 */
void PutReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationCostProfiler::PutReportDefinitionResponsePrivate
 * \brief The PutReportDefinitionResponsePrivate class provides private implementation for PutReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a PutReportDefinitionResponsePrivate object with public implementation \a q.
 */
PutReportDefinitionResponsePrivate::PutReportDefinitionResponsePrivate(
    PutReportDefinitionResponse * const q) : ApplicationCostProfilerResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationCostProfiler PutReportDefinition response element from \a xml.
 */
void PutReportDefinitionResponsePrivate::parsePutReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationCostProfiler
} // namespace QtAws
