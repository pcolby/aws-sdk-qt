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

#include "continuedeploymentresponse.h"
#include "continuedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ContinueDeploymentResponse
 *
 * @brief  Handles CodeDeploy ContinueDeployment responses.
 *
 * @see    CodeDeployClient::continueDeployment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ContinueDeploymentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ContinueDeploymentResponsePrivate(this), parent)
{
    setRequest(new ContinueDeploymentRequest(request));
    setReply(reply);
}

const ContinueDeploymentRequest * ContinueDeploymentResponse::request() const
{
    Q_D(const ContinueDeploymentResponse);
    return static_cast<const ContinueDeploymentRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ContinueDeployment response.
 *
 * @param  response  Response to parse.
 */
void ContinueDeploymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ContinueDeploymentResponsePrivate
 *
 * @brief  Private implementation for ContinueDeploymentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ContinueDeploymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ContinueDeploymentResponse instance.
 */
ContinueDeploymentResponsePrivate::ContinueDeploymentResponsePrivate(
    ContinueDeploymentQueueResponse * const q) : ContinueDeploymentPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ContinueDeploymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ContinueDeploymentResponsePrivate::ContinueDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ContinueDeploymentResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
