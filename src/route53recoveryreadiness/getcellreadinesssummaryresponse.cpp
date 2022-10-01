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

#include "getcellreadinesssummaryresponse.h"
#include "getcellreadinesssummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellReadinessSummaryResponse
 * \brief The GetCellReadinessSummaryResponse class provides an interace for Route53RecoveryReadiness GetCellReadinessSummary responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getCellReadinessSummary
 */

/*!
 * Constructs a GetCellReadinessSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetCellReadinessSummaryResponse::GetCellReadinessSummaryResponse(
        const GetCellReadinessSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetCellReadinessSummaryResponsePrivate(this), parent)
{
    setRequest(new GetCellReadinessSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCellReadinessSummaryRequest * GetCellReadinessSummaryResponse::request() const
{
    Q_D(const GetCellReadinessSummaryResponse);
    return static_cast<const GetCellReadinessSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetCellReadinessSummary \a response.
 */
void GetCellReadinessSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCellReadinessSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellReadinessSummaryResponsePrivate
 * \brief The GetCellReadinessSummaryResponsePrivate class provides private implementation for GetCellReadinessSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetCellReadinessSummaryResponsePrivate object with public implementation \a q.
 */
GetCellReadinessSummaryResponsePrivate::GetCellReadinessSummaryResponsePrivate(
    GetCellReadinessSummaryResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetCellReadinessSummary response element from \a xml.
 */
void GetCellReadinessSummaryResponsePrivate::parseGetCellReadinessSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCellReadinessSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
