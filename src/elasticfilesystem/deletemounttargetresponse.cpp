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

#include "deletemounttargetresponse.h"
#include "deletemounttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/**
 * @class  DeleteMountTargetResponse
 *
 * @brief  Handles EFS DeleteMountTarget responses.
 *
 * @see    EFSClient::deleteMountTarget
 */

/**
 * @brief  Constructs a new DeleteMountTargetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMountTargetResponse::DeleteMountTargetResponse(
        const DeleteMountTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteMountTargetResponse(new DeleteMountTargetResponsePrivate(this), parent)
{
    setRequest(new DeleteMountTargetRequest(request));
    setReply(reply);
}

const DeleteMountTargetRequest * DeleteMountTargetResponse::request() const
{
    Q_D(const DeleteMountTargetResponse);
    return static_cast<const DeleteMountTargetRequest *>(d->request);
}

/**
 * @brief  Parse a EFS DeleteMountTarget response.
 *
 * @param  response  Response to parse.
 */
void DeleteMountTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteMountTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMountTargetResponsePrivate
 *
 * @brief  Private implementation for DeleteMountTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMountTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMountTargetResponse instance.
 */
DeleteMountTargetResponsePrivate::DeleteMountTargetResponsePrivate(
    DeleteMountTargetResponse * const q) : EFSResponsePrivate(q)
{

}

/**
 * @brief  Parse an EFS DeleteMountTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMountTargetResponsePrivate::parseDeleteMountTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMountTargetResponse"));
    /// @todo
}

} // namespace EFS
} // namespace QtAws
