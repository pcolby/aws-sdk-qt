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

#include "pollforactivitytaskresponse.h"
#include "pollforactivitytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  PollForActivityTaskResponse
 *
 * @brief  Handles SWF PollForActivityTask responses.
 *
 * @see    SWFClient::pollForActivityTask
 */

/**
 * @brief  Constructs a new PollForActivityTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForActivityTaskResponse::PollForActivityTaskResponse(
        const PollForActivityTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollForActivityTaskResponse(new PollForActivityTaskResponsePrivate(this), parent)
{
    setRequest(new PollForActivityTaskRequest(request));
    setReply(reply);
}

const PollForActivityTaskRequest * PollForActivityTaskResponse::request() const
{
    Q_D(const PollForActivityTaskResponse);
    return static_cast<const PollForActivityTaskRequest *>(d->request);
}

/**
 * @brief  Parse a SWF PollForActivityTask response.
 *
 * @param  response  Response to parse.
 */
void PollForActivityTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(PollForActivityTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PollForActivityTaskResponsePrivate
 *
 * @brief  Private implementation for PollForActivityTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForActivityTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForActivityTaskResponse instance.
 */
PollForActivityTaskResponsePrivate::PollForActivityTaskResponsePrivate(
    PollForActivityTaskResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF PollForActivityTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForActivityTaskResponsePrivate::parsePollForActivityTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForActivityTaskResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
