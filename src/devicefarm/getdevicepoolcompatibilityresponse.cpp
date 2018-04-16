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

#include "getdevicepoolcompatibilityresponse.h"
#include "getdevicepoolcompatibilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityResponse
 *
 * \brief The GetDevicePoolCompatibilityResponse class provides an interace for DeviceFarm GetDevicePoolCompatibility responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDevicePoolCompatibility
 */

/*!
 * @brief  Constructs a new GetDevicePoolCompatibilityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDevicePoolCompatibilityResponse::GetDevicePoolCompatibilityResponse(
        const GetDevicePoolCompatibilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDevicePoolCompatibilityResponsePrivate(this), parent)
{
    setRequest(new GetDevicePoolCompatibilityRequest(request));
    setReply(reply);
}

const GetDevicePoolCompatibilityRequest * GetDevicePoolCompatibilityResponse::request() const
{
    Q_D(const GetDevicePoolCompatibilityResponse);
    return static_cast<const GetDevicePoolCompatibilityRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetDevicePoolCompatibility response.
 *
 * @param  response  Response to parse.
 */
void GetDevicePoolCompatibilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDevicePoolCompatibilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDevicePoolCompatibilityResponsePrivate
 *
 * \brief Private implementation for GetDevicePoolCompatibilityResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDevicePoolCompatibilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDevicePoolCompatibilityResponse instance.
 */
GetDevicePoolCompatibilityResponsePrivate::GetDevicePoolCompatibilityResponsePrivate(
    GetDevicePoolCompatibilityResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetDevicePoolCompatibilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDevicePoolCompatibilityResponsePrivate::parseGetDevicePoolCompatibilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePoolCompatibilityResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
