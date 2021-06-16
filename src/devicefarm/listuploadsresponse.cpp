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

#include "listuploadsresponse.h"
#include "listuploadsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListUploadsResponse
 * \brief The ListUploadsResponse class provides an interace for DeviceFarm ListUploads responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listUploads
 */

/*!
 * Constructs a ListUploadsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUploadsResponse::ListUploadsResponse(
        const ListUploadsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListUploadsResponsePrivate(this), parent)
{
    setRequest(new ListUploadsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUploadsRequest * ListUploadsResponse::request() const
{
    Q_D(const ListUploadsResponse);
    return static_cast<const ListUploadsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListUploads \a response.
 */
void ListUploadsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUploadsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListUploadsResponsePrivate
 * \brief The ListUploadsResponsePrivate class provides private implementation for ListUploadsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListUploadsResponsePrivate object with public implementation \a q.
 */
ListUploadsResponsePrivate::ListUploadsResponsePrivate(
    ListUploadsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListUploads response element from \a xml.
 */
void ListUploadsResponsePrivate::parseListUploadsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUploadsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
