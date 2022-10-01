// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateplaceindexresponse.h"
#include "updateplaceindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdatePlaceIndexResponse
 * \brief The UpdatePlaceIndexResponse class provides an interace for Location UpdatePlaceIndex responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updatePlaceIndex
 */

/*!
 * Constructs a UpdatePlaceIndexResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePlaceIndexResponse::UpdatePlaceIndexResponse(
        const UpdatePlaceIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new UpdatePlaceIndexResponsePrivate(this), parent)
{
    setRequest(new UpdatePlaceIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePlaceIndexRequest * UpdatePlaceIndexResponse::request() const
{
    Q_D(const UpdatePlaceIndexResponse);
    return static_cast<const UpdatePlaceIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location UpdatePlaceIndex \a response.
 */
void UpdatePlaceIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePlaceIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::UpdatePlaceIndexResponsePrivate
 * \brief The UpdatePlaceIndexResponsePrivate class provides private implementation for UpdatePlaceIndexResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdatePlaceIndexResponsePrivate object with public implementation \a q.
 */
UpdatePlaceIndexResponsePrivate::UpdatePlaceIndexResponsePrivate(
    UpdatePlaceIndexResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location UpdatePlaceIndex response element from \a xml.
 */
void UpdatePlaceIndexResponsePrivate::parseUpdatePlaceIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePlaceIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
