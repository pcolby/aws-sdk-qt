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

#include "restoresecretresponse.h"
#include "restoresecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  RestoreSecretResponse
 *
 * @brief  Handles SecretsManager RestoreSecret responses.
 *
 * @see    SecretsManagerClient::restoreSecret
 */

/**
 * @brief  Constructs a new RestoreSecretResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreSecretResponse::RestoreSecretResponse(
        const RestoreSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new RestoreSecretResponsePrivate(this), parent)
{
    setRequest(new RestoreSecretRequest(request));
    setReply(reply);
}

const RestoreSecretRequest * RestoreSecretResponse::request() const
{
    Q_D(const RestoreSecretResponse);
    return static_cast<const RestoreSecretRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager RestoreSecret response.
 *
 * @param  response  Response to parse.
 */
void RestoreSecretResponse::parseSuccess(QIODevice &response)
{
    Q_D(RestoreSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreSecretResponsePrivate
 *
 * @brief  Private implementation for RestoreSecretResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreSecretResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreSecretResponse instance.
 */
RestoreSecretResponsePrivate::RestoreSecretResponsePrivate(
    RestoreSecretResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager RestoreSecretResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreSecretResponsePrivate::parseRestoreSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreSecretResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
