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

#include "pollfordecisiontaskresponse.h"
#include "pollfordecisiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  PollForDecisionTaskResponse
 *
 * @brief  Handles SWF PollForDecisionTask responses.
 *
 * @see    SWFClient::pollForDecisionTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForDecisionTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new PollForDecisionTaskResponsePrivate(this), parent)
{
    setRequest(new PollForDecisionTaskRequest(request));
    setReply(reply);
}

const PollForDecisionTaskRequest * PollForDecisionTaskResponse::request() const
{
    Q_D(const PollForDecisionTaskResponse);
    return static_cast<const PollForDecisionTaskRequest *>(d->request);
}

/**
 * @brief  Parse a SWF PollForDecisionTask response.
 *
 * @param  response  Response to parse.
 */
void PollForDecisionTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PollForDecisionTaskResponsePrivate
 *
 * @brief  Private implementation for PollForDecisionTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForDecisionTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForDecisionTaskResponse instance.
 */
PollForDecisionTaskResponsePrivate::PollForDecisionTaskResponsePrivate(
    PollForDecisionTaskQueueResponse * const q) : PollForDecisionTaskPrivate(q)
{

}

/**
 * @brief  Parse an SWF PollForDecisionTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForDecisionTaskResponsePrivate::PollForDecisionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForDecisionTaskResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
