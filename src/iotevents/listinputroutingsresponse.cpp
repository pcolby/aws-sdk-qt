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

#include "listinputroutingsresponse.h"
#include "listinputroutingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsResponse
 * \brief The ListInputRoutingsResponse class provides an interace for IoTEvents ListInputRoutings responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listInputRoutings
 */

/*!
 * Constructs a ListInputRoutingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputRoutingsResponse::ListInputRoutingsResponse(
        const ListInputRoutingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListInputRoutingsResponsePrivate(this), parent)
{
    setRequest(new ListInputRoutingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputRoutingsRequest * ListInputRoutingsResponse::request() const
{
    Q_D(const ListInputRoutingsResponse);
    return static_cast<const ListInputRoutingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListInputRoutings \a response.
 */
void ListInputRoutingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputRoutingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsResponsePrivate
 * \brief The ListInputRoutingsResponsePrivate class provides private implementation for ListInputRoutingsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputRoutingsResponsePrivate object with public implementation \a q.
 */
ListInputRoutingsResponsePrivate::ListInputRoutingsResponsePrivate(
    ListInputRoutingsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListInputRoutings response element from \a xml.
 */
void ListInputRoutingsResponsePrivate::parseListInputRoutingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputRoutingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
