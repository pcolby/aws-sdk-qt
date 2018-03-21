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

#include "modifysnapshotcopyretentionperiodresponse.h"
#include "modifysnapshotcopyretentionperiodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  ModifySnapshotCopyRetentionPeriodResponse
 *
 * @brief  Handles Redshift ModifySnapshotCopyRetentionPeriod responses.
 *
 * @see    RedshiftClient::modifySnapshotCopyRetentionPeriod
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifySnapshotCopyRetentionPeriodResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new ModifySnapshotCopyRetentionPeriodResponsePrivate(this), parent)
{
    setRequest(new ModifySnapshotCopyRetentionPeriodRequest(request));
    setReply(reply);
}

const ModifySnapshotCopyRetentionPeriodRequest * ModifySnapshotCopyRetentionPeriodResponse::request() const
{
    Q_D(const ModifySnapshotCopyRetentionPeriodResponse);
    return static_cast<const ModifySnapshotCopyRetentionPeriodRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift ModifySnapshotCopyRetentionPeriod response.
 *
 * @param  response  Response to parse.
 */
void ModifySnapshotCopyRetentionPeriodResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifySnapshotCopyRetentionPeriodResponsePrivate
 *
 * @brief  Private implementation for ModifySnapshotCopyRetentionPeriodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifySnapshotCopyRetentionPeriodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifySnapshotCopyRetentionPeriodResponse instance.
 */
ModifySnapshotCopyRetentionPeriodResponsePrivate::ModifySnapshotCopyRetentionPeriodResponsePrivate(
    ModifySnapshotCopyRetentionPeriodQueueResponse * const q) : ModifySnapshotCopyRetentionPeriodPrivate(q)
{

}

/**
 * @brief  Parse an Redshift ModifySnapshotCopyRetentionPeriodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifySnapshotCopyRetentionPeriodResponsePrivate::ModifySnapshotCopyRetentionPeriodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifySnapshotCopyRetentionPeriodResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
