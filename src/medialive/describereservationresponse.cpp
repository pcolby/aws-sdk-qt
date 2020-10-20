/*
    Copyright 2013-2020 Paul Colby

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

#include "describereservationresponse.h"
#include "describereservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeReservationResponse
 * \brief The DescribeReservationResponse class provides an interace for MediaLive DescribeReservation responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeReservation
 */

/*!
 * Constructs a DescribeReservationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservationResponse::DescribeReservationResponse(
        const DescribeReservationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeReservationResponsePrivate(this), parent)
{
    setRequest(new DescribeReservationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservationRequest * DescribeReservationResponse::request() const
{
    Q_D(const DescribeReservationResponse);
    return static_cast<const DescribeReservationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeReservation \a response.
 */
void DescribeReservationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeReservationResponsePrivate
 * \brief The DescribeReservationResponsePrivate class provides private implementation for DescribeReservationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeReservationResponsePrivate object with public implementation \a q.
 */
DescribeReservationResponsePrivate::DescribeReservationResponsePrivate(
    DescribeReservationResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeReservation response element from \a xml.
 */
void DescribeReservationResponsePrivate::parseDescribeReservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
