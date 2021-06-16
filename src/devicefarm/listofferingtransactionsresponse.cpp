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

#include "listofferingtransactionsresponse.h"
#include "listofferingtransactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingTransactionsResponse
 * \brief The ListOfferingTransactionsResponse class provides an interace for DeviceFarm ListOfferingTransactions responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listOfferingTransactions
 */

/*!
 * Constructs a ListOfferingTransactionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOfferingTransactionsResponse::ListOfferingTransactionsResponse(
        const ListOfferingTransactionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListOfferingTransactionsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingTransactionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOfferingTransactionsRequest * ListOfferingTransactionsResponse::request() const
{
    Q_D(const ListOfferingTransactionsResponse);
    return static_cast<const ListOfferingTransactionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListOfferingTransactions \a response.
 */
void ListOfferingTransactionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOfferingTransactionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListOfferingTransactionsResponsePrivate
 * \brief The ListOfferingTransactionsResponsePrivate class provides private implementation for ListOfferingTransactionsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListOfferingTransactionsResponsePrivate object with public implementation \a q.
 */
ListOfferingTransactionsResponsePrivate::ListOfferingTransactionsResponsePrivate(
    ListOfferingTransactionsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListOfferingTransactions response element from \a xml.
 */
void ListOfferingTransactionsResponsePrivate::parseListOfferingTransactionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingTransactionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
