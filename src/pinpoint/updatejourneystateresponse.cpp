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

#include "updatejourneystateresponse.h"
#include "updatejourneystateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateJourneyStateResponse
 * \brief The UpdateJourneyStateResponse class provides an interace for Pinpoint UpdateJourneyState responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateJourneyState
 */

/*!
 * Constructs a UpdateJourneyStateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJourneyStateResponse::UpdateJourneyStateResponse(
        const UpdateJourneyStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateJourneyStateResponsePrivate(this), parent)
{
    setRequest(new UpdateJourneyStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJourneyStateRequest * UpdateJourneyStateResponse::request() const
{
    return static_cast<const UpdateJourneyStateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateJourneyState \a response.
 */
void UpdateJourneyStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJourneyStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateJourneyStateResponsePrivate
 * \brief The UpdateJourneyStateResponsePrivate class provides private implementation for UpdateJourneyStateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateJourneyStateResponsePrivate object with public implementation \a q.
 */
UpdateJourneyStateResponsePrivate::UpdateJourneyStateResponsePrivate(
    UpdateJourneyStateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateJourneyState response element from \a xml.
 */
void UpdateJourneyStateResponsePrivate::parseUpdateJourneyStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJourneyStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
