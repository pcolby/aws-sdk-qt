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

#include "createsnapshotcopygrantresponse.h"
#include "createsnapshotcopygrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  CreateSnapshotCopyGrantResponse
 *
 * @brief  Handles Redshift CreateSnapshotCopyGrant responses.
 *
 * @see    RedshiftClient::createSnapshotCopyGrant
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSnapshotCopyGrantResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CreateSnapshotCopyGrantResponsePrivate(this), parent)
{
    setRequest(new CreateSnapshotCopyGrantRequest(request));
    setReply(reply);
}

const CreateSnapshotCopyGrantRequest * CreateSnapshotCopyGrantResponse::request() const
{
    Q_D(const CreateSnapshotCopyGrantResponse);
    return static_cast<const CreateSnapshotCopyGrantRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CreateSnapshotCopyGrant response.
 *
 * @param  response  Response to parse.
 */
void CreateSnapshotCopyGrantResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSnapshotCopyGrantResponsePrivate
 *
 * @brief  Private implementation for CreateSnapshotCopyGrantResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotCopyGrantResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSnapshotCopyGrantResponse instance.
 */
CreateSnapshotCopyGrantResponsePrivate::CreateSnapshotCopyGrantResponsePrivate(
    CreateSnapshotCopyGrantQueueResponse * const q) : CreateSnapshotCopyGrantPrivate(q)
{

}

/**
 * @brief  Parse an Redshift CreateSnapshotCopyGrantResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSnapshotCopyGrantResponsePrivate::CreateSnapshotCopyGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSnapshotCopyGrantResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
