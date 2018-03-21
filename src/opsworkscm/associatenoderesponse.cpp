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

#include "associatenoderesponse.h"
#include "associatenoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  AssociateNodeResponse
 *
 * @brief  Handles OpsWorksCM AssociateNode responses.
 *
 * @see    OpsWorksCMClient::associateNode
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateNodeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new AssociateNodeResponsePrivate(this), parent)
{
    setRequest(new AssociateNodeRequest(request));
    setReply(reply);
}

const AssociateNodeRequest * AssociateNodeResponse::request() const
{
    Q_D(const AssociateNodeResponse);
    return static_cast<const AssociateNodeRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM AssociateNode response.
 *
 * @param  response  Response to parse.
 */
void AssociateNodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateNodeResponsePrivate
 *
 * @brief  Private implementation for AssociateNodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateNodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateNodeResponse instance.
 */
AssociateNodeResponsePrivate::AssociateNodeResponsePrivate(
    AssociateNodeQueueResponse * const q) : AssociateNodePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM AssociateNodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateNodeResponsePrivate::AssociateNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateNodeResponse"));
    /// @todo
}
