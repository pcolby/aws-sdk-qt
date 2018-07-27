/*
    Copyright 2013-2018 Paul Colby

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

#include "deletereservationresponse.h"
#include "deletereservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteReservationResponse
 * \brief The DeleteReservationResponse class provides an interace for MediaLive DeleteReservation responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteReservation
 */

/*!
 * Constructs a DeleteReservationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReservationResponse::DeleteReservationResponse(
        const DeleteReservationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteReservationResponsePrivate(this), parent)
{
    setRequest(new DeleteReservationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReservationRequest * DeleteReservationResponse::request() const
{
    Q_D(const DeleteReservationResponse);
    return static_cast<const DeleteReservationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteReservation \a response.
 */
void DeleteReservationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReservationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteReservationResponsePrivate
 * \brief The DeleteReservationResponsePrivate class provides private implementation for DeleteReservationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteReservationResponsePrivate object with public implementation \a q.
 */
DeleteReservationResponsePrivate::DeleteReservationResponsePrivate(
    DeleteReservationResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteReservation response element from \a xml.
 */
void DeleteReservationResponsePrivate::parseDeleteReservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReservationResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
