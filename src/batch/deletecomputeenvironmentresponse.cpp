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

#include "deletecomputeenvironmentresponse.h"
#include "deletecomputeenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Batch {

/**
 * @class  DeleteComputeEnvironmentResponse
 *
 * @brief  Handles Batch DeleteComputeEnvironment responses.
 *
 * @see    BatchClient::deleteComputeEnvironment
 */

/**
 * @brief  Constructs a new DeleteComputeEnvironmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteComputeEnvironmentResponse::DeleteComputeEnvironmentResponse(
        const DeleteComputeEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DeleteComputeEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteComputeEnvironmentRequest(request));
    setReply(reply);
}

const DeleteComputeEnvironmentRequest * DeleteComputeEnvironmentResponse::request() const
{
    Q_D(const DeleteComputeEnvironmentResponse);
    return static_cast<const DeleteComputeEnvironmentRequest *>(d->request);
}

/**
 * @brief  Parse a Batch DeleteComputeEnvironment response.
 *
 * @param  response  Response to parse.
 */
void DeleteComputeEnvironmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteComputeEnvironmentResponsePrivate
 *
 * @brief  Private implementation for DeleteComputeEnvironmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteComputeEnvironmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteComputeEnvironmentResponse instance.
 */
DeleteComputeEnvironmentResponsePrivate::DeleteComputeEnvironmentResponsePrivate(
    DeleteComputeEnvironmentQueueResponse * const q) : DeleteComputeEnvironmentPrivate(q)
{

}

/**
 * @brief  Parse an Batch DeleteComputeEnvironmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteComputeEnvironmentResponsePrivate::DeleteComputeEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteComputeEnvironmentResponse"));
    /// @todo
}

} // namespace Batch
} // namespace AWS
