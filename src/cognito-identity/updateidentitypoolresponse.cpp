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

#include "updateidentitypoolresponse.h"
#include "updateidentitypoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  UpdateIdentityPoolResponse
 *
 * @brief  Handles CognitoIdentity UpdateIdentityPool responses.
 *
 * @see    CognitoIdentityClient::updateIdentityPool
 */

/**
 * @brief  Constructs a new UpdateIdentityPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateIdentityPoolResponse::UpdateIdentityPoolResponse(
        const UpdateIdentityPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new UpdateIdentityPoolResponsePrivate(this), parent)
{
    setRequest(new UpdateIdentityPoolRequest(request));
    setReply(reply);
}

const UpdateIdentityPoolRequest * UpdateIdentityPoolResponse::request() const
{
    Q_D(const UpdateIdentityPoolResponse);
    return static_cast<const UpdateIdentityPoolRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity UpdateIdentityPool response.
 *
 * @param  response  Response to parse.
 */
void UpdateIdentityPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateIdentityPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateIdentityPoolResponsePrivate
 *
 * @brief  Private implementation for UpdateIdentityPoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIdentityPoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateIdentityPoolResponse instance.
 */
UpdateIdentityPoolResponsePrivate::UpdateIdentityPoolResponsePrivate(
    UpdateIdentityPoolResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity UpdateIdentityPoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateIdentityPoolResponsePrivate::UpdateIdentityPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIdentityPoolResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
