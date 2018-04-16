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

#include "createidentityproviderresponse.h"
#include "createidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateIdentityProviderResponse
 *
 * \brief The CreateIdentityProviderResponse class encapsulates CognitoIdentityProvider CreateIdentityProvider responses.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::createIdentityProvider
 */

/*!
 * @brief  Constructs a new CreateIdentityProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateIdentityProviderResponse::CreateIdentityProviderResponse(
        const CreateIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new CreateIdentityProviderRequest(request));
    setReply(reply);
}

const CreateIdentityProviderRequest * CreateIdentityProviderResponse::request() const
{
    Q_D(const CreateIdentityProviderResponse);
    return static_cast<const CreateIdentityProviderRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider CreateIdentityProvider response.
 *
 * @param  response  Response to parse.
 */
void CreateIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateIdentityProviderResponsePrivate
 *
 * \brief Private implementation for CreateIdentityProviderResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateIdentityProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateIdentityProviderResponse instance.
 */
CreateIdentityProviderResponsePrivate::CreateIdentityProviderResponsePrivate(
    CreateIdentityProviderResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider CreateIdentityProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateIdentityProviderResponsePrivate::parseCreateIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIdentityProviderResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
