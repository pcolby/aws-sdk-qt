// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegeofencecollectionresponse.h"
#include "describegeofencecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeGeofenceCollectionResponse
 * \brief The DescribeGeofenceCollectionResponse class provides an interace for Location DescribeGeofenceCollection responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeGeofenceCollection
 */

/*!
 * Constructs a DescribeGeofenceCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGeofenceCollectionResponse::DescribeGeofenceCollectionResponse(
        const DescribeGeofenceCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DescribeGeofenceCollectionResponsePrivate(this), parent)
{
    setRequest(new DescribeGeofenceCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGeofenceCollectionRequest * DescribeGeofenceCollectionResponse::request() const
{
    Q_D(const DescribeGeofenceCollectionResponse);
    return static_cast<const DescribeGeofenceCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DescribeGeofenceCollection \a response.
 */
void DescribeGeofenceCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGeofenceCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DescribeGeofenceCollectionResponsePrivate
 * \brief The DescribeGeofenceCollectionResponsePrivate class provides private implementation for DescribeGeofenceCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeGeofenceCollectionResponsePrivate object with public implementation \a q.
 */
DescribeGeofenceCollectionResponsePrivate::DescribeGeofenceCollectionResponsePrivate(
    DescribeGeofenceCollectionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DescribeGeofenceCollection response element from \a xml.
 */
void DescribeGeofenceCollectionResponsePrivate::parseDescribeGeofenceCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGeofenceCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
