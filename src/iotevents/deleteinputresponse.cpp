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

#include "deleteinputresponse.h"
#include "deleteinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteInputResponse
 * \brief The DeleteInputResponse class provides an interace for IoTEvents DeleteInput responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::deleteInput
 */

/*!
 * Constructs a DeleteInputResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInputResponse::DeleteInputResponse(
        const DeleteInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DeleteInputResponsePrivate(this), parent)
{
    setRequest(new DeleteInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInputRequest * DeleteInputResponse::request() const
{
    Q_D(const DeleteInputResponse);
    return static_cast<const DeleteInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents DeleteInput \a response.
 */
void DeleteInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DeleteInputResponsePrivate
 * \brief The DeleteInputResponsePrivate class provides private implementation for DeleteInputResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteInputResponsePrivate object with public implementation \a q.
 */
DeleteInputResponsePrivate::DeleteInputResponsePrivate(
    DeleteInputResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DeleteInput response element from \a xml.
 */
void DeleteInputResponsePrivate::parseDeleteInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
