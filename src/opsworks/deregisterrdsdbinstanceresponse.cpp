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

#include "deregisterrdsdbinstanceresponse.h"
#include "deregisterrdsdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeregisterRdsDbInstanceResponse
 *
 * @brief  Handles OpsWorks DeregisterRdsDbInstance responses.
 *
 * @see    OpsWorksClient::deregisterRdsDbInstance
 */

/**
 * @brief  Constructs a new DeregisterRdsDbInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterRdsDbInstanceResponse::DeregisterRdsDbInstanceResponse(
        const DeregisterRdsDbInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeregisterRdsDbInstanceResponsePrivate(this), parent)
{
    setRequest(new DeregisterRdsDbInstanceRequest(request));
    setReply(reply);
}

const DeregisterRdsDbInstanceRequest * DeregisterRdsDbInstanceResponse::request() const
{
    Q_D(const DeregisterRdsDbInstanceResponse);
    return static_cast<const DeregisterRdsDbInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeregisterRdsDbInstance response.
 *
 * @param  response  Response to parse.
 */
void DeregisterRdsDbInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterRdsDbInstanceResponsePrivate
 *
 * @brief  Private implementation for DeregisterRdsDbInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterRdsDbInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterRdsDbInstanceResponse instance.
 */
DeregisterRdsDbInstanceResponsePrivate::DeregisterRdsDbInstanceResponsePrivate(
    DeregisterRdsDbInstanceQueueResponse * const q) : DeregisterRdsDbInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeregisterRdsDbInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterRdsDbInstanceResponsePrivate::DeregisterRdsDbInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterRdsDbInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
