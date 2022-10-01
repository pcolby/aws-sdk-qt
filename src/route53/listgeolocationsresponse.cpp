// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgeolocationsresponse.h"
#include "listgeolocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListGeoLocationsResponse
 * \brief The ListGeoLocationsResponse class provides an interace for Route53 ListGeoLocations responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listGeoLocations
 */

/*!
 * Constructs a ListGeoLocationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeoLocationsResponse::ListGeoLocationsResponse(
        const ListGeoLocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListGeoLocationsResponsePrivate(this), parent)
{
    setRequest(new ListGeoLocationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeoLocationsRequest * ListGeoLocationsResponse::request() const
{
    Q_D(const ListGeoLocationsResponse);
    return static_cast<const ListGeoLocationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListGeoLocations \a response.
 */
void ListGeoLocationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGeoLocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListGeoLocationsResponsePrivate
 * \brief The ListGeoLocationsResponsePrivate class provides private implementation for ListGeoLocationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListGeoLocationsResponsePrivate object with public implementation \a q.
 */
ListGeoLocationsResponsePrivate::ListGeoLocationsResponsePrivate(
    ListGeoLocationsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListGeoLocations response element from \a xml.
 */
void ListGeoLocationsResponsePrivate::parseListGeoLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeoLocationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
