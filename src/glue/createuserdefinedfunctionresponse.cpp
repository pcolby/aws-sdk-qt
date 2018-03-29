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

#include "createuserdefinedfunctionresponse.h"
#include "createuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  CreateUserDefinedFunctionResponse
 *
 * @brief  Handles Glue CreateUserDefinedFunction responses.
 *
 * @see    GlueClient::createUserDefinedFunction
 */

/**
 * @brief  Constructs a new CreateUserDefinedFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserDefinedFunctionResponse::CreateUserDefinedFunctionResponse(
        const CreateUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new CreateUserDefinedFunctionRequest(request));
    setReply(reply);
}

const CreateUserDefinedFunctionRequest * CreateUserDefinedFunctionResponse::request() const
{
    Q_D(const CreateUserDefinedFunctionResponse);
    return static_cast<const CreateUserDefinedFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateUserDefinedFunction response.
 *
 * @param  response  Response to parse.
 */
void CreateUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUserDefinedFunctionResponsePrivate
 *
 * @brief  Private implementation for CreateUserDefinedFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserDefinedFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUserDefinedFunctionResponse instance.
 */
CreateUserDefinedFunctionResponsePrivate::CreateUserDefinedFunctionResponsePrivate(
    CreateUserDefinedFunctionQueueResponse * const q) : CreateUserDefinedFunctionPrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateUserDefinedFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUserDefinedFunctionResponsePrivate::CreateUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserDefinedFunctionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
