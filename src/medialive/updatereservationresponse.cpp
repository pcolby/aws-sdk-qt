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

#include "updatereservationresponse.h"
#include "updatereservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateReservationResponse
 * \brief The UpdateReservationResponse class provides an interace for MediaLive UpdateReservation responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateReservation
 */

/*!
 * Constructs a UpdateReservationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReservationResponse::UpdateReservationResponse(
        const UpdateReservationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateReservationResponsePrivate(this), parent)
{
    setRequest(new UpdateReservationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReservationRequest * UpdateReservationResponse::request() const
{
    return static_cast<const UpdateReservationRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateReservation \a response.
 */
void UpdateReservationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReservationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateReservationResponsePrivate
 * \brief The UpdateReservationResponsePrivate class provides private implementation for UpdateReservationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateReservationResponsePrivate object with public implementation \a q.
 */
UpdateReservationResponsePrivate::UpdateReservationResponsePrivate(
    UpdateReservationResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateReservation response element from \a xml.
 */
void UpdateReservationResponsePrivate::parseUpdateReservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReservationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
