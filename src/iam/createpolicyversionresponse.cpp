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

#include "createpolicyversionresponse.h"
#include "createpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreatePolicyVersionResponse
 *
 * @brief  Handles IAM CreatePolicyVersion responses.
 *
 * @see    IAMClient::createPolicyVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePolicyVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreatePolicyVersionResponsePrivate(this), parent)
{
    setRequest(new CreatePolicyVersionRequest(request));
    setReply(reply);
}

const CreatePolicyVersionRequest * CreatePolicyVersionResponse::request() const
{
    Q_D(const CreatePolicyVersionResponse);
    return static_cast<const CreatePolicyVersionRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreatePolicyVersion response.
 *
 * @param  response  Response to parse.
 */
void CreatePolicyVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePolicyVersionResponsePrivate
 *
 * @brief  Private implementation for CreatePolicyVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePolicyVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePolicyVersionResponse instance.
 */
CreatePolicyVersionResponsePrivate::CreatePolicyVersionResponsePrivate(
    CreatePolicyVersionQueueResponse * const q) : CreatePolicyVersionPrivate(q)
{

}

/**
 * @brief  Parse an IAM CreatePolicyVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePolicyVersionResponsePrivate::CreatePolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePolicyVersionResponse"));
    /// @todo
}
