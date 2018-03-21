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

#include "deletenamespaceresponse.h"
#include "deletenamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  DeleteNamespaceResponse
 *
 * @brief  Handles ServiceDiscovery DeleteNamespace responses.
 *
 * @see    ServiceDiscoveryClient::deleteNamespace
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNamespaceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new DeleteNamespaceResponsePrivate(this), parent)
{
    setRequest(new DeleteNamespaceRequest(request));
    setReply(reply);
}

const DeleteNamespaceRequest * DeleteNamespaceResponse::request() const
{
    Q_D(const DeleteNamespaceResponse);
    return static_cast<const DeleteNamespaceRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery DeleteNamespace response.
 *
 * @param  response  Response to parse.
 */
void DeleteNamespaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteNamespaceResponsePrivate
 *
 * @brief  Private implementation for DeleteNamespaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNamespaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNamespaceResponse instance.
 */
DeleteNamespaceResponsePrivate::DeleteNamespaceResponsePrivate(
    DeleteNamespaceQueueResponse * const q) : DeleteNamespacePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery DeleteNamespaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNamespaceResponsePrivate::DeleteNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNamespaceResponse"));
    /// @todo
}
