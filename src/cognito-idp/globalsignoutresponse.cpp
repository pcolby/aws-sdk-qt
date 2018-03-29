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

#include "globalsignoutresponse.h"
#include "globalsignoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  GlobalSignOutResponse
 *
 * @brief  Handles CognitoIdentityProvider GlobalSignOut responses.
 *
 * @see    CognitoIdentityProviderClient::globalSignOut
 */

/**
 * @brief  Constructs a new GlobalSignOutResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GlobalSignOutResponse::GlobalSignOutResponse(
        const GlobalSignOutRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GlobalSignOutResponsePrivate(this), parent)
{
    setRequest(new GlobalSignOutRequest(request));
    setReply(reply);
}

const GlobalSignOutRequest * GlobalSignOutResponse::request() const
{
    Q_D(const GlobalSignOutResponse);
    return static_cast<const GlobalSignOutRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider GlobalSignOut response.
 *
 * @param  response  Response to parse.
 */
void GlobalSignOutResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GlobalSignOutResponsePrivate
 *
 * @brief  Private implementation for GlobalSignOutResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GlobalSignOutResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GlobalSignOutResponse instance.
 */
GlobalSignOutResponsePrivate::GlobalSignOutResponsePrivate(
    GlobalSignOutQueueResponse * const q) : GlobalSignOutPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider GlobalSignOutResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GlobalSignOutResponsePrivate::GlobalSignOutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GlobalSignOutResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
