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
 *
 * \brief The ListThingGroupsResponse class provides an interace for IoT ListThingGroups responses.
 *
 * \ingroup IoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::listThingGroups
 */

/*!
 * @brief  Constructs a new ListThingGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const ListThingGroupsRequest * ListThingGroupsResponse::request() const
{
    Q_D(const ListThingGroupsResponse);
    return static_cast<const ListThingGroupsRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT ListThingGroups response.
 *
 * @param  response  Response to parse.
 */
void ListThingGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListThingGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListThingGroupsResponsePrivate
 *
 * \brief Private implementation for ListThingGroupsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListThingGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingGroupsResponse instance.
 */
ListThingGroupsResponsePrivate::ListThingGroupsResponsePrivate(
    ListThingGroupsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT ListThingGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingGroupsResponsePrivate::parseListThingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingGroupsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
