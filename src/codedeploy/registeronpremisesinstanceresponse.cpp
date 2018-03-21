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

#include "registeronpremisesinstanceresponse.h"
#include "registeronpremisesinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  RegisterOnPremisesInstanceResponse
 *
 * @brief  Handles CodeDeploy RegisterOnPremisesInstance responses.
 *
 * @see    CodeDeployClient::registerOnPremisesInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterOnPremisesInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new RegisterOnPremisesInstanceResponsePrivate(this), parent)
{
    setRequest(new RegisterOnPremisesInstanceRequest(request));
    setReply(reply);
}

const RegisterOnPremisesInstanceRequest * RegisterOnPremisesInstanceResponse::request() const
{
    Q_D(const RegisterOnPremisesInstanceResponse);
    return static_cast<const RegisterOnPremisesInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy RegisterOnPremisesInstance response.
 *
 * @param  response  Response to parse.
 */
void RegisterOnPremisesInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterOnPremisesInstanceResponsePrivate
 *
 * @brief  Private implementation for RegisterOnPremisesInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterOnPremisesInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterOnPremisesInstanceResponse instance.
 */
RegisterOnPremisesInstanceResponsePrivate::RegisterOnPremisesInstanceResponsePrivate(
    RegisterOnPremisesInstanceQueueResponse * const q) : RegisterOnPremisesInstancePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy RegisterOnPremisesInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterOnPremisesInstanceResponsePrivate::RegisterOnPremisesInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterOnPremisesInstanceResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
