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

#include "getcsvheaderresponse.h"
#include "getcsvheaderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetCSVHeaderResponse
 *
 * \brief The GetCSVHeaderResponse class encapsulates CognitoIdentityProvider GetCSVHeader responses.
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
 * \sa CognitoIdentityProviderClient::getCSVHeader
 */

/*!
 * @brief  Constructs a new GetCSVHeaderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCSVHeaderResponse::GetCSVHeaderResponse(
        const GetCSVHeaderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetCSVHeaderResponsePrivate(this), parent)
{
    setRequest(new GetCSVHeaderRequest(request));
    setReply(reply);
}

const GetCSVHeaderRequest * GetCSVHeaderResponse::request() const
{
    Q_D(const GetCSVHeaderResponse);
    return static_cast<const GetCSVHeaderRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider GetCSVHeader response.
 *
 * @param  response  Response to parse.
 */
void GetCSVHeaderResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCSVHeaderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetCSVHeaderResponsePrivate
 *
 * \brief Private implementation for GetCSVHeaderResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCSVHeaderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCSVHeaderResponse instance.
 */
GetCSVHeaderResponsePrivate::GetCSVHeaderResponsePrivate(
    GetCSVHeaderResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider GetCSVHeaderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCSVHeaderResponsePrivate::parseGetCSVHeaderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCSVHeaderResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
