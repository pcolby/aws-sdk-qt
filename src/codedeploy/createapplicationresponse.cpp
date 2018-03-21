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

#include "createapplicationresponse.h"
#include "createapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  CreateApplicationResponse
 *
 * @brief  Handles CodeDeploy CreateApplication responses.
 *
 * @see    CodeDeployClient::createApplication
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateApplicationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new CreateApplicationResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationRequest(request));
    setReply(reply);
}

const CreateApplicationRequest * CreateApplicationResponse::request() const
{
    Q_D(const CreateApplicationResponse);
    return static_cast<const CreateApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy CreateApplication response.
 *
 * @param  response  Response to parse.
 */
void CreateApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateApplicationResponsePrivate
 *
 * @brief  Private implementation for CreateApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateApplicationResponse instance.
 */
CreateApplicationResponsePrivate::CreateApplicationResponsePrivate(
    CreateApplicationQueueResponse * const q) : CreateApplicationPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy CreateApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateApplicationResponsePrivate::CreateApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationResponse"));
    /// @todo
}
