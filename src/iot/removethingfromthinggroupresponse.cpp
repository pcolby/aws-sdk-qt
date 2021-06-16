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

#include "removethingfromthinggroupresponse.h"
#include "removethingfromthinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::RemoveThingFromThingGroupResponse
 * \brief The RemoveThingFromThingGroupResponse class provides an interace for IoT RemoveThingFromThingGroup responses.
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
 * \sa IoTClient::removeThingFromThingGroup
 */

/*!
 * Constructs a RemoveThingFromThingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveThingFromThingGroupResponse::RemoveThingFromThingGroupResponse(
        const RemoveThingFromThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new RemoveThingFromThingGroupResponsePrivate(this), parent)
{
    setRequest(new RemoveThingFromThingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveThingFromThingGroupRequest * RemoveThingFromThingGroupResponse::request() const
{
    Q_D(const RemoveThingFromThingGroupResponse);
    return static_cast<const RemoveThingFromThingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT RemoveThingFromThingGroup \a response.
 */
void RemoveThingFromThingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveThingFromThingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::RemoveThingFromThingGroupResponsePrivate
 * \brief The RemoveThingFromThingGroupResponsePrivate class provides private implementation for RemoveThingFromThingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a RemoveThingFromThingGroupResponsePrivate object with public implementation \a q.
 */
RemoveThingFromThingGroupResponsePrivate::RemoveThingFromThingGroupResponsePrivate(
    RemoveThingFromThingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT RemoveThingFromThingGroup response element from \a xml.
 */
void RemoveThingFromThingGroupResponsePrivate::parseRemoveThingFromThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveThingFromThingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
