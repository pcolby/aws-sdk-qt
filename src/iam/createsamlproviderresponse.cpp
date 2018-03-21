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

#include "createsamlproviderresponse.h"
#include "createsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateSAMLProviderResponse
 *
 * @brief  Handles IAM CreateSAMLProvider responses.
 *
 * @see    IAMClient::createSAMLProvider
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSAMLProviderResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new CreateSAMLProviderRequest(request));
    setReply(reply);
}

const CreateSAMLProviderRequest * CreateSAMLProviderResponse::request() const
{
    Q_D(const CreateSAMLProviderResponse);
    return static_cast<const CreateSAMLProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateSAMLProvider response.
 *
 * @param  response  Response to parse.
 */
void CreateSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSAMLProviderResponsePrivate
 *
 * @brief  Private implementation for CreateSAMLProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSAMLProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSAMLProviderResponse instance.
 */
CreateSAMLProviderResponsePrivate::CreateSAMLProviderResponsePrivate(
    CreateSAMLProviderQueueResponse * const q) : CreateSAMLProviderPrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateSAMLProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSAMLProviderResponsePrivate::CreateSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSAMLProviderResponse"));
    /// @todo
}
