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

#include "getworkflowexecutionhistoryresponse.h"
#include "getworkflowexecutionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  GetWorkflowExecutionHistoryResponse
 *
 * @brief  Handles SWF GetWorkflowExecutionHistory responses.
 *
 * @see    SWFClient::getWorkflowExecutionHistory
 */

/**
 * @brief  Constructs a new GetWorkflowExecutionHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetWorkflowExecutionHistoryResponse::GetWorkflowExecutionHistoryResponse(
        const GetWorkflowExecutionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetWorkflowExecutionHistoryResponse(new GetWorkflowExecutionHistoryResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowExecutionHistoryRequest(request));
    setReply(reply);
}

const GetWorkflowExecutionHistoryRequest * GetWorkflowExecutionHistoryResponse::request() const
{
    Q_D(const GetWorkflowExecutionHistoryResponse);
    return static_cast<const GetWorkflowExecutionHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a SWF GetWorkflowExecutionHistory response.
 *
 * @param  response  Response to parse.
 */
void GetWorkflowExecutionHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetWorkflowExecutionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetWorkflowExecutionHistoryResponsePrivate
 *
 * @brief  Private implementation for GetWorkflowExecutionHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetWorkflowExecutionHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetWorkflowExecutionHistoryResponse instance.
 */
GetWorkflowExecutionHistoryResponsePrivate::GetWorkflowExecutionHistoryResponsePrivate(
    GetWorkflowExecutionHistoryResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF GetWorkflowExecutionHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetWorkflowExecutionHistoryResponsePrivate::parseGetWorkflowExecutionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowExecutionHistoryResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
