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

#include "getaliasresponse.h"
#include "getaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  GetAliasResponse
 *
 * @brief  Handles Lambda GetAlias responses.
 *
 * @see    LambdaClient::getAlias
 */

/**
 * @brief  Constructs a new GetAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAliasResponse::GetAliasResponse(
        const GetAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetAliasResponsePrivate(this), parent)
{
    setRequest(new GetAliasRequest(request));
    setReply(reply);
}

const GetAliasRequest * GetAliasResponse::request() const
{
    Q_D(const GetAliasResponse);
    return static_cast<const GetAliasRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda GetAlias response.
 *
 * @param  response  Response to parse.
 */
void GetAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAliasResponsePrivate
 *
 * @brief  Private implementation for GetAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAliasResponse instance.
 */
GetAliasResponsePrivate::GetAliasResponsePrivate(
    GetAliasResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda GetAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAliasResponsePrivate::GetAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAliasResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
