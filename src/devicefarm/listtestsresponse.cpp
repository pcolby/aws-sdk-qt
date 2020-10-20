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

#include "listtestsresponse.h"
#include "listtestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestsResponse
 * \brief The ListTestsResponse class provides an interace for DeviceFarm ListTests responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listTests
 */

/*!
 * Constructs a ListTestsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTestsResponse::ListTestsResponse(
        const ListTestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListTestsResponsePrivate(this), parent)
{
    setRequest(new ListTestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTestsRequest * ListTestsResponse::request() const
{
    Q_D(const ListTestsResponse);
    return static_cast<const ListTestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListTests \a response.
 */
void ListTestsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListTestsResponsePrivate
 * \brief The ListTestsResponsePrivate class provides private implementation for ListTestsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestsResponsePrivate object with public implementation \a q.
 */
ListTestsResponsePrivate::ListTestsResponsePrivate(
    ListTestsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListTests response element from \a xml.
 */
void ListTestsResponsePrivate::parseListTestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTestsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
