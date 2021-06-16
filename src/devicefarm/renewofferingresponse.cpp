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

#include "renewofferingresponse.h"
#include "renewofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::RenewOfferingResponse
 * \brief The RenewOfferingResponse class provides an interace for DeviceFarm RenewOffering responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::renewOffering
 */

/*!
 * Constructs a RenewOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
RenewOfferingResponse::RenewOfferingResponse(
        const RenewOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new RenewOfferingResponsePrivate(this), parent)
{
    setRequest(new RenewOfferingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RenewOfferingRequest * RenewOfferingResponse::request() const
{
    Q_D(const RenewOfferingResponse);
    return static_cast<const RenewOfferingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm RenewOffering \a response.
 */
void RenewOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RenewOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::RenewOfferingResponsePrivate
 * \brief The RenewOfferingResponsePrivate class provides private implementation for RenewOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a RenewOfferingResponsePrivate object with public implementation \a q.
 */
RenewOfferingResponsePrivate::RenewOfferingResponsePrivate(
    RenewOfferingResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm RenewOffering response element from \a xml.
 */
void RenewOfferingResponsePrivate::parseRenewOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RenewOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
