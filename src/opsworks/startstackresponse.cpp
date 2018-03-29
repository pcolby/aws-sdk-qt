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

#include "startstackresponse.h"
#include "startstackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  StartStackResponse
 *
 * @brief  Handles OpsWorks StartStack responses.
 *
 * @see    OpsWorksClient::startStack
 */

/**
 * @brief  Constructs a new StartStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartStackResponse::StartStackResponse(
        const StartStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new StartStackResponsePrivate(this), parent)
{
    setRequest(new StartStackRequest(request));
    setReply(reply);
}

const StartStackRequest * StartStackResponse::request() const
{
    Q_D(const StartStackResponse);
    return static_cast<const StartStackRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks StartStack response.
 *
 * @param  response  Response to parse.
 */
void StartStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartStackResponsePrivate
 *
 * @brief  Private implementation for StartStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartStackResponse instance.
 */
StartStackResponsePrivate::StartStackResponsePrivate(
    StartStackQueueResponse * const q) : StartStackPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks StartStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartStackResponsePrivate::StartStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStackResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
