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

#include "setidentitypoolconfigurationresponse.h"
#include "setidentitypoolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  SetIdentityPoolConfigurationResponse
 *
 * @brief  Handles CognitoSync SetIdentityPoolConfiguration responses.
 *
 * @see    CognitoSyncClient::setIdentityPoolConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityPoolConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new SetIdentityPoolConfigurationResponsePrivate(this), parent)
{
    setRequest(new SetIdentityPoolConfigurationRequest(request));
    setReply(reply);
}

const SetIdentityPoolConfigurationRequest * SetIdentityPoolConfigurationResponse::request() const
{
    Q_D(const SetIdentityPoolConfigurationResponse);
    return static_cast<const SetIdentityPoolConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync SetIdentityPoolConfiguration response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityPoolConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetIdentityPoolConfigurationResponsePrivate
 *
 * @brief  Private implementation for SetIdentityPoolConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityPoolConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityPoolConfigurationResponse instance.
 */
SetIdentityPoolConfigurationResponsePrivate::SetIdentityPoolConfigurationResponsePrivate(
    SetIdentityPoolConfigurationQueueResponse * const q) : SetIdentityPoolConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync SetIdentityPoolConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityPoolConfigurationResponsePrivate::SetIdentityPoolConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityPoolConfigurationResponse"));
    /// @todo
}
