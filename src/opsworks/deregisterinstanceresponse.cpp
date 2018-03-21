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

#include "deregisterinstanceresponse.h"
#include "deregisterinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeregisterInstanceResponse
 *
 * @brief  Handles OpsWorks DeregisterInstance responses.
 *
 * @see    OpsWorksClient::deregisterInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeregisterInstanceResponsePrivate(this), parent)
{
    setRequest(new DeregisterInstanceRequest(request));
    setReply(reply);
}

const DeregisterInstanceRequest * DeregisterInstanceResponse::request() const
{
    Q_D(const DeregisterInstanceResponse);
    return static_cast<const DeregisterInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeregisterInstance response.
 *
 * @param  response  Response to parse.
 */
void DeregisterInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterInstanceResponsePrivate
 *
 * @brief  Private implementation for DeregisterInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterInstanceResponse instance.
 */
DeregisterInstanceResponsePrivate::DeregisterInstanceResponsePrivate(
    DeregisterInstanceQueueResponse * const q) : DeregisterInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeregisterInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterInstanceResponsePrivate::DeregisterInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
