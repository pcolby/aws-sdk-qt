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

#include "associateelasticipresponse.h"
#include "associateelasticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  AssociateElasticIpResponse
 *
 * @brief  Handles OpsWorks AssociateElasticIp responses.
 *
 * @see    OpsWorksClient::associateElasticIp
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateElasticIpResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new AssociateElasticIpResponsePrivate(this), parent)
{
    setRequest(new AssociateElasticIpRequest(request));
    setReply(reply);
}

const AssociateElasticIpRequest * AssociateElasticIpResponse::request() const
{
    Q_D(const AssociateElasticIpResponse);
    return static_cast<const AssociateElasticIpRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks AssociateElasticIp response.
 *
 * @param  response  Response to parse.
 */
void AssociateElasticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateElasticIpResponsePrivate
 *
 * @brief  Private implementation for AssociateElasticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateElasticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateElasticIpResponse instance.
 */
AssociateElasticIpResponsePrivate::AssociateElasticIpResponsePrivate(
    AssociateElasticIpQueueResponse * const q) : AssociateElasticIpPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks AssociateElasticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateElasticIpResponsePrivate::AssociateElasticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateElasticIpResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
