/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createdbclustersnapshotresponse.h"
#include "createdbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBClusterSnapshotResponse
 *
 * @brief  Handles RDS CreateDBClusterSnapshot responses.
 *
 * @see    RDSClient::createDBClusterSnapshot
 */

/**
 * @brief  Constructs a new CreateDBClusterSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBClusterSnapshotResponse::CreateDBClusterSnapshotResponse(
        const CreateDBClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterSnapshotRequest(request));
    setReply(reply);
}

const CreateDBClusterSnapshotRequest * CreateDBClusterSnapshotResponse::request() const
{
    Q_D(const CreateDBClusterSnapshotResponse);
    return static_cast<const CreateDBClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateDBClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBClusterSnapshotResponse instance.
 */
CreateDBClusterSnapshotResponsePrivate::CreateDBClusterSnapshotResponsePrivate(
    CreateDBClusterSnapshotQueueResponse * const q) : CreateDBClusterSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBClusterSnapshotResponsePrivate::CreateDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterSnapshotResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
