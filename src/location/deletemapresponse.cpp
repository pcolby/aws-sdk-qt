// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemapresponse.h"
#include "deletemapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteMapResponse
 * \brief The DeleteMapResponse class provides an interace for Location DeleteMap responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteMap
 */

/*!
 * Constructs a DeleteMapResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMapResponse::DeleteMapResponse(
        const DeleteMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DeleteMapResponsePrivate(this), parent)
{
    setRequest(new DeleteMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMapRequest * DeleteMapResponse::request() const
{
    Q_D(const DeleteMapResponse);
    return static_cast<const DeleteMapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DeleteMap \a response.
 */
void DeleteMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DeleteMapResponsePrivate
 * \brief The DeleteMapResponsePrivate class provides private implementation for DeleteMapResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteMapResponsePrivate object with public implementation \a q.
 */
DeleteMapResponsePrivate::DeleteMapResponsePrivate(
    DeleteMapResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DeleteMap response element from \a xml.
 */
void DeleteMapResponsePrivate::parseDeleteMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
