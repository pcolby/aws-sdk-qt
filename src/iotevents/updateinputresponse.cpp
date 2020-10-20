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

#include "updateinputresponse.h"
#include "updateinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::UpdateInputResponse
 * \brief The UpdateInputResponse class provides an interace for IoTEvents UpdateInput responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::updateInput
 */

/*!
 * Constructs a UpdateInputResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInputResponse::UpdateInputResponse(
        const UpdateInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new UpdateInputResponsePrivate(this), parent)
{
    setRequest(new UpdateInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInputRequest * UpdateInputResponse::request() const
{
    Q_D(const UpdateInputResponse);
    return static_cast<const UpdateInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents UpdateInput \a response.
 */
void UpdateInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::UpdateInputResponsePrivate
 * \brief The UpdateInputResponsePrivate class provides private implementation for UpdateInputResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a UpdateInputResponsePrivate object with public implementation \a q.
 */
UpdateInputResponsePrivate::UpdateInputResponsePrivate(
    UpdateInputResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents UpdateInput response element from \a xml.
 */
void UpdateInputResponsePrivate::parseUpdateInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
