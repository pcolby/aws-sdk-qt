/*
    Copyright 2013-2019 Paul Colby

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

#include "addthingtobillinggroupresponse.h"
#include "addthingtobillinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::AddThingToBillingGroupResponse
 * \brief The AddThingToBillingGroupResponse class provides an interace for IoT AddThingToBillingGroup responses.
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
 * \sa IoTClient::addThingToBillingGroup
 */

/*!
 * Constructs a AddThingToBillingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AddThingToBillingGroupResponse::AddThingToBillingGroupResponse(
        const AddThingToBillingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new AddThingToBillingGroupResponsePrivate(this), parent)
{
    setRequest(new AddThingToBillingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddThingToBillingGroupRequest * AddThingToBillingGroupResponse::request() const
{
    Q_D(const AddThingToBillingGroupResponse);
    return static_cast<const AddThingToBillingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT AddThingToBillingGroup \a response.
 */
void AddThingToBillingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddThingToBillingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::AddThingToBillingGroupResponsePrivate
 * \brief The AddThingToBillingGroupResponsePrivate class provides private implementation for AddThingToBillingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a AddThingToBillingGroupResponsePrivate object with public implementation \a q.
 */
AddThingToBillingGroupResponsePrivate::AddThingToBillingGroupResponsePrivate(
    AddThingToBillingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT AddThingToBillingGroup response element from \a xml.
 */
void AddThingToBillingGroupResponsePrivate::parseAddThingToBillingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddThingToBillingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
