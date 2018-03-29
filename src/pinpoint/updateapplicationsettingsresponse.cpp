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

#include "updateapplicationsettingsresponse.h"
#include "updateapplicationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateApplicationSettingsResponse
 *
 * @brief  Handles Pinpoint UpdateApplicationSettings responses.
 *
 * @see    PinpointClient::updateApplicationSettings
 */

/**
 * @brief  Constructs a new UpdateApplicationSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApplicationSettingsResponse::UpdateApplicationSettingsResponse(
        const UpdateApplicationSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApplicationSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationSettingsRequest(request));
    setReply(reply);
}

const UpdateApplicationSettingsRequest * UpdateApplicationSettingsResponse::request() const
{
    Q_D(const UpdateApplicationSettingsResponse);
    return static_cast<const UpdateApplicationSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateApplicationSettings response.
 *
 * @param  response  Response to parse.
 */
void UpdateApplicationSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateApplicationSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateApplicationSettingsResponsePrivate
 *
 * @brief  Private implementation for UpdateApplicationSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApplicationSettingsResponse instance.
 */
UpdateApplicationSettingsResponsePrivate::UpdateApplicationSettingsResponsePrivate(
    UpdateApplicationSettingsResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateApplicationSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApplicationSettingsResponsePrivate::UpdateApplicationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationSettingsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
