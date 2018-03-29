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

#include "updatedirectoryconfigresponse.h"
#include "updatedirectoryconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  UpdateDirectoryConfigResponse
 *
 * @brief  Handles AppStream UpdateDirectoryConfig responses.
 *
 * @see    AppStreamClient::updateDirectoryConfig
 */

/**
 * @brief  Constructs a new UpdateDirectoryConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDirectoryConfigResponse::UpdateDirectoryConfigResponse(
        const UpdateDirectoryConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new UpdateDirectoryConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateDirectoryConfigRequest(request));
    setReply(reply);
}

const UpdateDirectoryConfigRequest * UpdateDirectoryConfigResponse::request() const
{
    Q_D(const UpdateDirectoryConfigResponse);
    return static_cast<const UpdateDirectoryConfigRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream UpdateDirectoryConfig response.
 *
 * @param  response  Response to parse.
 */
void UpdateDirectoryConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDirectoryConfigResponsePrivate
 *
 * @brief  Private implementation for UpdateDirectoryConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDirectoryConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDirectoryConfigResponse instance.
 */
UpdateDirectoryConfigResponsePrivate::UpdateDirectoryConfigResponsePrivate(
    UpdateDirectoryConfigResponse * const q) : AppStreamResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppStream UpdateDirectoryConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDirectoryConfigResponsePrivate::UpdateDirectoryConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDirectoryConfigResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
