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

#include "disassociatetrackerconsumerresponse.h"
#include "disassociatetrackerconsumerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DisassociateTrackerConsumerResponse
 * \brief The DisassociateTrackerConsumerResponse class provides an interace for LocationService DisassociateTrackerConsumer responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::disassociateTrackerConsumer
 */

/*!
 * Constructs a DisassociateTrackerConsumerResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateTrackerConsumerResponse::DisassociateTrackerConsumerResponse(
        const DisassociateTrackerConsumerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DisassociateTrackerConsumerResponsePrivate(this), parent)
{
    setRequest(new DisassociateTrackerConsumerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateTrackerConsumerRequest * DisassociateTrackerConsumerResponse::request() const
{
    return static_cast<const DisassociateTrackerConsumerRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService DisassociateTrackerConsumer \a response.
 */
void DisassociateTrackerConsumerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateTrackerConsumerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DisassociateTrackerConsumerResponsePrivate
 * \brief The DisassociateTrackerConsumerResponsePrivate class provides private implementation for DisassociateTrackerConsumerResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DisassociateTrackerConsumerResponsePrivate object with public implementation \a q.
 */
DisassociateTrackerConsumerResponsePrivate::DisassociateTrackerConsumerResponsePrivate(
    DisassociateTrackerConsumerResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DisassociateTrackerConsumer response element from \a xml.
 */
void DisassociateTrackerConsumerResponsePrivate::parseDisassociateTrackerConsumerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTrackerConsumerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
