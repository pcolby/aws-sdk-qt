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

#include "updateuserpoolresponse.h"
#include "updateuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateUserPoolResponse
 *
 * @brief  Handles CognitoIdentityProvider UpdateUserPool responses.
 *
 * @see    CognitoIdentityProviderClient::updateUserPool
 */

/**
 * @brief  Constructs a new UpdateUserPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserPoolResponse::UpdateUserPoolResponse(
        const UpdateUserPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateUserPoolResponsePrivate(this), parent)
{
    setRequest(new UpdateUserPoolRequest(request));
    setReply(reply);
}

const UpdateUserPoolRequest * UpdateUserPoolResponse::request() const
{
    Q_D(const UpdateUserPoolResponse);
    return static_cast<const UpdateUserPoolRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider UpdateUserPool response.
 *
 * @param  response  Response to parse.
 */
void UpdateUserPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateUserPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUserPoolResponsePrivate
 *
 * @brief  Private implementation for UpdateUserPoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserPoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUserPoolResponse instance.
 */
UpdateUserPoolResponsePrivate::UpdateUserPoolResponsePrivate(
    UpdateUserPoolResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider UpdateUserPoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUserPoolResponsePrivate::UpdateUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserPoolResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
