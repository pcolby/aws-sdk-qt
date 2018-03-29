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

#include "respondactivitytaskfailedresponse.h"
#include "respondactivitytaskfailedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  RespondActivityTaskFailedResponse
 *
 * @brief  Handles SWF RespondActivityTaskFailed responses.
 *
 * @see    SWFClient::respondActivityTaskFailed
 */

/**
 * @brief  Constructs a new RespondActivityTaskFailedResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RespondActivityTaskFailedResponse::RespondActivityTaskFailedResponse(
        const RespondActivityTaskFailedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RespondActivityTaskFailedResponsePrivate(this), parent)
{
    setRequest(new RespondActivityTaskFailedRequest(request));
    setReply(reply);
}

const RespondActivityTaskFailedRequest * RespondActivityTaskFailedResponse::request() const
{
    Q_D(const RespondActivityTaskFailedResponse);
    return static_cast<const RespondActivityTaskFailedRequest *>(d->request);
}

/**
 * @brief  Parse a SWF RespondActivityTaskFailed response.
 *
 * @param  response  Response to parse.
 */
void RespondActivityTaskFailedResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RespondActivityTaskFailedResponsePrivate
 *
 * @brief  Private implementation for RespondActivityTaskFailedResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskFailedResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RespondActivityTaskFailedResponse instance.
 */
RespondActivityTaskFailedResponsePrivate::RespondActivityTaskFailedResponsePrivate(
    RespondActivityTaskFailedResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF RespondActivityTaskFailedResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RespondActivityTaskFailedResponsePrivate::RespondActivityTaskFailedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondActivityTaskFailedResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
