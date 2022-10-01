// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importapplicationusageresponse.h"
#include "importapplicationusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ImportApplicationUsageResponse
 * \brief The ImportApplicationUsageResponse class provides an interace for ApplicationCostProfiler ImportApplicationUsage responses.
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
 * \sa ApplicationCostProfilerClient::importApplicationUsage
 */

/*!
 * Constructs a ImportApplicationUsageResponse object for \a reply to \a request, with parent \a parent.
 */
ImportApplicationUsageResponse::ImportApplicationUsageResponse(
        const ImportApplicationUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationCostProfilerResponse(new ImportApplicationUsageResponsePrivate(this), parent)
{
    setRequest(new ImportApplicationUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportApplicationUsageRequest * ImportApplicationUsageResponse::request() const
{
    Q_D(const ImportApplicationUsageResponse);
    return static_cast<const ImportApplicationUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationCostProfiler ImportApplicationUsage \a response.
 */
void ImportApplicationUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportApplicationUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationCostProfiler::ImportApplicationUsageResponsePrivate
 * \brief The ImportApplicationUsageResponsePrivate class provides private implementation for ImportApplicationUsageResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ImportApplicationUsageResponsePrivate object with public implementation \a q.
 */
ImportApplicationUsageResponsePrivate::ImportApplicationUsageResponsePrivate(
    ImportApplicationUsageResponse * const q) : ApplicationCostProfilerResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationCostProfiler ImportApplicationUsage response element from \a xml.
 */
void ImportApplicationUsageResponsePrivate::parseImportApplicationUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportApplicationUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationCostProfiler
} // namespace QtAws
