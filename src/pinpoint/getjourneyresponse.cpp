// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjourneyresponse.h"
#include "getjourneyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyResponse
 * \brief The GetJourneyResponse class provides an interace for Pinpoint GetJourney responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourney
 */

/*!
 * Constructs a GetJourneyResponse object for \a reply to \a request, with parent \a parent.
 */
GetJourneyResponse::GetJourneyResponse(
        const GetJourneyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetJourneyResponsePrivate(this), parent)
{
    setRequest(new GetJourneyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJourneyRequest * GetJourneyResponse::request() const
{
    Q_D(const GetJourneyResponse);
    return static_cast<const GetJourneyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetJourney \a response.
 */
void GetJourneyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJourneyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetJourneyResponsePrivate
 * \brief The GetJourneyResponsePrivate class provides private implementation for GetJourneyResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyResponsePrivate object with public implementation \a q.
 */
GetJourneyResponsePrivate::GetJourneyResponsePrivate(
    GetJourneyResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetJourney response element from \a xml.
 */
void GetJourneyResponsePrivate::parseGetJourneyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJourneyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
