// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrackerresponse.h"
#include "updatetrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateTrackerResponse
 * \brief The UpdateTrackerResponse class provides an interace for Location UpdateTracker responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateTracker
 */

/*!
 * Constructs a UpdateTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrackerResponse::UpdateTrackerResponse(
        const UpdateTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new UpdateTrackerResponsePrivate(this), parent)
{
    setRequest(new UpdateTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrackerRequest * UpdateTrackerResponse::request() const
{
    Q_D(const UpdateTrackerResponse);
    return static_cast<const UpdateTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location UpdateTracker \a response.
 */
void UpdateTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::UpdateTrackerResponsePrivate
 * \brief The UpdateTrackerResponsePrivate class provides private implementation for UpdateTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateTrackerResponsePrivate object with public implementation \a q.
 */
UpdateTrackerResponsePrivate::UpdateTrackerResponsePrivate(
    UpdateTrackerResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location UpdateTracker response element from \a xml.
 */
void UpdateTrackerResponsePrivate::parseUpdateTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
