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

#include "getfunctionresponse.h"
#include "getfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  GetFunctionResponse
 *
 * @brief  Handles Lambda GetFunction responses.
 *
 * @see    LambdaClient::getFunction
 */

/**
 * @brief  Constructs a new GetFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFunctionResponse::GetFunctionResponse(
        const GetFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetFunctionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionRequest(request));
    setReply(reply);
}

const GetFunctionRequest * GetFunctionResponse::request() const
{
    Q_D(const GetFunctionResponse);
    return static_cast<const GetFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda GetFunction response.
 *
 * @param  response  Response to parse.
 */
void GetFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFunctionResponsePrivate
 *
 * @brief  Private implementation for GetFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFunctionResponse instance.
 */
GetFunctionResponsePrivate::GetFunctionResponsePrivate(
    GetFunctionQueueResponse * const q) : GetFunctionPrivate(q)
{

}

/**
 * @brief  Parse an Lambda GetFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFunctionResponsePrivate::GetFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
