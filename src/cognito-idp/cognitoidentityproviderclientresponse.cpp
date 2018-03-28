/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cognitoidentityproviderclientresponse.h"
#include "cognitoidentityproviderclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CognitoIdentityProviderClientResponse
 *
 * @brief  Handles  CognitoIdentityProviderClient responses.
 *
 * @see    Client::cognitoIdentityProviderClient
 */

/**
 * @brief  Constructs a new CognitoIdentityProviderClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CognitoIdentityProviderClientResponse::CognitoIdentityProviderClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CognitoIdentityProviderClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CognitoIdentityProviderClientResponsePrivate
 *
 * @brief  Private implementation for CognitoIdentityProviderClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CognitoIdentityProviderClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CognitoIdentityProviderClientResponse instance.
 */
CognitoIdentityProviderClientResponsePrivate::CognitoIdentityProviderClientResponsePrivate(
    CognitoIdentityProviderClientQueueResponse * const q) : CognitoIdentityProviderClientPrivate(q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
