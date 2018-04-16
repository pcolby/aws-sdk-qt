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

#include "updatedeviceinstanceresponse.h"
#include "updatedeviceinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceResponse
 *
 * \brief The UpdateDeviceInstanceResponse class provides an interace for DeviceFarm UpdateDeviceInstance responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateDeviceInstance
 */

/*!
 * @brief  Constructs a new UpdateDeviceInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDeviceInstanceResponse::UpdateDeviceInstanceResponse(
        const UpdateDeviceInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateDeviceInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceInstanceRequest(request));
    setReply(reply);
}

const UpdateDeviceInstanceRequest * UpdateDeviceInstanceResponse::request() const
{
    Q_D(const UpdateDeviceInstanceResponse);
    return static_cast<const UpdateDeviceInstanceRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm UpdateDeviceInstance response.
 *
 * @param  response  Response to parse.
 */
void UpdateDeviceInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDeviceInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateDeviceInstanceResponsePrivate
 *
 * \brief Private implementation for UpdateDeviceInstanceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDeviceInstanceResponse instance.
 */
UpdateDeviceInstanceResponsePrivate::UpdateDeviceInstanceResponsePrivate(
    UpdateDeviceInstanceResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm UpdateDeviceInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDeviceInstanceResponsePrivate::parseUpdateDeviceInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceInstanceResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
