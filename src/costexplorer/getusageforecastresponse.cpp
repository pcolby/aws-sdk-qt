// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageforecastresponse.h"
#include "getusageforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetUsageForecastResponse
 * \brief The GetUsageForecastResponse class provides an interace for CostExplorer GetUsageForecast responses.
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
 * \sa CostExplorerClient::getUsageForecast
 */

/*!
 * Constructs a GetUsageForecastResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsageForecastResponse::GetUsageForecastResponse(
        const GetUsageForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetUsageForecastResponsePrivate(this), parent)
{
    setRequest(new GetUsageForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsageForecastRequest * GetUsageForecastResponse::request() const
{
    Q_D(const GetUsageForecastResponse);
    return static_cast<const GetUsageForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetUsageForecast \a response.
 */
void GetUsageForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsageForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetUsageForecastResponsePrivate
 * \brief The GetUsageForecastResponsePrivate class provides private implementation for GetUsageForecastResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetUsageForecastResponsePrivate object with public implementation \a q.
 */
GetUsageForecastResponsePrivate::GetUsageForecastResponsePrivate(
    GetUsageForecastResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetUsageForecast response element from \a xml.
 */
void GetUsageForecastResponsePrivate::parseGetUsageForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsageForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
