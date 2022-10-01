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

#include "getrecoverygroupreadinesssummaryresponse.h"
#include "getrecoverygroupreadinesssummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupReadinessSummaryResponse
 * \brief The GetRecoveryGroupReadinessSummaryResponse class provides an interace for Route53RecoveryReadiness GetRecoveryGroupReadinessSummary responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getRecoveryGroupReadinessSummary
 */

/*!
 * Constructs a GetRecoveryGroupReadinessSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecoveryGroupReadinessSummaryResponse::GetRecoveryGroupReadinessSummaryResponse(
        const GetRecoveryGroupReadinessSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetRecoveryGroupReadinessSummaryResponsePrivate(this), parent)
{
    setRequest(new GetRecoveryGroupReadinessSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecoveryGroupReadinessSummaryRequest * GetRecoveryGroupReadinessSummaryResponse::request() const
{
    Q_D(const GetRecoveryGroupReadinessSummaryResponse);
    return static_cast<const GetRecoveryGroupReadinessSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetRecoveryGroupReadinessSummary \a response.
 */
void GetRecoveryGroupReadinessSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecoveryGroupReadinessSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupReadinessSummaryResponsePrivate
 * \brief The GetRecoveryGroupReadinessSummaryResponsePrivate class provides private implementation for GetRecoveryGroupReadinessSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetRecoveryGroupReadinessSummaryResponsePrivate object with public implementation \a q.
 */
GetRecoveryGroupReadinessSummaryResponsePrivate::GetRecoveryGroupReadinessSummaryResponsePrivate(
    GetRecoveryGroupReadinessSummaryResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetRecoveryGroupReadinessSummary response element from \a xml.
 */
void GetRecoveryGroupReadinessSummaryResponsePrivate::parseGetRecoveryGroupReadinessSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecoveryGroupReadinessSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
