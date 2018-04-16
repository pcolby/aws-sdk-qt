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

#include "deletedevicepoolresponse.h"
#include "deletedevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteDevicePoolResponse
 *
 * \brief The DeleteDevicePoolResponse class provides an interace for DeviceFarm DeleteDevicePool responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteDevicePool
 */

/*!
 * @brief  Constructs a new DeleteDevicePoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDevicePoolResponse::DeleteDevicePoolResponse(
        const DeleteDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteDevicePoolResponsePrivate(this), parent)
{
    setRequest(new DeleteDevicePoolRequest(request));
    setReply(reply);
}

const DeleteDevicePoolRequest * DeleteDevicePoolResponse::request() const
{
    Q_D(const DeleteDevicePoolResponse);
    return static_cast<const DeleteDevicePoolRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm DeleteDevicePool response.
 *
 * @param  response  Response to parse.
 */
void DeleteDevicePoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDevicePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteDevicePoolResponsePrivate
 *
 * \brief Private implementation for DeleteDevicePoolResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDevicePoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDevicePoolResponse instance.
 */
DeleteDevicePoolResponsePrivate::DeleteDevicePoolResponsePrivate(
    DeleteDevicePoolResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm DeleteDevicePoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDevicePoolResponsePrivate::parseDeleteDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDevicePoolResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
