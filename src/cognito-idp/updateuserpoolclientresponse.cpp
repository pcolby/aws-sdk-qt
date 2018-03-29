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

#include "updateuserpoolclientresponse.h"
#include "updateuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateUserPoolClientResponse
 *
 * @brief  Handles CognitoIdentityProvider UpdateUserPoolClient responses.
 *
 * @see    CognitoIdentityProviderClient::updateUserPoolClient
 */

/**
 * @brief  Constructs a new UpdateUserPoolClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserPoolClientResponse::UpdateUserPoolClientResponse(
        const UpdateUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new UpdateUserPoolClientRequest(request));
    setReply(reply);
}

const UpdateUserPoolClientRequest * UpdateUserPoolClientResponse::request() const
{
    Q_D(const UpdateUserPoolClientResponse);
    return static_cast<const UpdateUserPoolClientRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider UpdateUserPoolClient response.
 *
 * @param  response  Response to parse.
 */
void UpdateUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUserPoolClientResponsePrivate
 *
 * @brief  Private implementation for UpdateUserPoolClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserPoolClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUserPoolClientResponse instance.
 */
UpdateUserPoolClientResponsePrivate::UpdateUserPoolClientResponsePrivate(
    UpdateUserPoolClientQueueResponse * const q) : UpdateUserPoolClientPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider UpdateUserPoolClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUserPoolClientResponsePrivate::UpdateUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserPoolClientResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
