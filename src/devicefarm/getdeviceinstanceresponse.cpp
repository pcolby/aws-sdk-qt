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

#include "getdeviceinstanceresponse.h"
#include "getdeviceinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceResponse
 *
 * \brief The GetDeviceInstanceResponse class provides an interace for DeviceFarm GetDeviceInstance responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDeviceInstance
 */

/*!
 * @brief  Constructs a new GetDeviceInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceInstanceResponse::GetDeviceInstanceResponse(
        const GetDeviceInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDeviceInstanceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceInstanceRequest(request));
    setReply(reply);
}

const GetDeviceInstanceRequest * GetDeviceInstanceResponse::request() const
{
    Q_D(const GetDeviceInstanceResponse);
    return static_cast<const GetDeviceInstanceRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetDeviceInstance response.
 *
 * @param  response  Response to parse.
 */
void GetDeviceInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDeviceInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDeviceInstanceResponsePrivate
 *
 * \brief Private implementation for GetDeviceInstanceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDeviceInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeviceInstanceResponse instance.
 */
GetDeviceInstanceResponsePrivate::GetDeviceInstanceResponsePrivate(
    GetDeviceInstanceResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetDeviceInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeviceInstanceResponsePrivate::parseGetDeviceInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceInstanceResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
