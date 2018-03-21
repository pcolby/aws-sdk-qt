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

#include "deregisterelasticipresponse.h"
#include "deregisterelasticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeregisterElasticIpResponse
 *
 * @brief  Handles OpsWorks DeregisterElasticIp responses.
 *
 * @see    OpsWorksClient::deregisterElasticIp
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterElasticIpResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeregisterElasticIpResponsePrivate(this), parent)
{
    setRequest(new DeregisterElasticIpRequest(request));
    setReply(reply);
}

const DeregisterElasticIpRequest * DeregisterElasticIpResponse::request() const
{
    Q_D(const DeregisterElasticIpResponse);
    return static_cast<const DeregisterElasticIpRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeregisterElasticIp response.
 *
 * @param  response  Response to parse.
 */
void DeregisterElasticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterElasticIpResponsePrivate
 *
 * @brief  Private implementation for DeregisterElasticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterElasticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterElasticIpResponse instance.
 */
DeregisterElasticIpResponsePrivate::DeregisterElasticIpResponsePrivate(
    DeregisterElasticIpQueueResponse * const q) : DeregisterElasticIpPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeregisterElasticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterElasticIpResponsePrivate::DeregisterElasticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterElasticIpResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
