// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
