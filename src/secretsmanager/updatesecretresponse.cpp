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

#include "updatesecretresponse.h"
#include "updatesecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  UpdateSecretResponse
 *
 * @brief  Handles SecretsManager UpdateSecret responses.
 *
 * @see    SecretsManagerClient::updateSecret
 */

/**
 * @brief  Constructs a new UpdateSecretResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSecretResponse::UpdateSecretResponse(
        const UpdateSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new UpdateSecretResponsePrivate(this), parent)
{
    setRequest(new UpdateSecretRequest(request));
    setReply(reply);
}

const UpdateSecretRequest * UpdateSecretResponse::request() const
{
    Q_D(const UpdateSecretResponse);
    return static_cast<const UpdateSecretRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager UpdateSecret response.
 *
 * @param  response  Response to parse.
 */
void UpdateSecretResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSecretResponsePrivate
 *
 * @brief  Private implementation for UpdateSecretResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecretResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSecretResponse instance.
 */
UpdateSecretResponsePrivate::UpdateSecretResponsePrivate(
    UpdateSecretResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager UpdateSecretResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSecretResponsePrivate::parseUpdateSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSecretResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
