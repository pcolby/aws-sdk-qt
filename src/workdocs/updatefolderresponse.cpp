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

#include "updatefolderresponse.h"
#include "updatefolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  UpdateFolderResponse
 *
 * @brief  Handles WorkDocs UpdateFolder responses.
 *
 * @see    WorkDocsClient::updateFolder
 */

/**
 * @brief  Constructs a new UpdateFolderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFolderResponse::UpdateFolderResponse(
        const UpdateFolderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new UpdateFolderResponsePrivate(this), parent)
{
    setRequest(new UpdateFolderRequest(request));
    setReply(reply);
}

const UpdateFolderRequest * UpdateFolderResponse::request() const
{
    Q_D(const UpdateFolderResponse);
    return static_cast<const UpdateFolderRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs UpdateFolder response.
 *
 * @param  response  Response to parse.
 */
void UpdateFolderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFolderResponsePrivate
 *
 * @brief  Private implementation for UpdateFolderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFolderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFolderResponse instance.
 */
UpdateFolderResponsePrivate::UpdateFolderResponsePrivate(
    UpdateFolderQueueResponse * const q) : UpdateFolderPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs UpdateFolderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFolderResponsePrivate::UpdateFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFolderResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
