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

#include "deletehostedzoneresponse.h"
#include "deletehostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteHostedZoneResponse
 *
 * @brief  Handles Route53 DeleteHostedZone responses.
 *
 * @see    Route53Client::deleteHostedZone
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHostedZoneResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteHostedZoneResponsePrivate(this), parent)
{
    setRequest(new DeleteHostedZoneRequest(request));
    setReply(reply);
}

const DeleteHostedZoneRequest * DeleteHostedZoneResponse::request() const
{
    Q_D(const DeleteHostedZoneResponse);
    return static_cast<const DeleteHostedZoneRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 DeleteHostedZone response.
 *
 * @param  response  Response to parse.
 */
void DeleteHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteHostedZoneResponsePrivate
 *
 * @brief  Private implementation for DeleteHostedZoneResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHostedZoneResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHostedZoneResponse instance.
 */
DeleteHostedZoneResponsePrivate::DeleteHostedZoneResponsePrivate(
    DeleteHostedZoneQueueResponse * const q) : DeleteHostedZonePrivate(q)
{

}

/**
 * @brief  Parse an Route53 DeleteHostedZoneResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHostedZoneResponsePrivate::DeleteHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHostedZoneResponse"));
    /// @todo
}
