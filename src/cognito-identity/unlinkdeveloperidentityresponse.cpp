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

#include "unlinkdeveloperidentityresponse.h"
#include "unlinkdeveloperidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  UnlinkDeveloperIdentityResponse
 *
 * @brief  Handles CognitoIdentity UnlinkDeveloperIdentity responses.
 *
 * @see    CognitoIdentityClient::unlinkDeveloperIdentity
 */

/**
 * @brief  Constructs a new UnlinkDeveloperIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnlinkDeveloperIdentityResponse::UnlinkDeveloperIdentityResponse(
        const UnlinkDeveloperIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new UnlinkDeveloperIdentityResponsePrivate(this), parent)
{
    setRequest(new UnlinkDeveloperIdentityRequest(request));
    setReply(reply);
}

const UnlinkDeveloperIdentityRequest * UnlinkDeveloperIdentityResponse::request() const
{
    Q_D(const UnlinkDeveloperIdentityResponse);
    return static_cast<const UnlinkDeveloperIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity UnlinkDeveloperIdentity response.
 *
 * @param  response  Response to parse.
 */
void UnlinkDeveloperIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnlinkDeveloperIdentityResponsePrivate
 *
 * @brief  Private implementation for UnlinkDeveloperIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnlinkDeveloperIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnlinkDeveloperIdentityResponse instance.
 */
UnlinkDeveloperIdentityResponsePrivate::UnlinkDeveloperIdentityResponsePrivate(
    UnlinkDeveloperIdentityResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity UnlinkDeveloperIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnlinkDeveloperIdentityResponsePrivate::UnlinkDeveloperIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnlinkDeveloperIdentityResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
