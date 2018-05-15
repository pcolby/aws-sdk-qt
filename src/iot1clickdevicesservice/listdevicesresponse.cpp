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

#include "listdevicesresponse.h"
#include "listdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::ListDevicesResponse
 * \brief The ListDevicesResponse class provides an interace for IoT1ClickDevicesService ListDevices responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Stub
 *
 * \sa IoT1ClickDevicesServiceClient::listDevices
 */

/*!
 * Constructs a ListDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicesResponse::ListDevicesResponse(
        const ListDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new ListDevicesResponsePrivate(this), parent)
{
    setRequest(new ListDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicesRequest * ListDevicesResponse::request() const
{
    Q_D(const ListDevicesResponse);
    return static_cast<const ListDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevicesService ListDevices \a response.
 */
void ListDevicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::ListDevicesResponsePrivate
 * \brief The ListDevicesResponsePrivate class provides private implementation for ListDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a ListDevicesResponsePrivate object with public implementation \a q.
 */
ListDevicesResponsePrivate::ListDevicesResponsePrivate(
    ListDevicesResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService ListDevices response element from \a xml.
 */
void ListDevicesResponsePrivate::parseListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesResponse"));
    /// @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
