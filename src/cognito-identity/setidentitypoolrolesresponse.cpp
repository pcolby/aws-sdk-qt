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

#include "setidentitypoolrolesresponse.h"
#include "setidentitypoolrolesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  SetIdentityPoolRolesResponse
 *
 * @brief  Handles CognitoIdentity SetIdentityPoolRoles responses.
 *
 * @see    CognitoIdentityClient::setIdentityPoolRoles
 */

/**
 * @brief  Constructs a new SetIdentityPoolRolesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityPoolRolesResponse::SetIdentityPoolRolesResponse(
        const SetIdentityPoolRolesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new SetIdentityPoolRolesResponsePrivate(this), parent)
{
    setRequest(new SetIdentityPoolRolesRequest(request));
    setReply(reply);
}

const SetIdentityPoolRolesRequest * SetIdentityPoolRolesResponse::request() const
{
    Q_D(const SetIdentityPoolRolesResponse);
    return static_cast<const SetIdentityPoolRolesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity SetIdentityPoolRoles response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityPoolRolesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetIdentityPoolRolesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetIdentityPoolRolesResponsePrivate
 *
 * @brief  Private implementation for SetIdentityPoolRolesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityPoolRolesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityPoolRolesResponse instance.
 */
SetIdentityPoolRolesResponsePrivate::SetIdentityPoolRolesResponsePrivate(
    SetIdentityPoolRolesResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity SetIdentityPoolRolesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityPoolRolesResponsePrivate::SetIdentityPoolRolesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityPoolRolesResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
