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

#include "createidentitypoolresponse.h"
#include "createidentitypoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  CreateIdentityPoolResponse
 *
 * @brief  Handles CognitoIdentity CreateIdentityPool responses.
 *
 * @see    CognitoIdentityClient::createIdentityPool
 */

/**
 * @brief  Constructs a new CreateIdentityPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateIdentityPoolResponse::CreateIdentityPoolResponse(
        const CreateIdentityPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new CreateIdentityPoolResponsePrivate(this), parent)
{
    setRequest(new CreateIdentityPoolRequest(request));
    setReply(reply);
}

const CreateIdentityPoolRequest * CreateIdentityPoolResponse::request() const
{
    Q_D(const CreateIdentityPoolResponse);
    return static_cast<const CreateIdentityPoolRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity CreateIdentityPool response.
 *
 * @param  response  Response to parse.
 */
void CreateIdentityPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateIdentityPoolResponsePrivate
 *
 * @brief  Private implementation for CreateIdentityPoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIdentityPoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateIdentityPoolResponse instance.
 */
CreateIdentityPoolResponsePrivate::CreateIdentityPoolResponsePrivate(
    CreateIdentityPoolQueueResponse * const q) : CreateIdentityPoolPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity CreateIdentityPoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateIdentityPoolResponsePrivate::CreateIdentityPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIdentityPoolResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace AWS
