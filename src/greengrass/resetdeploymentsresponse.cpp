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

#include "resetdeploymentsresponse.h"
#include "resetdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  ResetDeploymentsResponse
 *
 * @brief  Handles Greengrass ResetDeployments responses.
 *
 * @see    GreengrassClient::resetDeployments
 */

/**
 * @brief  Constructs a new ResetDeploymentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetDeploymentsResponse::ResetDeploymentsResponse(
        const ResetDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ResetDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ResetDeploymentsRequest(request));
    setReply(reply);
}

const ResetDeploymentsRequest * ResetDeploymentsResponse::request() const
{
    Q_D(const ResetDeploymentsResponse);
    return static_cast<const ResetDeploymentsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ResetDeployments response.
 *
 * @param  response  Response to parse.
 */
void ResetDeploymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetDeploymentsResponsePrivate
 *
 * @brief  Private implementation for ResetDeploymentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetDeploymentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetDeploymentsResponse instance.
 */
ResetDeploymentsResponsePrivate::ResetDeploymentsResponsePrivate(
    ResetDeploymentsQueueResponse * const q) : ResetDeploymentsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ResetDeploymentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetDeploymentsResponsePrivate::ResetDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDeploymentsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
