// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgeofencesresponse.h"
#include "listgeofencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListGeofencesResponse
 * \brief The ListGeofencesResponse class provides an interace for Location ListGeofences responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listGeofences
 */

/*!
 * Constructs a ListGeofencesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeofencesResponse::ListGeofencesResponse(
        const ListGeofencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListGeofencesResponsePrivate(this), parent)
{
    setRequest(new ListGeofencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeofencesRequest * ListGeofencesResponse::request() const
{
    Q_D(const ListGeofencesResponse);
    return static_cast<const ListGeofencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListGeofences \a response.
 */
void ListGeofencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGeofencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListGeofencesResponsePrivate
 * \brief The ListGeofencesResponsePrivate class provides private implementation for ListGeofencesResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListGeofencesResponsePrivate object with public implementation \a q.
 */
ListGeofencesResponsePrivate::ListGeofencesResponsePrivate(
    ListGeofencesResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListGeofences response element from \a xml.
 */
void ListGeofencesResponsePrivate::parseListGeofencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeofencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
