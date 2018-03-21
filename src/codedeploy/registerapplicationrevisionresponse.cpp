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

#include "registerapplicationrevisionresponse.h"
#include "registerapplicationrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  RegisterApplicationRevisionResponse
 *
 * @brief  Handles CodeDeploy RegisterApplicationRevision responses.
 *
 * @see    CodeDeployClient::registerApplicationRevision
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterApplicationRevisionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new RegisterApplicationRevisionResponsePrivate(this), parent)
{
    setRequest(new RegisterApplicationRevisionRequest(request));
    setReply(reply);
}

const RegisterApplicationRevisionRequest * RegisterApplicationRevisionResponse::request() const
{
    Q_D(const RegisterApplicationRevisionResponse);
    return static_cast<const RegisterApplicationRevisionRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy RegisterApplicationRevision response.
 *
 * @param  response  Response to parse.
 */
void RegisterApplicationRevisionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterApplicationRevisionResponsePrivate
 *
 * @brief  Private implementation for RegisterApplicationRevisionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterApplicationRevisionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterApplicationRevisionResponse instance.
 */
RegisterApplicationRevisionResponsePrivate::RegisterApplicationRevisionResponsePrivate(
    RegisterApplicationRevisionQueueResponse * const q) : RegisterApplicationRevisionPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy RegisterApplicationRevisionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterApplicationRevisionResponsePrivate::RegisterApplicationRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterApplicationRevisionResponse"));
    /// @todo
}
