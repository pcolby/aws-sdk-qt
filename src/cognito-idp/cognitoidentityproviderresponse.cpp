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

#include "cognitoidentityproviderresponse.h"
#include "cognitoidentityproviderresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  CognitoIdentityProviderResponse
 *
 * @brief  Handles CognitoIdentityProvider CognitoIdentityProvider responses.
 *
 * @see    CognitoIdentityProviderClient::cognitoIdentityProvider
 */

/**
 * @brief  Constructs a new CognitoIdentityProviderResponse object.
 *
 * @param  parent   This object's parent.
 */
CognitoIdentityProviderResponse::CognitoIdentityProviderResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CognitoIdentityProviderResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void CognitoIdentityProviderResponse::parseFailure(QIODevice &response)
{
    Q_D(CognitoIdentityProviderResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  CognitoIdentityProviderResponsePrivate
 *
 * @brief  Private implementation for CognitoIdentityProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CognitoIdentityProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CognitoIdentityProviderResponse instance.
 */
CognitoIdentityProviderResponsePrivate::CognitoIdentityProviderResponsePrivate(
    CognitoIdentityProviderResponse * const q) : QtAws::Core::AwsAbstractResponePrivate(q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
