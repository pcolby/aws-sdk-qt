// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const UpdateReservationResponse);
    return static_cast<const UpdateReservationRequest *>(d->request);
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
