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

#include "deletethreatintelsetresponse.h"
#include "deletethreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  DeleteThreatIntelSetResponse
 *
 * @brief  Handles GuardDuty DeleteThreatIntelSet responses.
 *
 * @see    GuardDutyClient::deleteThreatIntelSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThreatIntelSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new DeleteThreatIntelSetRequest(request));
    setReply(reply);
}

const DeleteThreatIntelSetRequest * DeleteThreatIntelSetResponse::request() const
{
    Q_D(const DeleteThreatIntelSetResponse);
    return static_cast<const DeleteThreatIntelSetRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty DeleteThreatIntelSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteThreatIntelSetResponsePrivate
 *
 * @brief  Private implementation for DeleteThreatIntelSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThreatIntelSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteThreatIntelSetResponse instance.
 */
DeleteThreatIntelSetResponsePrivate::DeleteThreatIntelSetResponsePrivate(
    DeleteThreatIntelSetQueueResponse * const q) : DeleteThreatIntelSetPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty DeleteThreatIntelSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteThreatIntelSetResponsePrivate::DeleteThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThreatIntelSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
