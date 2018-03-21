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

#include "rebootnoderesponse.h"
#include "rebootnoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  RebootNodeResponse
 *
 * @brief  Handles DAX RebootNode responses.
 *
 * @see    DAXClient::rebootNode
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootNodeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new RebootNodeResponsePrivate(this), parent)
{
    setRequest(new RebootNodeRequest(request));
    setReply(reply);
}

const RebootNodeRequest * RebootNodeResponse::request() const
{
    Q_D(const RebootNodeResponse);
    return static_cast<const RebootNodeRequest *>(d->request);
}

/**
 * @brief  Parse a DAX RebootNode response.
 *
 * @param  response  Response to parse.
 */
void RebootNodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootNodeResponsePrivate
 *
 * @brief  Private implementation for RebootNodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootNodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootNodeResponse instance.
 */
RebootNodeResponsePrivate::RebootNodeResponsePrivate(
    RebootNodeQueueResponse * const q) : RebootNodePrivate(q)
{

}

/**
 * @brief  Parse an DAX RebootNodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootNodeResponsePrivate::RebootNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootNodeResponse"));
    /// @todo
}
