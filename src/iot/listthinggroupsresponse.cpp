/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listthinggroupsresponse.h"
#include "listthinggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListThingGroupsResponse
 * \brief The ListThingGroupsResponse class provides an interace for IoT ListThingGroups responses.
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
 * \sa IoTClient::listThingGroups
 */

/*!
 * Constructs a ListThingGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListThingGroupsResponse::ListThingGroupsResponse(
        const ListThingGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingGroupsResponsePrivate(this), parent)
{
    setRequest(new ListThingGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThingGroupsRequest * ListThingGroupsResponse::request() const
{
    Q_D(const ListThingGroupsResponse);
    return static_cast<const ListThingGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListThingGroups \a response.
 */
void ListThingGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListThingGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListThingGroupsResponsePrivate
 * \brief The ListThingGroupsResponsePrivate class provides private implementation for ListThingGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListThingGroupsResponsePrivate object with public implementation \a q.
 */
ListThingGroupsResponsePrivate::ListThingGroupsResponsePrivate(
    ListThingGroupsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListThingGroups response element from \a xml.
 */
void ListThingGroupsResponsePrivate::parseListThingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingGroupsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
