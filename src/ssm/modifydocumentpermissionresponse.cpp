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

#include "modifydocumentpermissionresponse.h"
#include "modifydocumentpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  ModifyDocumentPermissionResponse
 *
 * @brief  Handles SSM ModifyDocumentPermission responses.
 *
 * @see    SSMClient::modifyDocumentPermission
 */

/**
 * @brief  Constructs a new ModifyDocumentPermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDocumentPermissionResponse::ModifyDocumentPermissionResponse(
        const ModifyDocumentPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ModifyDocumentPermissionResponsePrivate(this), parent)
{
    setRequest(new ModifyDocumentPermissionRequest(request));
    setReply(reply);
}

const ModifyDocumentPermissionRequest * ModifyDocumentPermissionResponse::request() const
{
    Q_D(const ModifyDocumentPermissionResponse);
    return static_cast<const ModifyDocumentPermissionRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ModifyDocumentPermission response.
 *
 * @param  response  Response to parse.
 */
void ModifyDocumentPermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDocumentPermissionResponsePrivate
 *
 * @brief  Private implementation for ModifyDocumentPermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDocumentPermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDocumentPermissionResponse instance.
 */
ModifyDocumentPermissionResponsePrivate::ModifyDocumentPermissionResponsePrivate(
    ModifyDocumentPermissionQueueResponse * const q) : ModifyDocumentPermissionPrivate(q)
{

}

/**
 * @brief  Parse an SSM ModifyDocumentPermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDocumentPermissionResponsePrivate::ModifyDocumentPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDocumentPermissionResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
