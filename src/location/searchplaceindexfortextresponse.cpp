// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchplaceindexfortextresponse.h"
#include "searchplaceindexfortextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::SearchPlaceIndexForTextResponse
 * \brief The SearchPlaceIndexForTextResponse class provides an interace for Location SearchPlaceIndexForText responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::searchPlaceIndexForText
 */

/*!
 * Constructs a SearchPlaceIndexForTextResponse object for \a reply to \a request, with parent \a parent.
 */
SearchPlaceIndexForTextResponse::SearchPlaceIndexForTextResponse(
        const SearchPlaceIndexForTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new SearchPlaceIndexForTextResponsePrivate(this), parent)
{
    setRequest(new SearchPlaceIndexForTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchPlaceIndexForTextRequest * SearchPlaceIndexForTextResponse::request() const
{
    Q_D(const SearchPlaceIndexForTextResponse);
    return static_cast<const SearchPlaceIndexForTextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location SearchPlaceIndexForText \a response.
 */
void SearchPlaceIndexForTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchPlaceIndexForTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::SearchPlaceIndexForTextResponsePrivate
 * \brief The SearchPlaceIndexForTextResponsePrivate class provides private implementation for SearchPlaceIndexForTextResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a SearchPlaceIndexForTextResponsePrivate object with public implementation \a q.
 */
SearchPlaceIndexForTextResponsePrivate::SearchPlaceIndexForTextResponsePrivate(
    SearchPlaceIndexForTextResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location SearchPlaceIndexForText response element from \a xml.
 */
void SearchPlaceIndexForTextResponsePrivate::parseSearchPlaceIndexForTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchPlaceIndexForTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
