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

#include "runjobflowresponse.h"
#include "runjobflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/**
 * @class  RunJobFlowResponse
 *
 * @brief  Handles EMR RunJobFlow responses.
 *
 * @see    EMRClient::runJobFlow
 */

/**
 * @brief  Constructs a new RunJobFlowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RunJobFlowResponse::RunJobFlowResponse(
        const RunJobFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new RunJobFlowResponsePrivate(this), parent)
{
    setRequest(new RunJobFlowRequest(request));
    setReply(reply);
}

const RunJobFlowRequest * RunJobFlowResponse::request() const
{
    Q_D(const RunJobFlowResponse);
    return static_cast<const RunJobFlowRequest *>(d->request);
}

/**
 * @brief  Parse a EMR RunJobFlow response.
 *
 * @param  response  Response to parse.
 */
void RunJobFlowResponse::parseSuccess(QIODevice &response)
{
    Q_D(RunJobFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RunJobFlowResponsePrivate
 *
 * @brief  Private implementation for RunJobFlowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RunJobFlowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RunJobFlowResponse instance.
 */
RunJobFlowResponsePrivate::RunJobFlowResponsePrivate(
    RunJobFlowResponse * const q) : EMRResponsePrivate(q)
{

}

/**
 * @brief  Parse an EMR RunJobFlowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RunJobFlowResponsePrivate::RunJobFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunJobFlowResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
