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

#include "updateobjectattributesresponse.h"
#include "updateobjectattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  UpdateObjectAttributesResponse
 *
 * @brief  Handles CloudDirectory UpdateObjectAttributes responses.
 *
 * @see    CloudDirectoryClient::updateObjectAttributes
 */

/**
 * @brief  Constructs a new UpdateObjectAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateObjectAttributesResponse::UpdateObjectAttributesResponse(
        const UpdateObjectAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpdateObjectAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateObjectAttributesRequest(request));
    setReply(reply);
}

const UpdateObjectAttributesRequest * UpdateObjectAttributesResponse::request() const
{
    Q_D(const UpdateObjectAttributesResponse);
    return static_cast<const UpdateObjectAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory UpdateObjectAttributes response.
 *
 * @param  response  Response to parse.
 */
void UpdateObjectAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateObjectAttributesResponsePrivate
 *
 * @brief  Private implementation for UpdateObjectAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateObjectAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateObjectAttributesResponse instance.
 */
UpdateObjectAttributesResponsePrivate::UpdateObjectAttributesResponsePrivate(
    UpdateObjectAttributesQueueResponse * const q) : UpdateObjectAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory UpdateObjectAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateObjectAttributesResponsePrivate::UpdateObjectAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateObjectAttributesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
