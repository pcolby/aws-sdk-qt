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

#include "updateinstanceprofileresponse.h"
#include "updateinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateInstanceProfileResponse
 *
 * \brief The UpdateInstanceProfileResponse class encapsulates DeviceFarm UpdateInstanceProfile responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateInstanceProfile
 */

/*!
 * @brief  Constructs a new UpdateInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateInstanceProfileResponse::UpdateInstanceProfileResponse(
        const UpdateInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateInstanceProfileRequest(request));
    setReply(reply);
}

const UpdateInstanceProfileRequest * UpdateInstanceProfileResponse::request() const
{
    Q_D(const UpdateInstanceProfileResponse);
    return static_cast<const UpdateInstanceProfileRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm UpdateInstanceProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateInstanceProfileResponsePrivate
 *
 * \brief Private implementation for UpdateInstanceProfileResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateInstanceProfileResponse instance.
 */
UpdateInstanceProfileResponsePrivate::UpdateInstanceProfileResponsePrivate(
    UpdateInstanceProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm UpdateInstanceProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateInstanceProfileResponsePrivate::parseUpdateInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInstanceProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
