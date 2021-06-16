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

#include "createdetectormodelresponse.h"
#include "createdetectormodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::CreateDetectorModelResponse
 * \brief The CreateDetectorModelResponse class provides an interace for IoTEvents CreateDetectorModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::createDetectorModel
 */

/*!
 * Constructs a CreateDetectorModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDetectorModelResponse::CreateDetectorModelResponse(
        const CreateDetectorModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new CreateDetectorModelResponsePrivate(this), parent)
{
    setRequest(new CreateDetectorModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDetectorModelRequest * CreateDetectorModelResponse::request() const
{
    Q_D(const CreateDetectorModelResponse);
    return static_cast<const CreateDetectorModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents CreateDetectorModel \a response.
 */
void CreateDetectorModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDetectorModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::CreateDetectorModelResponsePrivate
 * \brief The CreateDetectorModelResponsePrivate class provides private implementation for CreateDetectorModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a CreateDetectorModelResponsePrivate object with public implementation \a q.
 */
CreateDetectorModelResponsePrivate::CreateDetectorModelResponsePrivate(
    CreateDetectorModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents CreateDetectorModel response element from \a xml.
 */
void CreateDetectorModelResponsePrivate::parseCreateDetectorModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDetectorModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
