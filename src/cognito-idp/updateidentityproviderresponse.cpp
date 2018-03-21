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

#include "updateidentityproviderresponse.h"
#include "updateidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateIdentityProviderResponse
 *
 * @brief  Handles CognitoIdentityProvider UpdateIdentityProvider responses.
 *
 * @see    CognitoIdentityProviderClient::updateIdentityProvider
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateIdentityProviderResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new UpdateIdentityProviderRequest(request));
    setReply(reply);
}

const UpdateIdentityProviderRequest * UpdateIdentityProviderResponse::request() const
{
    Q_D(const UpdateIdentityProviderResponse);
    return static_cast<const UpdateIdentityProviderRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider UpdateIdentityProvider response.
 *
 * @param  response  Response to parse.
 */
void UpdateIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateIdentityProviderResponsePrivate
 *
 * @brief  Private implementation for UpdateIdentityProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIdentityProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateIdentityProviderResponse instance.
 */
UpdateIdentityProviderResponsePrivate::UpdateIdentityProviderResponsePrivate(
    UpdateIdentityProviderQueueResponse * const q) : UpdateIdentityProviderPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider UpdateIdentityProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateIdentityProviderResponsePrivate::UpdateIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIdentityProviderResponse"));
    /// @todo
}
