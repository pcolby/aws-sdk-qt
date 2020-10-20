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

#include "createdynamicthinggroupresponse.h"
#include "createdynamicthinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateDynamicThingGroupResponse
 * \brief The CreateDynamicThingGroupResponse class provides an interace for IoT CreateDynamicThingGroup responses.
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
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::createDynamicThingGroup
 */

/*!
 * Constructs a CreateDynamicThingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDynamicThingGroupResponse::CreateDynamicThingGroupResponse(
        const CreateDynamicThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateDynamicThingGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDynamicThingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDynamicThingGroupRequest * CreateDynamicThingGroupResponse::request() const
{
    Q_D(const CreateDynamicThingGroupResponse);
    return static_cast<const CreateDynamicThingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CreateDynamicThingGroup \a response.
 */
void CreateDynamicThingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDynamicThingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CreateDynamicThingGroupResponsePrivate
 * \brief The CreateDynamicThingGroupResponsePrivate class provides private implementation for CreateDynamicThingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateDynamicThingGroupResponsePrivate object with public implementation \a q.
 */
CreateDynamicThingGroupResponsePrivate::CreateDynamicThingGroupResponsePrivate(
    CreateDynamicThingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CreateDynamicThingGroup response element from \a xml.
 */
void CreateDynamicThingGroupResponsePrivate::parseCreateDynamicThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDynamicThingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
