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

#include "createaliasresponse.h"
#include "createaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  CreateAliasResponse
 *
 * @brief  Handles DirectoryService CreateAlias responses.
 *
 * @see    DirectoryServiceClient::createAlias
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAliasResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CreateAliasResponsePrivate(this), parent)
{
    setRequest(new CreateAliasRequest(request));
    setReply(reply);
}

const CreateAliasRequest * CreateAliasResponse::request() const
{
    Q_D(const CreateAliasResponse);
    return static_cast<const CreateAliasRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService CreateAlias response.
 *
 * @param  response  Response to parse.
 */
void CreateAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAliasResponsePrivate
 *
 * @brief  Private implementation for CreateAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAliasResponse instance.
 */
CreateAliasResponsePrivate::CreateAliasResponsePrivate(
    CreateAliasQueueResponse * const q) : CreateAliasPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService CreateAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAliasResponsePrivate::CreateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAliasResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
