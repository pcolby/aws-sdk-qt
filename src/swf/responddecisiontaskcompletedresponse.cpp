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

#include "responddecisiontaskcompletedresponse.h"
#include "responddecisiontaskcompletedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  RespondDecisionTaskCompletedResponse
 *
 * @brief  Handles SWF RespondDecisionTaskCompleted responses.
 *
 * @see    SWFClient::respondDecisionTaskCompleted
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RespondDecisionTaskCompletedResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RespondDecisionTaskCompletedResponsePrivate(this), parent)
{
    setRequest(new RespondDecisionTaskCompletedRequest(request));
    setReply(reply);
}

const RespondDecisionTaskCompletedRequest * RespondDecisionTaskCompletedResponse::request() const
{
    Q_D(const RespondDecisionTaskCompletedResponse);
    return static_cast<const RespondDecisionTaskCompletedRequest *>(d->request);
}

/**
 * @brief  Parse a SWF RespondDecisionTaskCompleted response.
 *
 * @param  response  Response to parse.
 */
void RespondDecisionTaskCompletedResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RespondDecisionTaskCompletedResponsePrivate
 *
 * @brief  Private implementation for RespondDecisionTaskCompletedResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondDecisionTaskCompletedResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RespondDecisionTaskCompletedResponse instance.
 */
RespondDecisionTaskCompletedResponsePrivate::RespondDecisionTaskCompletedResponsePrivate(
    RespondDecisionTaskCompletedQueueResponse * const q) : RespondDecisionTaskCompletedPrivate(q)
{

}

/**
 * @brief  Parse an SWF RespondDecisionTaskCompletedResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RespondDecisionTaskCompletedResponsePrivate::RespondDecisionTaskCompletedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondDecisionTaskCompletedResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
