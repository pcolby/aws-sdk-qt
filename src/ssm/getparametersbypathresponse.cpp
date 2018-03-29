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

#include "getparametersbypathresponse.h"
#include "getparametersbypathresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetParametersByPathResponse
 *
 * @brief  Handles SSM GetParametersByPath responses.
 *
 * @see    SSMClient::getParametersByPath
 */

/**
 * @brief  Constructs a new GetParametersByPathResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetParametersByPathResponse::GetParametersByPathResponse(
        const GetParametersByPathRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetParametersByPathResponsePrivate(this), parent)
{
    setRequest(new GetParametersByPathRequest(request));
    setReply(reply);
}

const GetParametersByPathRequest * GetParametersByPathResponse::request() const
{
    Q_D(const GetParametersByPathResponse);
    return static_cast<const GetParametersByPathRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetParametersByPath response.
 *
 * @param  response  Response to parse.
 */
void GetParametersByPathResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetParametersByPathResponsePrivate
 *
 * @brief  Private implementation for GetParametersByPathResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersByPathResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetParametersByPathResponse instance.
 */
GetParametersByPathResponsePrivate::GetParametersByPathResponsePrivate(
    GetParametersByPathQueueResponse * const q) : GetParametersByPathPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetParametersByPathResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetParametersByPathResponsePrivate::GetParametersByPathResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParametersByPathResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
