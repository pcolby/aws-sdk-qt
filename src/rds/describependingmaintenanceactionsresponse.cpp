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

#include "describependingmaintenanceactionsresponse.h"
#include "describependingmaintenanceactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribePendingMaintenanceActionsResponse
 *
 * @brief  Handles RDS DescribePendingMaintenanceActions responses.
 *
 * @see    RDSClient::describePendingMaintenanceActions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePendingMaintenanceActionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribePendingMaintenanceActionsResponsePrivate(this), parent)
{
    setRequest(new DescribePendingMaintenanceActionsRequest(request));
    setReply(reply);
}

const DescribePendingMaintenanceActionsRequest * DescribePendingMaintenanceActionsResponse::request() const
{
    Q_D(const DescribePendingMaintenanceActionsResponse);
    return static_cast<const DescribePendingMaintenanceActionsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribePendingMaintenanceActions response.
 *
 * @param  response  Response to parse.
 */
void DescribePendingMaintenanceActionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePendingMaintenanceActionsResponsePrivate
 *
 * @brief  Private implementation for DescribePendingMaintenanceActionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePendingMaintenanceActionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePendingMaintenanceActionsResponse instance.
 */
DescribePendingMaintenanceActionsResponsePrivate::DescribePendingMaintenanceActionsResponsePrivate(
    DescribePendingMaintenanceActionsQueueResponse * const q) : DescribePendingMaintenanceActionsPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribePendingMaintenanceActionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePendingMaintenanceActionsResponsePrivate::DescribePendingMaintenanceActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePendingMaintenanceActionsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
