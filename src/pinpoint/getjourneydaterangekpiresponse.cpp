// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjourneydaterangekpiresponse.h"
#include "getjourneydaterangekpiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyDateRangeKpiResponse
 * \brief The GetJourneyDateRangeKpiResponse class provides an interace for Pinpoint GetJourneyDateRangeKpi responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourneyDateRangeKpi
 */

/*!
 * Constructs a GetJourneyDateRangeKpiResponse object for \a reply to \a request, with parent \a parent.
 */
GetJourneyDateRangeKpiResponse::GetJourneyDateRangeKpiResponse(
        const GetJourneyDateRangeKpiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetJourneyDateRangeKpiResponsePrivate(this), parent)
{
    setRequest(new GetJourneyDateRangeKpiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJourneyDateRangeKpiRequest * GetJourneyDateRangeKpiResponse::request() const
{
    Q_D(const GetJourneyDateRangeKpiResponse);
    return static_cast<const GetJourneyDateRangeKpiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetJourneyDateRangeKpi \a response.
 */
void GetJourneyDateRangeKpiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJourneyDateRangeKpiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetJourneyDateRangeKpiResponsePrivate
 * \brief The GetJourneyDateRangeKpiResponsePrivate class provides private implementation for GetJourneyDateRangeKpiResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyDateRangeKpiResponsePrivate object with public implementation \a q.
 */
GetJourneyDateRangeKpiResponsePrivate::GetJourneyDateRangeKpiResponsePrivate(
    GetJourneyDateRangeKpiResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetJourneyDateRangeKpi response element from \a xml.
 */
void GetJourneyDateRangeKpiResponsePrivate::parseGetJourneyDateRangeKpiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJourneyDateRangeKpiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
