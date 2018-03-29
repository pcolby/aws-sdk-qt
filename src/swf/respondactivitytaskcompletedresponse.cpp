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

#include "respondactivitytaskcompletedresponse.h"
#include "respondactivitytaskcompletedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  RespondActivityTaskCompletedResponse
 *
 * @brief  Handles SWF RespondActivityTaskCompleted responses.
 *
 * @see    SWFClient::respondActivityTaskCompleted
 */

/**
 * @brief  Constructs a new RespondActivityTaskCompletedResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RespondActivityTaskCompletedResponse::RespondActivityTaskCompletedResponse(
        const RespondActivityTaskCompletedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RespondActivityTaskCompletedResponsePrivate(this), parent)
{
    setRequest(new RespondActivityTaskCompletedRequest(request));
    setReply(reply);
}

const RespondActivityTaskCompletedRequest * RespondActivityTaskCompletedResponse::request() const
{
    Q_D(const RespondActivityTaskCompletedResponse);
    return static_cast<const RespondActivityTaskCompletedRequest *>(d->request);
}

/**
 * @brief  Parse a SWF RespondActivityTaskCompleted response.
 *
 * @param  response  Response to parse.
 */
void RespondActivityTaskCompletedResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RespondActivityTaskCompletedResponsePrivate
 *
 * @brief  Private implementation for RespondActivityTaskCompletedResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskCompletedResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RespondActivityTaskCompletedResponse instance.
 */
RespondActivityTaskCompletedResponsePrivate::RespondActivityTaskCompletedResponsePrivate(
    RespondActivityTaskCompletedQueueResponse * const q) : RespondActivityTaskCompletedPrivate(q)
{

}

/**
 * @brief  Parse an SWF RespondActivityTaskCompletedResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RespondActivityTaskCompletedResponsePrivate::RespondActivityTaskCompletedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondActivityTaskCompletedResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
