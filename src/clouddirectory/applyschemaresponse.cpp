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

#include "applyschemaresponse.h"
#include "applyschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ApplySchemaResponse
 *
 * @brief  Handles CloudDirectory ApplySchema responses.
 *
 * @see    CloudDirectoryClient::applySchema
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApplySchemaResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ApplySchemaResponsePrivate(this), parent)
{
    setRequest(new ApplySchemaRequest(request));
    setReply(reply);
}

const ApplySchemaRequest * ApplySchemaResponse::request() const
{
    Q_D(const ApplySchemaResponse);
    return static_cast<const ApplySchemaRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ApplySchema response.
 *
 * @param  response  Response to parse.
 */
void ApplySchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ApplySchemaResponsePrivate
 *
 * @brief  Private implementation for ApplySchemaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplySchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApplySchemaResponse instance.
 */
ApplySchemaResponsePrivate::ApplySchemaResponsePrivate(
    ApplySchemaQueueResponse * const q) : ApplySchemaPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ApplySchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ApplySchemaResponsePrivate::ApplySchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplySchemaResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
