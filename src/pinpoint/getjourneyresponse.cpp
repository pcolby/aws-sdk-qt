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
    return static_cast<const GetJourneyRequest *>(PinpointResponse::request());
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
