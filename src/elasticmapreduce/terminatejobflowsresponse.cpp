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

#include "terminatejobflowsresponse.h"
#include "terminatejobflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/**
 * @class  TerminateJobFlowsResponse
 *
 * @brief  Handles EMR TerminateJobFlows responses.
 *
 * @see    EMRClient::terminateJobFlows
 */

/**
 * @brief  Constructs a new TerminateJobFlowsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateJobFlowsResponse::TerminateJobFlowsResponse(
        const TerminateJobFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new TerminateJobFlowsResponsePrivate(this), parent)
{
    setRequest(new TerminateJobFlowsRequest(request));
    setReply(reply);
}

const TerminateJobFlowsRequest * TerminateJobFlowsResponse::request() const
{
    Q_D(const TerminateJobFlowsResponse);
    return static_cast<const TerminateJobFlowsRequest *>(d->request);
}

/**
 * @brief  Parse a EMR TerminateJobFlows response.
 *
 * @param  response  Response to parse.
 */
void TerminateJobFlowsResponse::parseSuccess(QIODevice &response)
{
    Q_D(TerminateJobFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TerminateJobFlowsResponsePrivate
 *
 * @brief  Private implementation for TerminateJobFlowsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateJobFlowsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateJobFlowsResponse instance.
 */
TerminateJobFlowsResponsePrivate::TerminateJobFlowsResponsePrivate(
    TerminateJobFlowsResponse * const q) : EMRResponsePrivate(q)
{

}

/**
 * @brief  Parse an EMR TerminateJobFlowsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateJobFlowsResponsePrivate::parseTerminateJobFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateJobFlowsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
