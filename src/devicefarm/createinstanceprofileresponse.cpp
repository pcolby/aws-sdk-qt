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

#include "createinstanceprofileresponse.h"
#include "createinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateInstanceProfileResponse
 *
 * \brief The CreateInstanceProfileResponse class provides an interace for DeviceFarm CreateInstanceProfile responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createInstanceProfile
 */

/*!
 * @brief  Constructs a new CreateInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstanceProfileResponse::CreateInstanceProfileResponse(
        const CreateInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceProfileRequest(request));
    setReply(reply);
}

const CreateInstanceProfileRequest * CreateInstanceProfileResponse::request() const
{
    Q_D(const CreateInstanceProfileResponse);
    return static_cast<const CreateInstanceProfileRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm CreateInstanceProfile response.
 *
 * @param  response  Response to parse.
 */
void CreateInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateInstanceProfileResponsePrivate
 *
 * \brief Private implementation for CreateInstanceProfileResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInstanceProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInstanceProfileResponse instance.
 */
CreateInstanceProfileResponsePrivate::CreateInstanceProfileResponsePrivate(
    CreateInstanceProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm CreateInstanceProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInstanceProfileResponsePrivate::parseCreateInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
