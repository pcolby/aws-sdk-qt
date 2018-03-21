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

#include "getcommandinvocationresponse.h"
#include "getcommandinvocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  GetCommandInvocationResponse
 *
 * @brief  Handles SSM GetCommandInvocation responses.
 *
 * @see    SSMClient::getCommandInvocation
 */

/**
 * @brief  Constructs a new GetCommandInvocationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommandInvocationResponse::GetCommandInvocationResponse(
        const GetCommandInvocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetCommandInvocationResponsePrivate(this), parent)
{
    setRequest(new GetCommandInvocationRequest(request));
    setReply(reply);
}

const GetCommandInvocationRequest * GetCommandInvocationResponse::request() const
{
    Q_D(const GetCommandInvocationResponse);
    return static_cast<const GetCommandInvocationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetCommandInvocation response.
 *
 * @param  response  Response to parse.
 */
void GetCommandInvocationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCommandInvocationResponsePrivate
 *
 * @brief  Private implementation for GetCommandInvocationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommandInvocationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCommandInvocationResponse instance.
 */
GetCommandInvocationResponsePrivate::GetCommandInvocationResponsePrivate(
    GetCommandInvocationQueueResponse * const q) : GetCommandInvocationPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetCommandInvocationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCommandInvocationResponsePrivate::GetCommandInvocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCommandInvocationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
