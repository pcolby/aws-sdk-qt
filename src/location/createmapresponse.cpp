// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmapresponse.h"
#include "createmapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateMapResponse
 * \brief The CreateMapResponse class provides an interace for Location CreateMap responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createMap
 */

/*!
 * Constructs a CreateMapResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMapResponse::CreateMapResponse(
        const CreateMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new CreateMapResponsePrivate(this), parent)
{
    setRequest(new CreateMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMapRequest * CreateMapResponse::request() const
{
    Q_D(const CreateMapResponse);
    return static_cast<const CreateMapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location CreateMap \a response.
 */
void CreateMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::CreateMapResponsePrivate
 * \brief The CreateMapResponsePrivate class provides private implementation for CreateMapResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateMapResponsePrivate object with public implementation \a q.
 */
CreateMapResponsePrivate::CreateMapResponsePrivate(
    CreateMapResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location CreateMap response element from \a xml.
 */
void CreateMapResponsePrivate::parseCreateMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
