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

#include "createcomputeenvironmentresponse.h"
#include "createcomputeenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Batch {

/**
 * @class  CreateComputeEnvironmentResponse
 *
 * @brief  Handles Batch CreateComputeEnvironment responses.
 *
 * @see    BatchClient::createComputeEnvironment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateComputeEnvironmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new CreateComputeEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateComputeEnvironmentRequest(request));
    setReply(reply);
}

const CreateComputeEnvironmentRequest * CreateComputeEnvironmentResponse::request() const
{
    Q_D(const CreateComputeEnvironmentResponse);
    return static_cast<const CreateComputeEnvironmentRequest *>(d->request);
}

/**
 * @brief  Parse a Batch CreateComputeEnvironment response.
 *
 * @param  response  Response to parse.
 */
void CreateComputeEnvironmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateComputeEnvironmentResponsePrivate
 *
 * @brief  Private implementation for CreateComputeEnvironmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateComputeEnvironmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateComputeEnvironmentResponse instance.
 */
CreateComputeEnvironmentResponsePrivate::CreateComputeEnvironmentResponsePrivate(
    CreateComputeEnvironmentQueueResponse * const q) : CreateComputeEnvironmentPrivate(q)
{

}

/**
 * @brief  Parse an Batch CreateComputeEnvironmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateComputeEnvironmentResponsePrivate::CreateComputeEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComputeEnvironmentResponse"));
    /// @todo
}
