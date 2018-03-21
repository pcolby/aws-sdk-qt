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

#include "createactivationresponse.h"
#include "createactivationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  CreateActivationResponse
 *
 * @brief  Handles SSM CreateActivation responses.
 *
 * @see    SSMClient::createActivation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateActivationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateActivationResponsePrivate(this), parent)
{
    setRequest(new CreateActivationRequest(request));
    setReply(reply);
}

const CreateActivationRequest * CreateActivationResponse::request() const
{
    Q_D(const CreateActivationResponse);
    return static_cast<const CreateActivationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreateActivation response.
 *
 * @param  response  Response to parse.
 */
void CreateActivationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateActivationResponsePrivate
 *
 * @brief  Private implementation for CreateActivationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateActivationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateActivationResponse instance.
 */
CreateActivationResponsePrivate::CreateActivationResponsePrivate(
    CreateActivationQueueResponse * const q) : CreateActivationPrivate(q)
{

}

/**
 * @brief  Parse an SSM CreateActivationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateActivationResponsePrivate::CreateActivationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateActivationResponse"));
    /// @todo
}
