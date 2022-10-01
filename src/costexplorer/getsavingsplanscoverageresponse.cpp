// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsavingsplanscoverageresponse.h"
#include "getsavingsplanscoverageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansCoverageResponse
 * \brief The GetSavingsPlansCoverageResponse class provides an interace for CostExplorer GetSavingsPlansCoverage responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  You can use the Cost Explorer API to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data. This might include the number of
 *  daily write operations for Amazon DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about the costs that are associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa CostExplorerClient::getSavingsPlansCoverage
 */

/*!
 * Constructs a GetSavingsPlansCoverageResponse object for \a reply to \a request, with parent \a parent.
 */
GetSavingsPlansCoverageResponse::GetSavingsPlansCoverageResponse(
        const GetSavingsPlansCoverageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetSavingsPlansCoverageResponsePrivate(this), parent)
{
    setRequest(new GetSavingsPlansCoverageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSavingsPlansCoverageRequest * GetSavingsPlansCoverageResponse::request() const
{
    Q_D(const GetSavingsPlansCoverageResponse);
    return static_cast<const GetSavingsPlansCoverageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetSavingsPlansCoverage \a response.
 */
void GetSavingsPlansCoverageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSavingsPlansCoverageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansCoverageResponsePrivate
 * \brief The GetSavingsPlansCoverageResponsePrivate class provides private implementation for GetSavingsPlansCoverageResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetSavingsPlansCoverageResponsePrivate object with public implementation \a q.
 */
GetSavingsPlansCoverageResponsePrivate::GetSavingsPlansCoverageResponsePrivate(
    GetSavingsPlansCoverageResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetSavingsPlansCoverage response element from \a xml.
 */
void GetSavingsPlansCoverageResponsePrivate::parseGetSavingsPlansCoverageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSavingsPlansCoverageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
