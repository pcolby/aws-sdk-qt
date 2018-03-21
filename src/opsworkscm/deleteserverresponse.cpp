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

#include "deleteserverresponse.h"
#include "deleteserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DeleteServerResponse
 *
 * @brief  Handles OpsWorksCM DeleteServer responses.
 *
 * @see    OpsWorksCMClient::deleteServer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new DeleteServerResponsePrivate(this), parent)
{
    setRequest(new DeleteServerRequest(request));
    setReply(reply);
}

const DeleteServerRequest * DeleteServerResponse::request() const
{
    Q_D(const DeleteServerResponse);
    return static_cast<const DeleteServerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM DeleteServer response.
 *
 * @param  response  Response to parse.
 */
void DeleteServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteServerResponsePrivate
 *
 * @brief  Private implementation for DeleteServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteServerResponse instance.
 */
DeleteServerResponsePrivate::DeleteServerResponsePrivate(
    DeleteServerQueueResponse * const q) : DeleteServerPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM DeleteServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteServerResponsePrivate::DeleteServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServerResponse"));
    /// @todo
}
