// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reservecontactresponse.h"
#include "reservecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ReserveContactResponse
 * \brief The ReserveContactResponse class provides an interace for GroundStation ReserveContact responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::reserveContact
 */

/*!
 * Constructs a ReserveContactResponse object for \a reply to \a request, with parent \a parent.
 */
ReserveContactResponse::ReserveContactResponse(
        const ReserveContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ReserveContactResponsePrivate(this), parent)
{
    setRequest(new ReserveContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReserveContactRequest * ReserveContactResponse::request() const
{
    Q_D(const ReserveContactResponse);
    return static_cast<const ReserveContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ReserveContact \a response.
 */
void ReserveContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReserveContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ReserveContactResponsePrivate
 * \brief The ReserveContactResponsePrivate class provides private implementation for ReserveContactResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ReserveContactResponsePrivate object with public implementation \a q.
 */
ReserveContactResponsePrivate::ReserveContactResponsePrivate(
    ReserveContactResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ReserveContact response element from \a xml.
 */
void ReserveContactResponsePrivate::parseReserveContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReserveContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
