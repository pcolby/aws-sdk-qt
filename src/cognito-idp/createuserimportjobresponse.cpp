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

#include "createuserimportjobresponse.h"
#include "createuserimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CreateUserImportJobResponse
 *
 * @brief  Handles CognitoIdentityProvider CreateUserImportJob responses.
 *
 * @see    CognitoIdentityProviderClient::createUserImportJob
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserImportJobResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateUserImportJobRequest(request));
    setReply(reply);
}

const CreateUserImportJobRequest * CreateUserImportJobResponse::request() const
{
    Q_D(const CreateUserImportJobResponse);
    return static_cast<const CreateUserImportJobRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider CreateUserImportJob response.
 *
 * @param  response  Response to parse.
 */
void CreateUserImportJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUserImportJobResponsePrivate
 *
 * @brief  Private implementation for CreateUserImportJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserImportJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUserImportJobResponse instance.
 */
CreateUserImportJobResponsePrivate::CreateUserImportJobResponsePrivate(
    CreateUserImportJobQueueResponse * const q) : CreateUserImportJobPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider CreateUserImportJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUserImportJobResponsePrivate::CreateUserImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserImportJobResponse"));
    /// @todo
}
