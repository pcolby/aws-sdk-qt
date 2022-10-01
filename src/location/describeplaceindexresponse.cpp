// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeplaceindexresponse.h"
#include "describeplaceindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribePlaceIndexResponse
 * \brief The DescribePlaceIndexResponse class provides an interace for Location DescribePlaceIndex responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describePlaceIndex
 */

/*!
 * Constructs a DescribePlaceIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePlaceIndexResponse::DescribePlaceIndexResponse(
        const DescribePlaceIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DescribePlaceIndexResponsePrivate(this), parent)
{
    setRequest(new DescribePlaceIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePlaceIndexRequest * DescribePlaceIndexResponse::request() const
{
    Q_D(const DescribePlaceIndexResponse);
    return static_cast<const DescribePlaceIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DescribePlaceIndex \a response.
 */
void DescribePlaceIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePlaceIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DescribePlaceIndexResponsePrivate
 * \brief The DescribePlaceIndexResponsePrivate class provides private implementation for DescribePlaceIndexResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribePlaceIndexResponsePrivate object with public implementation \a q.
 */
DescribePlaceIndexResponsePrivate::DescribePlaceIndexResponsePrivate(
    DescribePlaceIndexResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DescribePlaceIndex response element from \a xml.
 */
void DescribePlaceIndexResponsePrivate::parseDescribePlaceIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePlaceIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
