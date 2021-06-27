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

#include "deletedetectormodelresponse.h"
#include "deletedetectormodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteDetectorModelResponse
 * \brief The DeleteDetectorModelResponse class provides an interace for IoTEvents DeleteDetectorModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::deleteDetectorModel
 */

/*!
 * Constructs a DeleteDetectorModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDetectorModelResponse::DeleteDetectorModelResponse(
        const DeleteDetectorModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DeleteDetectorModelResponsePrivate(this), parent)
{
    setRequest(new DeleteDetectorModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDetectorModelRequest * DeleteDetectorModelResponse::request() const
{
    return static_cast<const DeleteDetectorModelRequest *>(IoTEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTEvents DeleteDetectorModel \a response.
 */
void DeleteDetectorModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDetectorModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DeleteDetectorModelResponsePrivate
 * \brief The DeleteDetectorModelResponsePrivate class provides private implementation for DeleteDetectorModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteDetectorModelResponsePrivate object with public implementation \a q.
 */
DeleteDetectorModelResponsePrivate::DeleteDetectorModelResponsePrivate(
    DeleteDetectorModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DeleteDetectorModel response element from \a xml.
 */
void DeleteDetectorModelResponsePrivate::parseDeleteDetectorModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDetectorModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
