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
    return static_cast<const ListReportDefinitionsRequest *>(ApplicationCostProfilerResponse::request());
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
