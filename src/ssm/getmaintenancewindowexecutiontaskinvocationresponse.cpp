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

#include "getmaintenancewindowexecutiontaskinvocationresponse.h"
#include "getmaintenancewindowexecutiontaskinvocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetMaintenanceWindowExecutionTaskInvocationResponse
 *
 * @brief  Handles SSM GetMaintenanceWindowExecutionTaskInvocation responses.
 *
 * @see    SSMClient::getMaintenanceWindowExecutionTaskInvocation
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskInvocationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMaintenanceWindowExecutionTaskInvocationResponse::GetMaintenanceWindowExecutionTaskInvocationResponse(
        const GetMaintenanceWindowExecutionTaskInvocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetMaintenanceWindowExecutionTaskInvocationResponsePrivate(this), parent)
{
    setRequest(new GetMaintenanceWindowExecutionTaskInvocationRequest(request));
    setReply(reply);
}

const GetMaintenanceWindowExecutionTaskInvocationRequest * GetMaintenanceWindowExecutionTaskInvocationResponse::request() const
{
    Q_D(const GetMaintenanceWindowExecutionTaskInvocationResponse);
    return static_cast<const GetMaintenanceWindowExecutionTaskInvocationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetMaintenanceWindowExecutionTaskInvocation response.
 *
 * @param  response  Response to parse.
 */
void GetMaintenanceWindowExecutionTaskInvocationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetMaintenanceWindowExecutionTaskInvocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowExecutionTaskInvocationResponsePrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowExecutionTaskInvocationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskInvocationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMaintenanceWindowExecutionTaskInvocationResponse instance.
 */
GetMaintenanceWindowExecutionTaskInvocationResponsePrivate::GetMaintenanceWindowExecutionTaskInvocationResponsePrivate(
    GetMaintenanceWindowExecutionTaskInvocationResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetMaintenanceWindowExecutionTaskInvocationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMaintenanceWindowExecutionTaskInvocationResponsePrivate::parseGetMaintenanceWindowExecutionTaskInvocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMaintenanceWindowExecutionTaskInvocationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
