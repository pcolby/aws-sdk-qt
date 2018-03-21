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

#include "importinstanceresponse.h"
#include "importinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ImportInstanceResponse
 *
 * @brief  Handles EC2 ImportInstance responses.
 *
 * @see    EC2Client::importInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ImportInstanceResponsePrivate(this), parent)
{
    setRequest(new ImportInstanceRequest(request));
    setReply(reply);
}

const ImportInstanceRequest * ImportInstanceResponse::request() const
{
    Q_D(const ImportInstanceResponse);
    return static_cast<const ImportInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ImportInstance response.
 *
 * @param  response  Response to parse.
 */
void ImportInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportInstanceResponsePrivate
 *
 * @brief  Private implementation for ImportInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportInstanceResponse instance.
 */
ImportInstanceResponsePrivate::ImportInstanceResponsePrivate(
    ImportInstanceQueueResponse * const q) : ImportInstancePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ImportInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportInstanceResponsePrivate::ImportInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportInstanceResponse"));
    /// @todo
}
