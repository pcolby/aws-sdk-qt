// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreportdefinitionsresponse.h"
#include "listreportdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ListReportDefinitionsResponse
 * \brief The ListReportDefinitionsResponse class provides an interace for ApplicationCostProfiler ListReportDefinitions responses.
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
 * \sa ApplicationCostProfilerClient::listReportDefinitions
 */

/*!
 * Constructs a ListReportDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReportDefinitionsResponse::ListReportDefinitionsResponse(
        const ListReportDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationCostProfilerResponse(new ListReportDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListReportDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReportDefinitionsRequest * ListReportDefinitionsResponse::request() const
{
    Q_D(const ListReportDefinitionsResponse);
    return static_cast<const ListReportDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationCostProfiler ListReportDefinitions \a response.
 */
void ListReportDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReportDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationCostProfiler::ListReportDefinitionsResponsePrivate
 * \brief The ListReportDefinitionsResponsePrivate class provides private implementation for ListReportDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ListReportDefinitionsResponsePrivate object with public implementation \a q.
 */
ListReportDefinitionsResponsePrivate::ListReportDefinitionsResponsePrivate(
    ListReportDefinitionsResponse * const q) : ApplicationCostProfilerResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationCostProfiler ListReportDefinitions response element from \a xml.
 */
void ListReportDefinitionsResponsePrivate::parseListReportDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReportDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationCostProfiler
} // namespace QtAws
