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

#include "createdbsnapshotresponse.h"
#include "createdbsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBSnapshotResponse
 *
 * @brief  Handles RDS CreateDBSnapshot responses.
 *
 * @see    RDSClient::createDBSnapshot
 */

/**
 * @brief  Constructs a new CreateDBSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBSnapshotResponse::CreateDBSnapshotResponse(
        const CreateDBSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDBSnapshotResponse(new CreateDBSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateDBSnapshotRequest(request));
    setReply(reply);
}

const CreateDBSnapshotRequest * CreateDBSnapshotResponse::request() const
{
    Q_D(const CreateDBSnapshotResponse);
    return static_cast<const CreateDBSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateDBSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDBSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateDBSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBSnapshotResponse instance.
 */
CreateDBSnapshotResponsePrivate::CreateDBSnapshotResponsePrivate(
    CreateDBSnapshotResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBSnapshotResponsePrivate::parseCreateDBSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBSnapshotResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
