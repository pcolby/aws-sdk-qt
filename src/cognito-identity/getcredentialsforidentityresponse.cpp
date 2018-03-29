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

#include "getcredentialsforidentityresponse.h"
#include "getcredentialsforidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  GetCredentialsForIdentityResponse
 *
 * @brief  Handles CognitoIdentity GetCredentialsForIdentity responses.
 *
 * @see    CognitoIdentityClient::getCredentialsForIdentity
 */

/**
 * @brief  Constructs a new GetCredentialsForIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCredentialsForIdentityResponse::GetCredentialsForIdentityResponse(
        const GetCredentialsForIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new GetCredentialsForIdentityResponsePrivate(this), parent)
{
    setRequest(new GetCredentialsForIdentityRequest(request));
    setReply(reply);
}

const GetCredentialsForIdentityRequest * GetCredentialsForIdentityResponse::request() const
{
    Q_D(const GetCredentialsForIdentityResponse);
    return static_cast<const GetCredentialsForIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity GetCredentialsForIdentity response.
 *
 * @param  response  Response to parse.
 */
void GetCredentialsForIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCredentialsForIdentityResponsePrivate
 *
 * @brief  Private implementation for GetCredentialsForIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCredentialsForIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCredentialsForIdentityResponse instance.
 */
GetCredentialsForIdentityResponsePrivate::GetCredentialsForIdentityResponsePrivate(
    GetCredentialsForIdentityResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity GetCredentialsForIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCredentialsForIdentityResponsePrivate::GetCredentialsForIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCredentialsForIdentityResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
