// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
