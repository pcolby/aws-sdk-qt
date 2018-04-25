/*
    Copyright 2013-2018 Paul Colby

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

#include "listsuitesresponse.h"
#include "listsuitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListSuitesResponse
 * \brief The ListSuitesResponse class provides an interace for DeviceFarm ListSuites responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listSuites
 */

/*!
 * Constructs a ListSuitesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSuitesResponse::ListSuitesResponse(
        const ListSuitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListSuitesResponsePrivate(this), parent)
{
    setRequest(new ListSuitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSuitesRequest * ListSuitesResponse::request() const
{
    Q_D(const ListSuitesResponse);
    return static_cast<const ListSuitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListSuites \a response.
 */
void ListSuitesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSuitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListSuitesResponsePrivate
 * \brief The ListSuitesResponsePrivate class provides private implementation for ListSuitesResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListSuitesResponsePrivate object with public implementation \a q.
 */
ListSuitesResponsePrivate::ListSuitesResponsePrivate(
    ListSuitesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListSuites response element from \a xml.
 */
void ListSuitesResponsePrivate::parseListSuitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSuitesResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
