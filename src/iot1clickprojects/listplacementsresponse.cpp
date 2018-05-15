/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listplacementsresponse.h"
#include "listplacementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::ListPlacementsResponse
 * \brief The ListPlacementsResponse class provides an interace for IoT1ClickProjects ListPlacements responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::listPlacements
 */

/*!
 * Constructs a ListPlacementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPlacementsResponse::ListPlacementsResponse(
        const ListPlacementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new ListPlacementsResponsePrivate(this), parent)
{
    setRequest(new ListPlacementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPlacementsRequest * ListPlacementsResponse::request() const
{
    Q_D(const ListPlacementsResponse);
    return static_cast<const ListPlacementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects ListPlacements \a response.
 */
void ListPlacementsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPlacementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::ListPlacementsResponsePrivate
 * \brief The ListPlacementsResponsePrivate class provides private implementation for ListPlacementsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a ListPlacementsResponsePrivate object with public implementation \a q.
 */
ListPlacementsResponsePrivate::ListPlacementsResponsePrivate(
    ListPlacementsResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects ListPlacements response element from \a xml.
 */
void ListPlacementsResponsePrivate::parseListPlacementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPlacementsResponse"));
    /// @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
