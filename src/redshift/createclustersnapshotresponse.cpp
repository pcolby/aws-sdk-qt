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

#include "createclustersnapshotresponse.h"
#include "createclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  CreateClusterSnapshotResponse
 *
 * @brief  Handles Redshift CreateClusterSnapshot responses.
 *
 * @see    RedshiftClient::createClusterSnapshot
 */

/**
 * @brief  Constructs a new CreateClusterSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterSnapshotResponse::CreateClusterSnapshotResponse(
        const CreateClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CreateClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateClusterSnapshotRequest(request));
    setReply(reply);
}

const CreateClusterSnapshotRequest * CreateClusterSnapshotResponse::request() const
{
    Q_D(const CreateClusterSnapshotResponse);
    return static_cast<const CreateClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CreateClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClusterSnapshotResponse instance.
 */
CreateClusterSnapshotResponsePrivate::CreateClusterSnapshotResponsePrivate(
    CreateClusterSnapshotQueueResponse * const q) : CreateClusterSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Redshift CreateClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClusterSnapshotResponsePrivate::CreateClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterSnapshotResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
