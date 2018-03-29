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

#include "deletesnapshotcopygrantresponse.h"
#include "deletesnapshotcopygrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteSnapshotCopyGrantResponse
 *
 * @brief  Handles Redshift DeleteSnapshotCopyGrant responses.
 *
 * @see    RedshiftClient::deleteSnapshotCopyGrant
 */

/**
 * @brief  Constructs a new DeleteSnapshotCopyGrantResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSnapshotCopyGrantResponse::DeleteSnapshotCopyGrantResponse(
        const DeleteSnapshotCopyGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteSnapshotCopyGrantResponse(new DeleteSnapshotCopyGrantResponsePrivate(this), parent)
{
    setRequest(new DeleteSnapshotCopyGrantRequest(request));
    setReply(reply);
}

const DeleteSnapshotCopyGrantRequest * DeleteSnapshotCopyGrantResponse::request() const
{
    Q_D(const DeleteSnapshotCopyGrantResponse);
    return static_cast<const DeleteSnapshotCopyGrantRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteSnapshotCopyGrant response.
 *
 * @param  response  Response to parse.
 */
void DeleteSnapshotCopyGrantResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSnapshotCopyGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSnapshotCopyGrantResponsePrivate
 *
 * @brief  Private implementation for DeleteSnapshotCopyGrantResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotCopyGrantResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSnapshotCopyGrantResponse instance.
 */
DeleteSnapshotCopyGrantResponsePrivate::DeleteSnapshotCopyGrantResponsePrivate(
    DeleteSnapshotCopyGrantResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteSnapshotCopyGrantResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSnapshotCopyGrantResponsePrivate::parseDeleteSnapshotCopyGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSnapshotCopyGrantResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
