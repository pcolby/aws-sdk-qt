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

#include "disablevgwroutepropagationresponse.h"
#include "disablevgwroutepropagationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DisableVgwRoutePropagationResponse
 *
 * @brief  Handles EC2 DisableVgwRoutePropagation responses.
 *
 * @see    EC2Client::disableVgwRoutePropagation
 */

/**
 * @brief  Constructs a new DisableVgwRoutePropagationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableVgwRoutePropagationResponse::DisableVgwRoutePropagationResponse(
        const DisableVgwRoutePropagationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisableVgwRoutePropagationResponsePrivate(this), parent)
{
    setRequest(new DisableVgwRoutePropagationRequest(request));
    setReply(reply);
}

const DisableVgwRoutePropagationRequest * DisableVgwRoutePropagationResponse::request() const
{
    Q_D(const DisableVgwRoutePropagationResponse);
    return static_cast<const DisableVgwRoutePropagationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DisableVgwRoutePropagation response.
 *
 * @param  response  Response to parse.
 */
void DisableVgwRoutePropagationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableVgwRoutePropagationResponsePrivate
 *
 * @brief  Private implementation for DisableVgwRoutePropagationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableVgwRoutePropagationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableVgwRoutePropagationResponse instance.
 */
DisableVgwRoutePropagationResponsePrivate::DisableVgwRoutePropagationResponsePrivate(
    DisableVgwRoutePropagationQueueResponse * const q) : DisableVgwRoutePropagationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DisableVgwRoutePropagationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableVgwRoutePropagationResponsePrivate::DisableVgwRoutePropagationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableVgwRoutePropagationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
