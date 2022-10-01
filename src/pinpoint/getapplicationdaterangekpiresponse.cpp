// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationdaterangekpiresponse.h"
#include "getapplicationdaterangekpiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApplicationDateRangeKpiResponse
 * \brief The GetApplicationDateRangeKpiResponse class provides an interace for Pinpoint GetApplicationDateRangeKpi responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApplicationDateRangeKpi
 */

/*!
 * Constructs a GetApplicationDateRangeKpiResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationDateRangeKpiResponse::GetApplicationDateRangeKpiResponse(
        const GetApplicationDateRangeKpiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApplicationDateRangeKpiResponsePrivate(this), parent)
{
    setRequest(new GetApplicationDateRangeKpiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationDateRangeKpiRequest * GetApplicationDateRangeKpiResponse::request() const
{
    Q_D(const GetApplicationDateRangeKpiResponse);
    return static_cast<const GetApplicationDateRangeKpiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApplicationDateRangeKpi \a response.
 */
void GetApplicationDateRangeKpiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationDateRangeKpiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApplicationDateRangeKpiResponsePrivate
 * \brief The GetApplicationDateRangeKpiResponsePrivate class provides private implementation for GetApplicationDateRangeKpiResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApplicationDateRangeKpiResponsePrivate object with public implementation \a q.
 */
GetApplicationDateRangeKpiResponsePrivate::GetApplicationDateRangeKpiResponsePrivate(
    GetApplicationDateRangeKpiResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApplicationDateRangeKpi response element from \a xml.
 */
void GetApplicationDateRangeKpiResponsePrivate::parseGetApplicationDateRangeKpiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationDateRangeKpiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
