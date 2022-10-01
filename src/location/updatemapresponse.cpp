// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemapresponse.h"
#include "updatemapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateMapResponse
 * \brief The UpdateMapResponse class provides an interace for Location UpdateMap responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateMap
 */

/*!
 * Constructs a UpdateMapResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMapResponse::UpdateMapResponse(
        const UpdateMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new UpdateMapResponsePrivate(this), parent)
{
    setRequest(new UpdateMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMapRequest * UpdateMapResponse::request() const
{
    Q_D(const UpdateMapResponse);
    return static_cast<const UpdateMapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location UpdateMap \a response.
 */
void UpdateMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::UpdateMapResponsePrivate
 * \brief The UpdateMapResponsePrivate class provides private implementation for UpdateMapResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateMapResponsePrivate object with public implementation \a q.
 */
UpdateMapResponsePrivate::UpdateMapResponsePrivate(
    UpdateMapResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location UpdateMap response element from \a xml.
 */
void UpdateMapResponsePrivate::parseUpdateMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
