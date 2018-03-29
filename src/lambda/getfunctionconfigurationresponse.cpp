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

#include "getfunctionconfigurationresponse.h"
#include "getfunctionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  GetFunctionConfigurationResponse
 *
 * @brief  Handles Lambda GetFunctionConfiguration responses.
 *
 * @see    LambdaClient::getFunctionConfiguration
 */

/**
 * @brief  Constructs a new GetFunctionConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFunctionConfigurationResponse::GetFunctionConfigurationResponse(
        const GetFunctionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetFunctionConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetFunctionConfigurationRequest(request));
    setReply(reply);
}

const GetFunctionConfigurationRequest * GetFunctionConfigurationResponse::request() const
{
    Q_D(const GetFunctionConfigurationResponse);
    return static_cast<const GetFunctionConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda GetFunctionConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetFunctionConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFunctionConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetFunctionConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFunctionConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFunctionConfigurationResponse instance.
 */
GetFunctionConfigurationResponsePrivate::GetFunctionConfigurationResponsePrivate(
    GetFunctionConfigurationResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda GetFunctionConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFunctionConfigurationResponsePrivate::GetFunctionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionConfigurationResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
