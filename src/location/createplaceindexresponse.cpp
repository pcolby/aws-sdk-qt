// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createplaceindexresponse.h"
#include "createplaceindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreatePlaceIndexResponse
 * \brief The CreatePlaceIndexResponse class provides an interace for Location CreatePlaceIndex responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createPlaceIndex
 */

/*!
 * Constructs a CreatePlaceIndexResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePlaceIndexResponse::CreatePlaceIndexResponse(
        const CreatePlaceIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new CreatePlaceIndexResponsePrivate(this), parent)
{
    setRequest(new CreatePlaceIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePlaceIndexRequest * CreatePlaceIndexResponse::request() const
{
    Q_D(const CreatePlaceIndexResponse);
    return static_cast<const CreatePlaceIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location CreatePlaceIndex \a response.
 */
void CreatePlaceIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePlaceIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::CreatePlaceIndexResponsePrivate
 * \brief The CreatePlaceIndexResponsePrivate class provides private implementation for CreatePlaceIndexResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreatePlaceIndexResponsePrivate object with public implementation \a q.
 */
CreatePlaceIndexResponsePrivate::CreatePlaceIndexResponsePrivate(
    CreatePlaceIndexResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location CreatePlaceIndex response element from \a xml.
 */
void CreatePlaceIndexResponsePrivate::parseCreatePlaceIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlaceIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
