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

#include "createdevicepoolresponse.h"
#include "createdevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateDevicePoolResponse
 *
 * \brief The CreateDevicePoolResponse class encapsulates DeviceFarm CreateDevicePool responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createDevicePool
 */

/*!
 * @brief  Constructs a new CreateDevicePoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDevicePoolResponse::CreateDevicePoolResponse(
        const CreateDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateDevicePoolResponsePrivate(this), parent)
{
    setRequest(new CreateDevicePoolRequest(request));
    setReply(reply);
}

const CreateDevicePoolRequest * CreateDevicePoolResponse::request() const
{
    Q_D(const CreateDevicePoolResponse);
    return static_cast<const CreateDevicePoolRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm CreateDevicePool response.
 *
 * @param  response  Response to parse.
 */
void CreateDevicePoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDevicePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateDevicePoolResponsePrivate
 *
 * \brief Private implementation for CreateDevicePoolResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDevicePoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDevicePoolResponse instance.
 */
CreateDevicePoolResponsePrivate::CreateDevicePoolResponsePrivate(
    CreateDevicePoolResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm CreateDevicePoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDevicePoolResponsePrivate::parseCreateDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDevicePoolResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
