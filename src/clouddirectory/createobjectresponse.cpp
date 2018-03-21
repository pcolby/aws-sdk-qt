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

#include "createobjectresponse.h"
#include "createobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateObjectResponse
 *
 * @brief  Handles CloudDirectory CreateObject responses.
 *
 * @see    CloudDirectoryClient::createObject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateObjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateObjectResponsePrivate(this), parent)
{
    setRequest(new CreateObjectRequest(request));
    setReply(reply);
}

const CreateObjectRequest * CreateObjectResponse::request() const
{
    Q_D(const CreateObjectResponse);
    return static_cast<const CreateObjectRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory CreateObject response.
 *
 * @param  response  Response to parse.
 */
void CreateObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateObjectResponsePrivate
 *
 * @brief  Private implementation for CreateObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateObjectResponse instance.
 */
CreateObjectResponsePrivate::CreateObjectResponsePrivate(
    CreateObjectQueueResponse * const q) : CreateObjectPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory CreateObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateObjectResponsePrivate::CreateObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateObjectResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
