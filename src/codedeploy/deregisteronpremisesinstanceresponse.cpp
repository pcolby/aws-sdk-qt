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

#include "deregisteronpremisesinstanceresponse.h"
#include "deregisteronpremisesinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  DeregisterOnPremisesInstanceResponse
 *
 * @brief  Handles CodeDeploy DeregisterOnPremisesInstance responses.
 *
 * @see    CodeDeployClient::deregisterOnPremisesInstance
 */

/**
 * @brief  Constructs a new DeregisterOnPremisesInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterOnPremisesInstanceResponse::DeregisterOnPremisesInstanceResponse(
        const DeregisterOnPremisesInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new DeregisterOnPremisesInstanceResponsePrivate(this), parent)
{
    setRequest(new DeregisterOnPremisesInstanceRequest(request));
    setReply(reply);
}

const DeregisterOnPremisesInstanceRequest * DeregisterOnPremisesInstanceResponse::request() const
{
    Q_D(const DeregisterOnPremisesInstanceResponse);
    return static_cast<const DeregisterOnPremisesInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy DeregisterOnPremisesInstance response.
 *
 * @param  response  Response to parse.
 */
void DeregisterOnPremisesInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterOnPremisesInstanceResponsePrivate
 *
 * @brief  Private implementation for DeregisterOnPremisesInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterOnPremisesInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterOnPremisesInstanceResponse instance.
 */
DeregisterOnPremisesInstanceResponsePrivate::DeregisterOnPremisesInstanceResponsePrivate(
    DeregisterOnPremisesInstanceQueueResponse * const q) : DeregisterOnPremisesInstancePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy DeregisterOnPremisesInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterOnPremisesInstanceResponsePrivate::DeregisterOnPremisesInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterOnPremisesInstanceResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
