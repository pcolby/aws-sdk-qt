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

#include "getdeviceresponse.h"
#include "getdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDeviceResponse
 *
 * \brief The GetDeviceResponse class encapsulates DeviceFarm GetDevice responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDevice
 */

/*!
 * @brief  Constructs a new GetDeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceResponse::GetDeviceResponse(
        const GetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDeviceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRequest(request));
    setReply(reply);
}

const GetDeviceRequest * GetDeviceResponse::request() const
{
    Q_D(const GetDeviceResponse);
    return static_cast<const GetDeviceRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetDevice response.
 *
 * @param  response  Response to parse.
 */
void GetDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDeviceResponsePrivate
 *
 * \brief Private implementation for GetDeviceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeviceResponse instance.
 */
GetDeviceResponsePrivate::GetDeviceResponsePrivate(
    GetDeviceResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeviceResponsePrivate::parseGetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
