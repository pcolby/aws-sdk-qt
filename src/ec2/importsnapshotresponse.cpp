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

#include "importsnapshotresponse.h"
#include "importsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ImportSnapshotResponse
 *
 * @brief  Handles EC2 ImportSnapshot responses.
 *
 * @see    EC2Client::importSnapshot
 */

/**
 * @brief  Constructs a new ImportSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportSnapshotResponse::ImportSnapshotResponse(
        const ImportSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ImportSnapshotResponsePrivate(this), parent)
{
    setRequest(new ImportSnapshotRequest(request));
    setReply(reply);
}

const ImportSnapshotRequest * ImportSnapshotResponse::request() const
{
    Q_D(const ImportSnapshotResponse);
    return static_cast<const ImportSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ImportSnapshot response.
 *
 * @param  response  Response to parse.
 */
void ImportSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportSnapshotResponsePrivate
 *
 * @brief  Private implementation for ImportSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportSnapshotResponse instance.
 */
ImportSnapshotResponsePrivate::ImportSnapshotResponsePrivate(
    ImportSnapshotQueueResponse * const q) : ImportSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ImportSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportSnapshotResponsePrivate::ImportSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportSnapshotResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
