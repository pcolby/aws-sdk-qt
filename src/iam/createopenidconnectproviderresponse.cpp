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

#include "createopenidconnectproviderresponse.h"
#include "createopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateOpenIDConnectProviderResponse
 *
 * @brief  Handles IAM CreateOpenIDConnectProvider responses.
 *
 * @see    IAMClient::createOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new CreateOpenIDConnectProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOpenIDConnectProviderResponse::CreateOpenIDConnectProviderResponse(
        const CreateOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new CreateOpenIDConnectProviderRequest(request));
    setReply(reply);
}

const CreateOpenIDConnectProviderRequest * CreateOpenIDConnectProviderResponse::request() const
{
    Q_D(const CreateOpenIDConnectProviderResponse);
    return static_cast<const CreateOpenIDConnectProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateOpenIDConnectProvider response.
 *
 * @param  response  Response to parse.
 */
void CreateOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateOpenIDConnectProviderResponsePrivate
 *
 * @brief  Private implementation for CreateOpenIDConnectProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOpenIDConnectProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateOpenIDConnectProviderResponse instance.
 */
CreateOpenIDConnectProviderResponsePrivate::CreateOpenIDConnectProviderResponsePrivate(
    CreateOpenIDConnectProviderQueueResponse * const q) : CreateOpenIDConnectProviderPrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateOpenIDConnectProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateOpenIDConnectProviderResponsePrivate::CreateOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOpenIDConnectProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
