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

#include "updatesecretversionstageresponse.h"
#include "updatesecretversionstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  UpdateSecretVersionStageResponse
 *
 * @brief  Handles SecretsManager UpdateSecretVersionStage responses.
 *
 * @see    SecretsManagerClient::updateSecretVersionStage
 */

/**
 * @brief  Constructs a new UpdateSecretVersionStageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSecretVersionStageResponse::UpdateSecretVersionStageResponse(
        const UpdateSecretVersionStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new UpdateSecretVersionStageResponsePrivate(this), parent)
{
    setRequest(new UpdateSecretVersionStageRequest(request));
    setReply(reply);
}

const UpdateSecretVersionStageRequest * UpdateSecretVersionStageResponse::request() const
{
    Q_D(const UpdateSecretVersionStageResponse);
    return static_cast<const UpdateSecretVersionStageRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager UpdateSecretVersionStage response.
 *
 * @param  response  Response to parse.
 */
void UpdateSecretVersionStageResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSecretVersionStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSecretVersionStageResponsePrivate
 *
 * @brief  Private implementation for UpdateSecretVersionStageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecretVersionStageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSecretVersionStageResponse instance.
 */
UpdateSecretVersionStageResponsePrivate::UpdateSecretVersionStageResponsePrivate(
    UpdateSecretVersionStageResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager UpdateSecretVersionStageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSecretVersionStageResponsePrivate::parseUpdateSecretVersionStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSecretVersionStageResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
