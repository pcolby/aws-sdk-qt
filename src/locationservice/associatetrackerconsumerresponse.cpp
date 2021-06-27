/*
    Copyright 2013-2021 Paul Colby

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

#include "associatetrackerconsumerresponse.h"
#include "associatetrackerconsumerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::AssociateTrackerConsumerResponse
 * \brief The AssociateTrackerConsumerResponse class provides an interace for LocationService AssociateTrackerConsumer responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::associateTrackerConsumer
 */

/*!
 * Constructs a AssociateTrackerConsumerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateTrackerConsumerResponse::AssociateTrackerConsumerResponse(
        const AssociateTrackerConsumerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new AssociateTrackerConsumerResponsePrivate(this), parent)
{
    setRequest(new AssociateTrackerConsumerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateTrackerConsumerRequest * AssociateTrackerConsumerResponse::request() const
{
    return static_cast<const AssociateTrackerConsumerRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService AssociateTrackerConsumer \a response.
 */
void AssociateTrackerConsumerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateTrackerConsumerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::AssociateTrackerConsumerResponsePrivate
 * \brief The AssociateTrackerConsumerResponsePrivate class provides private implementation for AssociateTrackerConsumerResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a AssociateTrackerConsumerResponsePrivate object with public implementation \a q.
 */
AssociateTrackerConsumerResponsePrivate::AssociateTrackerConsumerResponsePrivate(
    AssociateTrackerConsumerResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService AssociateTrackerConsumer response element from \a xml.
 */
void AssociateTrackerConsumerResponsePrivate::parseAssociateTrackerConsumerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTrackerConsumerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
