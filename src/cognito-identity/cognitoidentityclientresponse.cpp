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

#include "cognitoidentityclientresponse.h"
#include "cognitoidentityclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  CognitoIdentityClientResponse
 *
 * @brief  Handles CognitoIdentity CognitoIdentityClient responses.
 *
 * @see    CognitoIdentityClient::cognitoIdentityClient
 */

/**
 * @brief  Constructs a new CognitoIdentityClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CognitoIdentityClientResponse::CognitoIdentityClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CognitoIdentityClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CognitoIdentityClientResponsePrivate
 *
 * @brief  Private implementation for CognitoIdentityClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CognitoIdentityClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CognitoIdentityClientResponse instance.
 */
CognitoIdentityClientResponsePrivate::CognitoIdentityClientResponsePrivate(
    CognitoIdentityClientQueueResponse * const q) : CognitoIdentityClientPrivate(q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
