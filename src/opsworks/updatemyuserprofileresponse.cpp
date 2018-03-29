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

#include "updatemyuserprofileresponse.h"
#include "updatemyuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  UpdateMyUserProfileResponse
 *
 * @brief  Handles OpsWorks UpdateMyUserProfile responses.
 *
 * @see    OpsWorksClient::updateMyUserProfile
 */

/**
 * @brief  Constructs a new UpdateMyUserProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMyUserProfileResponse::UpdateMyUserProfileResponse(
        const UpdateMyUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateMyUserProfileResponse(new UpdateMyUserProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateMyUserProfileRequest(request));
    setReply(reply);
}

const UpdateMyUserProfileRequest * UpdateMyUserProfileResponse::request() const
{
    Q_D(const UpdateMyUserProfileResponse);
    return static_cast<const UpdateMyUserProfileRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateMyUserProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateMyUserProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateMyUserProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMyUserProfileResponsePrivate
 *
 * @brief  Private implementation for UpdateMyUserProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMyUserProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMyUserProfileResponse instance.
 */
UpdateMyUserProfileResponsePrivate::UpdateMyUserProfileResponsePrivate(
    UpdateMyUserProfileResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateMyUserProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMyUserProfileResponsePrivate::parseUpdateMyUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMyUserProfileResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
