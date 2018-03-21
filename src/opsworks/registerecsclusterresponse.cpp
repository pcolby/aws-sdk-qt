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

#include "registerecsclusterresponse.h"
#include "registerecsclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  RegisterEcsClusterResponse
 *
 * @brief  Handles OpsWorks RegisterEcsCluster responses.
 *
 * @see    OpsWorksClient::registerEcsCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterEcsClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new RegisterEcsClusterResponsePrivate(this), parent)
{
    setRequest(new RegisterEcsClusterRequest(request));
    setReply(reply);
}

const RegisterEcsClusterRequest * RegisterEcsClusterResponse::request() const
{
    Q_D(const RegisterEcsClusterResponse);
    return static_cast<const RegisterEcsClusterRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks RegisterEcsCluster response.
 *
 * @param  response  Response to parse.
 */
void RegisterEcsClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterEcsClusterResponsePrivate
 *
 * @brief  Private implementation for RegisterEcsClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterEcsClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterEcsClusterResponse instance.
 */
RegisterEcsClusterResponsePrivate::RegisterEcsClusterResponsePrivate(
    RegisterEcsClusterQueueResponse * const q) : RegisterEcsClusterPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks RegisterEcsClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterEcsClusterResponsePrivate::RegisterEcsClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterEcsClusterResponse"));
    /// @todo
}
