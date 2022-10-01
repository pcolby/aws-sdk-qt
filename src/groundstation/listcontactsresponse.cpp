// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactsresponse.h"
#include "listcontactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListContactsResponse
 * \brief The ListContactsResponse class provides an interace for GroundStation ListContacts responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listContacts
 */

/*!
 * Constructs a ListContactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContactsResponse::ListContactsResponse(
        const ListContactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListContactsResponsePrivate(this), parent)
{
    setRequest(new ListContactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContactsRequest * ListContactsResponse::request() const
{
    Q_D(const ListContactsResponse);
    return static_cast<const ListContactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ListContacts \a response.
 */
void ListContactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListContactsResponsePrivate
 * \brief The ListContactsResponsePrivate class provides private implementation for ListContactsResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListContactsResponsePrivate object with public implementation \a q.
 */
ListContactsResponsePrivate::ListContactsResponsePrivate(
    ListContactsResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListContacts response element from \a xml.
 */
void ListContactsResponsePrivate::parseListContactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
