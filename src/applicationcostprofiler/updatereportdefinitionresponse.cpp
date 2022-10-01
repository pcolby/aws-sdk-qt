// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereportdefinitionresponse.h"
#include "updatereportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::UpdateReportDefinitionResponse
 * \brief The UpdateReportDefinitionResponse class provides an interace for ApplicationCostProfiler UpdateReportDefinition responses.
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
 * \sa ApplicationCostProfilerClient::updateReportDefinition
 */

/*!
 * Constructs a UpdateReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReportDefinitionResponse::UpdateReportDefinitionResponse(
        const UpdateReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationCostProfilerResponse(new UpdateReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateReportDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReportDefinitionRequest * UpdateReportDefinitionResponse::request() const
{
    Q_D(const UpdateReportDefinitionResponse);
    return static_cast<const UpdateReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationCostProfiler UpdateReportDefinition \a response.
 */
void UpdateReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationCostProfiler::UpdateReportDefinitionResponsePrivate
 * \brief The UpdateReportDefinitionResponsePrivate class provides private implementation for UpdateReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a UpdateReportDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateReportDefinitionResponsePrivate::UpdateReportDefinitionResponsePrivate(
    UpdateReportDefinitionResponse * const q) : ApplicationCostProfilerResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationCostProfiler UpdateReportDefinition response element from \a xml.
 */
void UpdateReportDefinitionResponsePrivate::parseUpdateReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationCostProfiler
} // namespace QtAws
