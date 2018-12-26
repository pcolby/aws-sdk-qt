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

#include "createotaupdateresponse.h"
#include "createotaupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateOTAUpdateResponse
 * \brief The CreateOTAUpdateResponse class provides an interace for IoT CreateOTAUpdate responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::createOTAUpdate
 */

/*!
 * Constructs a CreateOTAUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOTAUpdateResponse::CreateOTAUpdateResponse(
        const CreateOTAUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateOTAUpdateResponsePrivate(this), parent)
{
    setRequest(new CreateOTAUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOTAUpdateRequest * CreateOTAUpdateResponse::request() const
{
    Q_D(const CreateOTAUpdateResponse);
    return static_cast<const CreateOTAUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CreateOTAUpdate \a response.
 */
void CreateOTAUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOTAUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CreateOTAUpdateResponsePrivate
 * \brief The CreateOTAUpdateResponsePrivate class provides private implementation for CreateOTAUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateOTAUpdateResponsePrivate object with public implementation \a q.
 */
CreateOTAUpdateResponsePrivate::CreateOTAUpdateResponsePrivate(
    CreateOTAUpdateResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CreateOTAUpdate response element from \a xml.
 */
void CreateOTAUpdateResponsePrivate::parseCreateOTAUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOTAUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
