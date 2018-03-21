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

#include "createstackresponse.h"
#include "createstackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  CreateStackResponse
 *
 * @brief  Handles OpsWorks CreateStack responses.
 *
 * @see    OpsWorksClient::createStack
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStackResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new CreateStackResponsePrivate(this), parent)
{
    setRequest(new CreateStackRequest(request));
    setReply(reply);
}

const CreateStackRequest * CreateStackResponse::request() const
{
    Q_D(const CreateStackResponse);
    return static_cast<const CreateStackRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks CreateStack response.
 *
 * @param  response  Response to parse.
 */
void CreateStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStackResponsePrivate
 *
 * @brief  Private implementation for CreateStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStackResponse instance.
 */
CreateStackResponsePrivate::CreateStackResponsePrivate(
    CreateStackQueueResponse * const q) : CreateStackPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks CreateStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStackResponsePrivate::CreateStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStackResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
