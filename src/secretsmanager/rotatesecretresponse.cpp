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

#include "rotatesecretresponse.h"
#include "rotatesecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  RotateSecretResponse
 *
 * @brief  Handles SecretsManager RotateSecret responses.
 *
 * @see    SecretsManagerClient::rotateSecret
 */

/**
 * @brief  Constructs a new RotateSecretResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RotateSecretResponse::RotateSecretResponse(
        const RotateSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new RotateSecretResponsePrivate(this), parent)
{
    setRequest(new RotateSecretRequest(request));
    setReply(reply);
}

const RotateSecretRequest * RotateSecretResponse::request() const
{
    Q_D(const RotateSecretResponse);
    return static_cast<const RotateSecretRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager RotateSecret response.
 *
 * @param  response  Response to parse.
 */
void RotateSecretResponse::parseSuccess(QIODevice &response)
{
    Q_D(RotateSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RotateSecretResponsePrivate
 *
 * @brief  Private implementation for RotateSecretResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RotateSecretResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RotateSecretResponse instance.
 */
RotateSecretResponsePrivate::RotateSecretResponsePrivate(
    RotateSecretResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager RotateSecretResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RotateSecretResponsePrivate::parseRotateSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RotateSecretResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
