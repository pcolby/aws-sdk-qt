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

#include "getparametersresponse.h"
#include "getparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetParametersResponse
 *
 * @brief  Handles SSM GetParameters responses.
 *
 * @see    SSMClient::getParameters
 */

/**
 * @brief  Constructs a new GetParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetParametersResponse::GetParametersResponse(
        const GetParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetParametersResponsePrivate(this), parent)
{
    setRequest(new GetParametersRequest(request));
    setReply(reply);
}

const GetParametersRequest * GetParametersResponse::request() const
{
    Q_D(const GetParametersResponse);
    return static_cast<const GetParametersRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetParameters response.
 *
 * @param  response  Response to parse.
 */
void GetParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetParametersResponsePrivate
 *
 * @brief  Private implementation for GetParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetParametersResponse instance.
 */
GetParametersResponsePrivate::GetParametersResponsePrivate(
    GetParametersResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetParametersResponsePrivate::GetParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParametersResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
