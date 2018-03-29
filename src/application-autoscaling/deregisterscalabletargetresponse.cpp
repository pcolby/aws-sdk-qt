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

#include "deregisterscalabletargetresponse.h"
#include "deregisterscalabletargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  DeregisterScalableTargetResponse
 *
 * @brief  Handles ApplicationAutoScaling DeregisterScalableTarget responses.
 *
 * @see    ApplicationAutoScalingClient::deregisterScalableTarget
 */

/**
 * @brief  Constructs a new DeregisterScalableTargetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterScalableTargetResponse::DeregisterScalableTargetResponse(
        const DeregisterScalableTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new DeregisterScalableTargetResponsePrivate(this), parent)
{
    setRequest(new DeregisterScalableTargetRequest(request));
    setReply(reply);
}

const DeregisterScalableTargetRequest * DeregisterScalableTargetResponse::request() const
{
    Q_D(const DeregisterScalableTargetResponse);
    return static_cast<const DeregisterScalableTargetRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationAutoScaling DeregisterScalableTarget response.
 *
 * @param  response  Response to parse.
 */
void DeregisterScalableTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterScalableTargetResponsePrivate
 *
 * @brief  Private implementation for DeregisterScalableTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterScalableTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterScalableTargetResponse instance.
 */
DeregisterScalableTargetResponsePrivate::DeregisterScalableTargetResponsePrivate(
    DeregisterScalableTargetResponse * const q) : ApplicationAutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling DeregisterScalableTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterScalableTargetResponsePrivate::DeregisterScalableTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterScalableTargetResponse"));
    /// @todo
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
