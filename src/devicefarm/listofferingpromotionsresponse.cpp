/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listofferingpromotionsresponse.h"
#include "listofferingpromotionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsResponse
 * \brief The ListOfferingPromotionsResponse class provides an interace for DeviceFarm ListOfferingPromotions responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listOfferingPromotions
 */

/*!
 * Constructs a ListOfferingPromotionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOfferingPromotionsResponse::ListOfferingPromotionsResponse(
        const ListOfferingPromotionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListOfferingPromotionsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingPromotionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOfferingPromotionsRequest * ListOfferingPromotionsResponse::request() const
{
    Q_D(const ListOfferingPromotionsResponse);
    return static_cast<const ListOfferingPromotionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListOfferingPromotions \a response.
 */
void ListOfferingPromotionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListOfferingPromotionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListOfferingPromotionsResponsePrivate
 * \brief The ListOfferingPromotionsResponsePrivate class provides private implementation for ListOfferingPromotionsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListOfferingPromotionsResponsePrivate object with public implementation \a q.
 */
ListOfferingPromotionsResponsePrivate::ListOfferingPromotionsResponsePrivate(
    ListOfferingPromotionsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListOfferingPromotions response element from \a xml.
 */
void ListOfferingPromotionsResponsePrivate::parseListOfferingPromotionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingPromotionsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
