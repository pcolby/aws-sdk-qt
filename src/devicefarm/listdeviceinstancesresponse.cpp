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

#include "listdeviceinstancesresponse.h"
#include "listdeviceinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDeviceInstancesResponse
 *
 * \brief The ListDeviceInstancesResponse class encapsulates DeviceFarm ListDeviceInstances responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listDeviceInstances
 */

/*!
 * @brief  Constructs a new ListDeviceInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeviceInstancesResponse::ListDeviceInstancesResponse(
        const ListDeviceInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListDeviceInstancesResponsePrivate(this), parent)
{
    setRequest(new ListDeviceInstancesRequest(request));
    setReply(reply);
}

const ListDeviceInstancesRequest * ListDeviceInstancesResponse::request() const
{
    Q_D(const ListDeviceInstancesResponse);
    return static_cast<const ListDeviceInstancesRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm ListDeviceInstances response.
 *
 * @param  response  Response to parse.
 */
void ListDeviceInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeviceInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListDeviceInstancesResponsePrivate
 *
 * \brief Private implementation for ListDeviceInstancesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDeviceInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeviceInstancesResponse instance.
 */
ListDeviceInstancesResponsePrivate::ListDeviceInstancesResponsePrivate(
    ListDeviceInstancesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm ListDeviceInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeviceInstancesResponsePrivate::parseListDeviceInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceInstancesResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
