// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetrackerresponse.h"
#include "deletetrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteTrackerResponse
 * \brief The DeleteTrackerResponse class provides an interace for Location DeleteTracker responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteTracker
 */

/*!
 * Constructs a DeleteTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrackerResponse::DeleteTrackerResponse(
        const DeleteTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DeleteTrackerResponsePrivate(this), parent)
{
    setRequest(new DeleteTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrackerRequest * DeleteTrackerResponse::request() const
{
    Q_D(const DeleteTrackerResponse);
    return static_cast<const DeleteTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DeleteTracker \a response.
 */
void DeleteTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DeleteTrackerResponsePrivate
 * \brief The DeleteTrackerResponsePrivate class provides private implementation for DeleteTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteTrackerResponsePrivate object with public implementation \a q.
 */
DeleteTrackerResponsePrivate::DeleteTrackerResponsePrivate(
    DeleteTrackerResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DeleteTracker response element from \a xml.
 */
void DeleteTrackerResponsePrivate::parseDeleteTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
