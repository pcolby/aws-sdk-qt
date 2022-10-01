// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinsighteventsresponse.h"
#include "getinsighteventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightEventsResponse
 * \brief The GetInsightEventsResponse class provides an interace for XRay GetInsightEvents responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsightEvents
 */

/*!
 * Constructs a GetInsightEventsResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightEventsResponse::GetInsightEventsResponse(
        const GetInsightEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetInsightEventsResponsePrivate(this), parent)
{
    setRequest(new GetInsightEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightEventsRequest * GetInsightEventsResponse::request() const
{
    Q_D(const GetInsightEventsResponse);
    return static_cast<const GetInsightEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetInsightEvents \a response.
 */
void GetInsightEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetInsightEventsResponsePrivate
 * \brief The GetInsightEventsResponsePrivate class provides private implementation for GetInsightEventsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightEventsResponsePrivate object with public implementation \a q.
 */
GetInsightEventsResponsePrivate::GetInsightEventsResponsePrivate(
    GetInsightEventsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetInsightEvents response element from \a xml.
 */
void GetInsightEventsResponsePrivate::parseGetInsightEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
