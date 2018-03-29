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

#include "lookupdeveloperidentityresponse.h"
#include "lookupdeveloperidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  LookupDeveloperIdentityResponse
 *
 * @brief  Handles CognitoIdentity LookupDeveloperIdentity responses.
 *
 * @see    CognitoIdentityClient::lookupDeveloperIdentity
 */

/**
 * @brief  Constructs a new LookupDeveloperIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
LookupDeveloperIdentityResponse::LookupDeveloperIdentityResponse(
        const LookupDeveloperIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new LookupDeveloperIdentityResponsePrivate(this), parent)
{
    setRequest(new LookupDeveloperIdentityRequest(request));
    setReply(reply);
}

const LookupDeveloperIdentityRequest * LookupDeveloperIdentityResponse::request() const
{
    Q_D(const LookupDeveloperIdentityResponse);
    return static_cast<const LookupDeveloperIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity LookupDeveloperIdentity response.
 *
 * @param  response  Response to parse.
 */
void LookupDeveloperIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  LookupDeveloperIdentityResponsePrivate
 *
 * @brief  Private implementation for LookupDeveloperIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LookupDeveloperIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LookupDeveloperIdentityResponse instance.
 */
LookupDeveloperIdentityResponsePrivate::LookupDeveloperIdentityResponsePrivate(
    LookupDeveloperIdentityQueueResponse * const q) : LookupDeveloperIdentityPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity LookupDeveloperIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void LookupDeveloperIdentityResponsePrivate::LookupDeveloperIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("LookupDeveloperIdentityResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace AWS
