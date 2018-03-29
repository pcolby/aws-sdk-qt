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

#include "unlinkidentityresponse.h"
#include "unlinkidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  UnlinkIdentityResponse
 *
 * @brief  Handles CognitoIdentity UnlinkIdentity responses.
 *
 * @see    CognitoIdentityClient::unlinkIdentity
 */

/**
 * @brief  Constructs a new UnlinkIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnlinkIdentityResponse::UnlinkIdentityResponse(
        const UnlinkIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new UnlinkIdentityResponsePrivate(this), parent)
{
    setRequest(new UnlinkIdentityRequest(request));
    setReply(reply);
}

const UnlinkIdentityRequest * UnlinkIdentityResponse::request() const
{
    Q_D(const UnlinkIdentityResponse);
    return static_cast<const UnlinkIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity UnlinkIdentity response.
 *
 * @param  response  Response to parse.
 */
void UnlinkIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(UnlinkIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnlinkIdentityResponsePrivate
 *
 * @brief  Private implementation for UnlinkIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnlinkIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnlinkIdentityResponse instance.
 */
UnlinkIdentityResponsePrivate::UnlinkIdentityResponsePrivate(
    UnlinkIdentityResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity UnlinkIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnlinkIdentityResponsePrivate::parseUnlinkIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnlinkIdentityResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
