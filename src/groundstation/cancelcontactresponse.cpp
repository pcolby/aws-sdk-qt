// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelcontactresponse.h"
#include "cancelcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CancelContactResponse
 * \brief The CancelContactResponse class provides an interace for GroundStation CancelContact responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::cancelContact
 */

/*!
 * Constructs a CancelContactResponse object for \a reply to \a request, with parent \a parent.
 */
CancelContactResponse::CancelContactResponse(
        const CancelContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new CancelContactResponsePrivate(this), parent)
{
    setRequest(new CancelContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelContactRequest * CancelContactResponse::request() const
{
    Q_D(const CancelContactResponse);
    return static_cast<const CancelContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation CancelContact \a response.
 */
void CancelContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::CancelContactResponsePrivate
 * \brief The CancelContactResponsePrivate class provides private implementation for CancelContactResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CancelContactResponsePrivate object with public implementation \a q.
 */
CancelContactResponsePrivate::CancelContactResponsePrivate(
    CancelContactResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation CancelContact response element from \a xml.
 */
void CancelContactResponsePrivate::parseCancelContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
