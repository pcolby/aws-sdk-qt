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

#include "createnetworkprofileresponse.h"
#include "createnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateNetworkProfileResponse
 *
 * \brief The CreateNetworkProfileResponse class encapsulates DeviceFarm CreateNetworkProfile responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createNetworkProfile
 */

/*!
 * @brief  Constructs a new CreateNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNetworkProfileResponse::CreateNetworkProfileResponse(
        const CreateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkProfileRequest(request));
    setReply(reply);
}

const CreateNetworkProfileRequest * CreateNetworkProfileResponse::request() const
{
    Q_D(const CreateNetworkProfileResponse);
    return static_cast<const CreateNetworkProfileRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm CreateNetworkProfile response.
 *
 * @param  response  Response to parse.
 */
void CreateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateNetworkProfileResponsePrivate
 *
 * \brief Private implementation for CreateNetworkProfileResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateNetworkProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNetworkProfileResponse instance.
 */
CreateNetworkProfileResponsePrivate::CreateNetworkProfileResponsePrivate(
    CreateNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm CreateNetworkProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNetworkProfileResponsePrivate::parseCreateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
