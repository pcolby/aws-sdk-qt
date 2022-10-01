// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdimensionvaluesresponse.h"
#include "getdimensionvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetDimensionValuesResponse
 * \brief The GetDimensionValuesResponse class provides an interace for CostExplorer GetDimensionValues responses.
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
 * \sa CostExplorerClient::getDimensionValues
 */

/*!
 * Constructs a GetDimensionValuesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDimensionValuesResponse::GetDimensionValuesResponse(
        const GetDimensionValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetDimensionValuesResponsePrivate(this), parent)
{
    setRequest(new GetDimensionValuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDimensionValuesRequest * GetDimensionValuesResponse::request() const
{
    Q_D(const GetDimensionValuesResponse);
    return static_cast<const GetDimensionValuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetDimensionValues \a response.
 */
void GetDimensionValuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDimensionValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetDimensionValuesResponsePrivate
 * \brief The GetDimensionValuesResponsePrivate class provides private implementation for GetDimensionValuesResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetDimensionValuesResponsePrivate object with public implementation \a q.
 */
GetDimensionValuesResponsePrivate::GetDimensionValuesResponsePrivate(
    GetDimensionValuesResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetDimensionValues response element from \a xml.
 */
void GetDimensionValuesResponsePrivate::parseGetDimensionValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDimensionValuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
