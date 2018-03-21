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

#include "disablesnapshotcopyresponse.h"
#include "disablesnapshotcopyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DisableSnapshotCopyResponse
 *
 * @brief  Handles Redshift DisableSnapshotCopy responses.
 *
 * @see    RedshiftClient::disableSnapshotCopy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableSnapshotCopyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DisableSnapshotCopyResponsePrivate(this), parent)
{
    setRequest(new DisableSnapshotCopyRequest(request));
    setReply(reply);
}

const DisableSnapshotCopyRequest * DisableSnapshotCopyResponse::request() const
{
    Q_D(const DisableSnapshotCopyResponse);
    return static_cast<const DisableSnapshotCopyRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DisableSnapshotCopy response.
 *
 * @param  response  Response to parse.
 */
void DisableSnapshotCopyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableSnapshotCopyResponsePrivate
 *
 * @brief  Private implementation for DisableSnapshotCopyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableSnapshotCopyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableSnapshotCopyResponse instance.
 */
DisableSnapshotCopyResponsePrivate::DisableSnapshotCopyResponsePrivate(
    DisableSnapshotCopyQueueResponse * const q) : DisableSnapshotCopyPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DisableSnapshotCopyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableSnapshotCopyResponsePrivate::DisableSnapshotCopyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableSnapshotCopyResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
