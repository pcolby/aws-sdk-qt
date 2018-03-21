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

#include "cancelschemaextensionresponse.h"
#include "cancelschemaextensionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  CancelSchemaExtensionResponse
 *
 * @brief  Handles DirectoryService CancelSchemaExtension responses.
 *
 * @see    DirectoryServiceClient::cancelSchemaExtension
 */

/**
 * @brief  Constructs a new CancelSchemaExtensionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelSchemaExtensionResponse::CancelSchemaExtensionResponse(
        const CancelSchemaExtensionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CancelSchemaExtensionResponsePrivate(this), parent)
{
    setRequest(new CancelSchemaExtensionRequest(request));
    setReply(reply);
}

const CancelSchemaExtensionRequest * CancelSchemaExtensionResponse::request() const
{
    Q_D(const CancelSchemaExtensionResponse);
    return static_cast<const CancelSchemaExtensionRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService CancelSchemaExtension response.
 *
 * @param  response  Response to parse.
 */
void CancelSchemaExtensionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelSchemaExtensionResponsePrivate
 *
 * @brief  Private implementation for CancelSchemaExtensionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelSchemaExtensionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelSchemaExtensionResponse instance.
 */
CancelSchemaExtensionResponsePrivate::CancelSchemaExtensionResponsePrivate(
    CancelSchemaExtensionQueueResponse * const q) : CancelSchemaExtensionPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService CancelSchemaExtensionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelSchemaExtensionResponsePrivate::CancelSchemaExtensionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSchemaExtensionResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
