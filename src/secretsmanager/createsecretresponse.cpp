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

#include "createsecretresponse.h"
#include "createsecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  CreateSecretResponse
 *
 * @brief  Handles SecretsManager CreateSecret responses.
 *
 * @see    SecretsManagerClient::createSecret
 */

/**
 * @brief  Constructs a new CreateSecretResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSecretResponse::CreateSecretResponse(
        const CreateSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new CreateSecretResponsePrivate(this), parent)
{
    setRequest(new CreateSecretRequest(request));
    setReply(reply);
}

const CreateSecretRequest * CreateSecretResponse::request() const
{
    Q_D(const CreateSecretResponse);
    return static_cast<const CreateSecretRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager CreateSecret response.
 *
 * @param  response  Response to parse.
 */
void CreateSecretResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSecretResponsePrivate
 *
 * @brief  Private implementation for CreateSecretResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecretResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSecretResponse instance.
 */
CreateSecretResponsePrivate::CreateSecretResponsePrivate(
    CreateSecretResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager CreateSecretResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSecretResponsePrivate::parseCreateSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSecretResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
