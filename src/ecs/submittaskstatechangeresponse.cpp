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

#include "submittaskstatechangeresponse.h"
#include "submittaskstatechangeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  SubmitTaskStateChangeResponse
 *
 * @brief  Handles ECS SubmitTaskStateChange responses.
 *
 * @see    ECSClient::submitTaskStateChange
 */

/**
 * @brief  Constructs a new SubmitTaskStateChangeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubmitTaskStateChangeResponse::SubmitTaskStateChangeResponse(
        const SubmitTaskStateChangeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new SubmitTaskStateChangeResponsePrivate(this), parent)
{
    setRequest(new SubmitTaskStateChangeRequest(request));
    setReply(reply);
}

const SubmitTaskStateChangeRequest * SubmitTaskStateChangeResponse::request() const
{
    Q_D(const SubmitTaskStateChangeResponse);
    return static_cast<const SubmitTaskStateChangeRequest *>(d->request);
}

/**
 * @brief  Parse a ECS SubmitTaskStateChange response.
 *
 * @param  response  Response to parse.
 */
void SubmitTaskStateChangeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SubmitTaskStateChangeResponsePrivate
 *
 * @brief  Private implementation for SubmitTaskStateChangeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubmitTaskStateChangeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SubmitTaskStateChangeResponse instance.
 */
SubmitTaskStateChangeResponsePrivate::SubmitTaskStateChangeResponsePrivate(
    SubmitTaskStateChangeQueueResponse * const q) : SubmitTaskStateChangePrivate(q)
{

}

/**
 * @brief  Parse an ECS SubmitTaskStateChangeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SubmitTaskStateChangeResponsePrivate::SubmitTaskStateChangeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubmitTaskStateChangeResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
