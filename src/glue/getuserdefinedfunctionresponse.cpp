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

#include "getuserdefinedfunctionresponse.h"
#include "getuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetUserDefinedFunctionResponse
 *
 * @brief  Handles Glue GetUserDefinedFunction responses.
 *
 * @see    GlueClient::getUserDefinedFunction
 */

/**
 * @brief  Constructs a new GetUserDefinedFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUserDefinedFunctionResponse::GetUserDefinedFunctionResponse(
        const GetUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetUserDefinedFunctionResponse(new GetUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new GetUserDefinedFunctionRequest(request));
    setReply(reply);
}

const GetUserDefinedFunctionRequest * GetUserDefinedFunctionResponse::request() const
{
    Q_D(const GetUserDefinedFunctionResponse);
    return static_cast<const GetUserDefinedFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetUserDefinedFunction response.
 *
 * @param  response  Response to parse.
 */
void GetUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUserDefinedFunctionResponsePrivate
 *
 * @brief  Private implementation for GetUserDefinedFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserDefinedFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUserDefinedFunctionResponse instance.
 */
GetUserDefinedFunctionResponsePrivate::GetUserDefinedFunctionResponsePrivate(
    GetUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetUserDefinedFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUserDefinedFunctionResponsePrivate::parseGetUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserDefinedFunctionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
