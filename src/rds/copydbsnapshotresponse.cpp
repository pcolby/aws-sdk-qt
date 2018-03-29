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

#include "copydbsnapshotresponse.h"
#include "copydbsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CopyDBSnapshotResponse
 *
 * @brief  Handles RDS CopyDBSnapshot responses.
 *
 * @see    RDSClient::copyDBSnapshot
 */

/**
 * @brief  Constructs a new CopyDBSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyDBSnapshotResponse::CopyDBSnapshotResponse(
        const CopyDBSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CopyDBSnapshotResponse(new CopyDBSnapshotResponsePrivate(this), parent)
{
    setRequest(new CopyDBSnapshotRequest(request));
    setReply(reply);
}

const CopyDBSnapshotRequest * CopyDBSnapshotResponse::request() const
{
    Q_D(const CopyDBSnapshotResponse);
    return static_cast<const CopyDBSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CopyDBSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CopyDBSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(CopyDBSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyDBSnapshotResponsePrivate
 *
 * @brief  Private implementation for CopyDBSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyDBSnapshotResponse instance.
 */
CopyDBSnapshotResponsePrivate::CopyDBSnapshotResponsePrivate(
    CopyDBSnapshotResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS CopyDBSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyDBSnapshotResponsePrivate::parseCopyDBSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBSnapshotResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
