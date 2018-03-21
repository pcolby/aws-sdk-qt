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

#include "countclosedworkflowexecutionsresponse.h"
#include "countclosedworkflowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  CountClosedWorkflowExecutionsResponse
 *
 * @brief  Handles SWF CountClosedWorkflowExecutions responses.
 *
 * @see    SWFClient::countClosedWorkflowExecutions
 */

/**
 * @brief  Constructs a new CountClosedWorkflowExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CountClosedWorkflowExecutionsResponse::CountClosedWorkflowExecutionsResponse(
        const CountClosedWorkflowExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new CountClosedWorkflowExecutionsResponsePrivate(this), parent)
{
    setRequest(new CountClosedWorkflowExecutionsRequest(request));
    setReply(reply);
}

const CountClosedWorkflowExecutionsRequest * CountClosedWorkflowExecutionsResponse::request() const
{
    Q_D(const CountClosedWorkflowExecutionsResponse);
    return static_cast<const CountClosedWorkflowExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a SWF CountClosedWorkflowExecutions response.
 *
 * @param  response  Response to parse.
 */
void CountClosedWorkflowExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CountClosedWorkflowExecutionsResponsePrivate
 *
 * @brief  Private implementation for CountClosedWorkflowExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CountClosedWorkflowExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CountClosedWorkflowExecutionsResponse instance.
 */
CountClosedWorkflowExecutionsResponsePrivate::CountClosedWorkflowExecutionsResponsePrivate(
    CountClosedWorkflowExecutionsQueueResponse * const q) : CountClosedWorkflowExecutionsPrivate(q)
{

}

/**
 * @brief  Parse an SWF CountClosedWorkflowExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CountClosedWorkflowExecutionsResponsePrivate::CountClosedWorkflowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountClosedWorkflowExecutionsResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
