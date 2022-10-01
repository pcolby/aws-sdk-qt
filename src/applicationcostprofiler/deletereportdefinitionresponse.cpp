// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportdefinitionresponse.h"
#include "deletereportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::DeleteReportDefinitionResponse
 * \brief The DeleteReportDefinitionResponse class provides an interace for ApplicationCostProfiler DeleteReportDefinition responses.
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
 * \sa ApplicationCostProfilerClient::deleteReportDefinition
 */

/*!
 * Constructs a DeleteReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReportDefinitionResponse::DeleteReportDefinitionResponse(
        const DeleteReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationCostProfilerResponse(new DeleteReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteReportDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReportDefinitionRequest * DeleteReportDefinitionResponse::request() const
{
    Q_D(const DeleteReportDefinitionResponse);
    return static_cast<const DeleteReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationCostProfiler DeleteReportDefinition \a response.
 */
void DeleteReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationCostProfiler::DeleteReportDefinitionResponsePrivate
 * \brief The DeleteReportDefinitionResponsePrivate class provides private implementation for DeleteReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a DeleteReportDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteReportDefinitionResponsePrivate::DeleteReportDefinitionResponsePrivate(
    DeleteReportDefinitionResponse * const q) : ApplicationCostProfilerResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationCostProfiler DeleteReportDefinition response element from \a xml.
 */
void DeleteReportDefinitionResponsePrivate::parseDeleteReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationCostProfiler
} // namespace QtAws
