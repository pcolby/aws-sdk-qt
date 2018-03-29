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

#include "setusersettingsresponse.h"
#include "setusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  SetUserSettingsResponse
 *
 * @brief  Handles CognitoIdentityProvider SetUserSettings responses.
 *
 * @see    CognitoIdentityProviderClient::setUserSettings
 */

/**
 * @brief  Constructs a new SetUserSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetUserSettingsResponse::SetUserSettingsResponse(
        const SetUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SetUserSettingsResponse(new SetUserSettingsResponsePrivate(this), parent)
{
    setRequest(new SetUserSettingsRequest(request));
    setReply(reply);
}

const SetUserSettingsRequest * SetUserSettingsResponse::request() const
{
    Q_D(const SetUserSettingsResponse);
    return static_cast<const SetUserSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider SetUserSettings response.
 *
 * @param  response  Response to parse.
 */
void SetUserSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetUserSettingsResponsePrivate
 *
 * @brief  Private implementation for SetUserSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUserSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetUserSettingsResponse instance.
 */
SetUserSettingsResponsePrivate::SetUserSettingsResponsePrivate(
    SetUserSettingsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider SetUserSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetUserSettingsResponsePrivate::parseSetUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserSettingsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
