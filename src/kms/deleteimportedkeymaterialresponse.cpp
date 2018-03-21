/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteimportedkeymaterialresponse.h"
#include "deleteimportedkeymaterialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  DeleteImportedKeyMaterialResponse
 *
 * @brief  Handles KMS DeleteImportedKeyMaterial responses.
 *
 * @see    KMSClient::deleteImportedKeyMaterial
 */

/**
 * @brief  Constructs a new DeleteImportedKeyMaterialResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteImportedKeyMaterialResponse::DeleteImportedKeyMaterialResponse(
        const DeleteImportedKeyMaterialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new DeleteImportedKeyMaterialResponsePrivate(this), parent)
{
    setRequest(new DeleteImportedKeyMaterialRequest(request));
    setReply(reply);
}

const DeleteImportedKeyMaterialRequest * DeleteImportedKeyMaterialResponse::request() const
{
    Q_D(const DeleteImportedKeyMaterialResponse);
    return static_cast<const DeleteImportedKeyMaterialRequest *>(d->request);
}

/**
 * @brief  Parse a KMS DeleteImportedKeyMaterial response.
 *
 * @param  response  Response to parse.
 */
void DeleteImportedKeyMaterialResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteImportedKeyMaterialResponsePrivate
 *
 * @brief  Private implementation for DeleteImportedKeyMaterialResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImportedKeyMaterialResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteImportedKeyMaterialResponse instance.
 */
DeleteImportedKeyMaterialResponsePrivate::DeleteImportedKeyMaterialResponsePrivate(
    DeleteImportedKeyMaterialQueueResponse * const q) : DeleteImportedKeyMaterialPrivate(q)
{

}

/**
 * @brief  Parse an KMS DeleteImportedKeyMaterialResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteImportedKeyMaterialResponsePrivate::DeleteImportedKeyMaterialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImportedKeyMaterialResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS
