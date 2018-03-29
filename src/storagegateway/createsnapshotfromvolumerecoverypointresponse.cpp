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

#include "createsnapshotfromvolumerecoverypointresponse.h"
#include "createsnapshotfromvolumerecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateSnapshotFromVolumeRecoveryPointResponse
 *
 * @brief  Handles StorageGateway CreateSnapshotFromVolumeRecoveryPoint responses.
 *
 * @see    StorageGatewayClient::createSnapshotFromVolumeRecoveryPoint
 */

/**
 * @brief  Constructs a new CreateSnapshotFromVolumeRecoveryPointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSnapshotFromVolumeRecoveryPointResponse::CreateSnapshotFromVolumeRecoveryPointResponse(
        const CreateSnapshotFromVolumeRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new CreateSnapshotFromVolumeRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new CreateSnapshotFromVolumeRecoveryPointRequest(request));
    setReply(reply);
}

const CreateSnapshotFromVolumeRecoveryPointRequest * CreateSnapshotFromVolumeRecoveryPointResponse::request() const
{
    Q_D(const CreateSnapshotFromVolumeRecoveryPointResponse);
    return static_cast<const CreateSnapshotFromVolumeRecoveryPointRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CreateSnapshotFromVolumeRecoveryPoint response.
 *
 * @param  response  Response to parse.
 */
void CreateSnapshotFromVolumeRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSnapshotFromVolumeRecoveryPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSnapshotFromVolumeRecoveryPointResponsePrivate
 *
 * @brief  Private implementation for CreateSnapshotFromVolumeRecoveryPointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotFromVolumeRecoveryPointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSnapshotFromVolumeRecoveryPointResponse instance.
 */
CreateSnapshotFromVolumeRecoveryPointResponsePrivate::CreateSnapshotFromVolumeRecoveryPointResponsePrivate(
    CreateSnapshotFromVolumeRecoveryPointResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CreateSnapshotFromVolumeRecoveryPointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSnapshotFromVolumeRecoveryPointResponsePrivate::CreateSnapshotFromVolumeRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSnapshotFromVolumeRecoveryPointResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
