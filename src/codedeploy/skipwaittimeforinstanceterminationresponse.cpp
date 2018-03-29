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

#include "skipwaittimeforinstanceterminationresponse.h"
#include "skipwaittimeforinstanceterminationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  SkipWaitTimeForInstanceTerminationResponse
 *
 * @brief  Handles CodeDeploy SkipWaitTimeForInstanceTermination responses.
 *
 * @see    CodeDeployClient::skipWaitTimeForInstanceTermination
 */

/**
 * @brief  Constructs a new SkipWaitTimeForInstanceTerminationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SkipWaitTimeForInstanceTerminationResponse::SkipWaitTimeForInstanceTerminationResponse(
        const SkipWaitTimeForInstanceTerminationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SkipWaitTimeForInstanceTerminationResponse(new SkipWaitTimeForInstanceTerminationResponsePrivate(this), parent)
{
    setRequest(new SkipWaitTimeForInstanceTerminationRequest(request));
    setReply(reply);
}

const SkipWaitTimeForInstanceTerminationRequest * SkipWaitTimeForInstanceTerminationResponse::request() const
{
    Q_D(const SkipWaitTimeForInstanceTerminationResponse);
    return static_cast<const SkipWaitTimeForInstanceTerminationRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy SkipWaitTimeForInstanceTermination response.
 *
 * @param  response  Response to parse.
 */
void SkipWaitTimeForInstanceTerminationResponse::parseSuccess(QIODevice &response)
{
    Q_D(SkipWaitTimeForInstanceTerminationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SkipWaitTimeForInstanceTerminationResponsePrivate
 *
 * @brief  Private implementation for SkipWaitTimeForInstanceTerminationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SkipWaitTimeForInstanceTerminationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SkipWaitTimeForInstanceTerminationResponse instance.
 */
SkipWaitTimeForInstanceTerminationResponsePrivate::SkipWaitTimeForInstanceTerminationResponsePrivate(
    SkipWaitTimeForInstanceTerminationResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy SkipWaitTimeForInstanceTerminationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SkipWaitTimeForInstanceTerminationResponsePrivate::parseSkipWaitTimeForInstanceTerminationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SkipWaitTimeForInstanceTerminationResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
