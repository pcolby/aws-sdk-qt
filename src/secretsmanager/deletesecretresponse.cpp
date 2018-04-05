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

#include "deletesecretresponse.h"
#include "deletesecretresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  DeleteSecretResponse
 *
 * @brief  Handles SecretsManager DeleteSecret responses.
 *
 * @see    SecretsManagerClient::deleteSecret
 */

/**
 * @brief  Constructs a new DeleteSecretResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSecretResponse::DeleteSecretResponse(
        const DeleteSecretRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new DeleteSecretResponsePrivate(this), parent)
{
    setRequest(new DeleteSecretRequest(request));
    setReply(reply);
}

const DeleteSecretRequest * DeleteSecretResponse::request() const
{
    Q_D(const DeleteSecretResponse);
    return static_cast<const DeleteSecretRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager DeleteSecret response.
 *
 * @param  response  Response to parse.
 */
void DeleteSecretResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSecretResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSecretResponsePrivate
 *
 * @brief  Private implementation for DeleteSecretResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecretResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSecretResponse instance.
 */
DeleteSecretResponsePrivate::DeleteSecretResponsePrivate(
    DeleteSecretResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager DeleteSecretResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSecretResponsePrivate::parseDeleteSecretResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSecretResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
