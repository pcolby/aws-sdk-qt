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

#include "getreservationcoverageresponse.h"
#include "getreservationcoverageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationCoverageResponse
 *
 * \brief The GetReservationCoverageResponse class encapsulates CostExplorer GetReservationCoverage responses.
 *
 * \ingroup CostExplorer
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
 * \sa CostExplorerClient::getReservationCoverage
 */

/*!
 * @brief  Constructs a new GetReservationCoverageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReservationCoverageResponse::GetReservationCoverageResponse(
        const GetReservationCoverageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetReservationCoverageResponsePrivate(this), parent)
{
    setRequest(new GetReservationCoverageRequest(request));
    setReply(reply);
}

const GetReservationCoverageRequest * GetReservationCoverageResponse::request() const
{
    Q_D(const GetReservationCoverageResponse);
    return static_cast<const GetReservationCoverageRequest *>(d->request);
}

/*!
 * @brief  Parse a CostExplorer GetReservationCoverage response.
 *
 * @param  response  Response to parse.
 */
void GetReservationCoverageResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetReservationCoverageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetReservationCoverageResponsePrivate
 *
 * \brief Private implementation for GetReservationCoverageResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetReservationCoverageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReservationCoverageResponse instance.
 */
GetReservationCoverageResponsePrivate::GetReservationCoverageResponsePrivate(
    GetReservationCoverageResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CostExplorer GetReservationCoverageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReservationCoverageResponsePrivate::parseGetReservationCoverageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservationCoverageResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace QtAws
