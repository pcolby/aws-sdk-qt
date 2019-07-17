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

#include "describethinggroupresponse.h"
#include "describethinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeThingGroupResponse
 * \brief The DescribeThingGroupResponse class provides an interace for IoT DescribeThingGroup responses.
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
 * \sa IoTClient::describeThingGroup
 */

/*!
 * Constructs a DescribeThingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThingGroupResponse::DescribeThingGroupResponse(
        const DescribeThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeThingGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeThingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThingGroupRequest * DescribeThingGroupResponse::request() const
{
    Q_D(const DescribeThingGroupResponse);
    return static_cast<const DescribeThingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DescribeThingGroup \a response.
 */
void DescribeThingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DescribeThingGroupResponsePrivate
 * \brief The DescribeThingGroupResponsePrivate class provides private implementation for DescribeThingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeThingGroupResponsePrivate object with public implementation \a q.
 */
DescribeThingGroupResponsePrivate::DescribeThingGroupResponsePrivate(
    DescribeThingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DescribeThingGroup response element from \a xml.
 */
void DescribeThingGroupResponsePrivate::parseDescribeThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
