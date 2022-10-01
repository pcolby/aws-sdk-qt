// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  The AWS IoT 1-Click Projects API
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
    //Q_D(ListPlacementsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
