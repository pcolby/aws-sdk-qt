// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrackersresponse.h"
#include "listtrackersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListTrackersResponse
 * \brief The ListTrackersResponse class provides an interace for Location ListTrackers responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listTrackers
 */

/*!
 * Constructs a ListTrackersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrackersResponse::ListTrackersResponse(
        const ListTrackersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListTrackersResponsePrivate(this), parent)
{
    setRequest(new ListTrackersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrackersRequest * ListTrackersResponse::request() const
{
    Q_D(const ListTrackersResponse);
    return static_cast<const ListTrackersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListTrackers \a response.
 */
void ListTrackersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrackersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListTrackersResponsePrivate
 * \brief The ListTrackersResponsePrivate class provides private implementation for ListTrackersResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListTrackersResponsePrivate object with public implementation \a q.
 */
ListTrackersResponsePrivate::ListTrackersResponsePrivate(
    ListTrackersResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListTrackers response element from \a xml.
 */
void ListTrackersResponsePrivate::parseListTrackersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrackersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
