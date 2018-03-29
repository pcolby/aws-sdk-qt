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

#include "getparameterresponse.h"
#include "getparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetParameterResponse
 *
 * @brief  Handles SSM GetParameter responses.
 *
 * @see    SSMClient::getParameter
 */

/**
 * @brief  Constructs a new GetParameterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetParameterResponse::GetParameterResponse(
        const GetParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetParameterResponsePrivate(this), parent)
{
    setRequest(new GetParameterRequest(request));
    setReply(reply);
}

const GetParameterRequest * GetParameterResponse::request() const
{
    Q_D(const GetParameterResponse);
    return static_cast<const GetParameterRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetParameter response.
 *
 * @param  response  Response to parse.
 */
void GetParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetParameterResponsePrivate
 *
 * @brief  Private implementation for GetParameterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParameterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetParameterResponse instance.
 */
GetParameterResponsePrivate::GetParameterResponsePrivate(
    GetParameterResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetParameterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetParameterResponsePrivate::parseGetParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParameterResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
