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

#include "listinputsresponse.h"
#include "listinputsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputsResponse
 * \brief The ListInputsResponse class provides an interace for IoTEvents ListInputs responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listInputs
 */

/*!
 * Constructs a ListInputsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputsResponse::ListInputsResponse(
        const ListInputsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListInputsResponsePrivate(this), parent)
{
    setRequest(new ListInputsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputsRequest * ListInputsResponse::request() const
{
    Q_D(const ListInputsResponse);
    return static_cast<const ListInputsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListInputs \a response.
 */
void ListInputsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListInputsResponsePrivate
 * \brief The ListInputsResponsePrivate class provides private implementation for ListInputsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputsResponsePrivate object with public implementation \a q.
 */
ListInputsResponsePrivate::ListInputsResponsePrivate(
    ListInputsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListInputs response element from \a xml.
 */
void ListInputsResponsePrivate::parseListInputsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
