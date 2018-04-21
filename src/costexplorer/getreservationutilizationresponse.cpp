/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getreservationutilizationresponse.h"
#include "getreservationutilizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationResponse
 * \brief The GetReservationUtilizationResponse class provides an interace for CostExplorer GetReservationUtilization responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for DynamoDB database tables in your production environment.
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
 * \sa CostExplorerClient::getReservationUtilization
 */

/*!
 * Constructs a GetReservationUtilizationResponse object for \a reply to \a request, with parent \a parent.
 */
GetReservationUtilizationResponse::GetReservationUtilizationResponse(
        const GetReservationUtilizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetReservationUtilizationResponsePrivate(this), parent)
{
    setRequest(new GetReservationUtilizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReservationUtilizationRequest * GetReservationUtilizationResponse::request() const
{
    Q_D(const GetReservationUtilizationResponse);
    return static_cast<const GetReservationUtilizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetReservationUtilization \a response.
 */
void GetReservationUtilizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetReservationUtilizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationResponsePrivate
 * \brief The GetReservationUtilizationResponsePrivate class provides private implementation for GetReservationUtilizationResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetReservationUtilizationResponsePrivate object with public implementation \a q.
 */
GetReservationUtilizationResponsePrivate::GetReservationUtilizationResponsePrivate(
    GetReservationUtilizationResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetReservationUtilization response element from \a xml.
 */
void GetReservationUtilizationResponsePrivate::parseGetReservationUtilizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservationUtilizationResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace QtAws
