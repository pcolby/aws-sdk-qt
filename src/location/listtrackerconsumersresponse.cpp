// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrackerconsumersresponse.h"
#include "listtrackerconsumersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListTrackerConsumersResponse
 * \brief The ListTrackerConsumersResponse class provides an interace for Location ListTrackerConsumers responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listTrackerConsumers
 */

/*!
 * Constructs a ListTrackerConsumersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrackerConsumersResponse::ListTrackerConsumersResponse(
        const ListTrackerConsumersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListTrackerConsumersResponsePrivate(this), parent)
{
    setRequest(new ListTrackerConsumersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrackerConsumersRequest * ListTrackerConsumersResponse::request() const
{
    Q_D(const ListTrackerConsumersResponse);
    return static_cast<const ListTrackerConsumersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListTrackerConsumers \a response.
 */
void ListTrackerConsumersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrackerConsumersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListTrackerConsumersResponsePrivate
 * \brief The ListTrackerConsumersResponsePrivate class provides private implementation for ListTrackerConsumersResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListTrackerConsumersResponsePrivate object with public implementation \a q.
 */
ListTrackerConsumersResponsePrivate::ListTrackerConsumersResponsePrivate(
    ListTrackerConsumersResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListTrackerConsumers response element from \a xml.
 */
void ListTrackerConsumersResponsePrivate::parseListTrackerConsumersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrackerConsumersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
