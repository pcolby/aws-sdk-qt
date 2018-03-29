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

#include "deleteuploadresponse.h"
#include "deleteuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  DeleteUploadResponse
 *
 * @brief  Handles DeviceFarm DeleteUpload responses.
 *
 * @see    DeviceFarmClient::deleteUpload
 */

/**
 * @brief  Constructs a new DeleteUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUploadResponse::DeleteUploadResponse(
        const DeleteUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteUploadResponsePrivate(this), parent)
{
    setRequest(new DeleteUploadRequest(request));
    setReply(reply);
}

const DeleteUploadRequest * DeleteUploadResponse::request() const
{
    Q_D(const DeleteUploadResponse);
    return static_cast<const DeleteUploadRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm DeleteUpload response.
 *
 * @param  response  Response to parse.
 */
void DeleteUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUploadResponsePrivate
 *
 * @brief  Private implementation for DeleteUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUploadResponse instance.
 */
DeleteUploadResponsePrivate::DeleteUploadResponsePrivate(
    DeleteUploadQueueResponse * const q) : DeleteUploadPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm DeleteUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUploadResponsePrivate::DeleteUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUploadResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
