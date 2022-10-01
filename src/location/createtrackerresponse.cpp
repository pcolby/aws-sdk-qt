// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrackerresponse.h"
#include "createtrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateTrackerResponse
 * \brief The CreateTrackerResponse class provides an interace for Location CreateTracker responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createTracker
 */

/*!
 * Constructs a CreateTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrackerResponse::CreateTrackerResponse(
        const CreateTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new CreateTrackerResponsePrivate(this), parent)
{
    setRequest(new CreateTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrackerRequest * CreateTrackerResponse::request() const
{
    Q_D(const CreateTrackerResponse);
    return static_cast<const CreateTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location CreateTracker \a response.
 */
void CreateTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::CreateTrackerResponsePrivate
 * \brief The CreateTrackerResponsePrivate class provides private implementation for CreateTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateTrackerResponsePrivate object with public implementation \a q.
 */
CreateTrackerResponsePrivate::CreateTrackerResponsePrivate(
    CreateTrackerResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location CreateTracker response element from \a xml.
 */
void CreateTrackerResponsePrivate::parseCreateTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
