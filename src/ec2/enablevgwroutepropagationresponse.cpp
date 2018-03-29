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

#include "enablevgwroutepropagationresponse.h"
#include "enablevgwroutepropagationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  EnableVgwRoutePropagationResponse
 *
 * @brief  Handles EC2 EnableVgwRoutePropagation responses.
 *
 * @see    EC2Client::enableVgwRoutePropagation
 */

/**
 * @brief  Constructs a new EnableVgwRoutePropagationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableVgwRoutePropagationResponse::EnableVgwRoutePropagationResponse(
        const EnableVgwRoutePropagationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new EnableVgwRoutePropagationResponsePrivate(this), parent)
{
    setRequest(new EnableVgwRoutePropagationRequest(request));
    setReply(reply);
}

const EnableVgwRoutePropagationRequest * EnableVgwRoutePropagationResponse::request() const
{
    Q_D(const EnableVgwRoutePropagationResponse);
    return static_cast<const EnableVgwRoutePropagationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 EnableVgwRoutePropagation response.
 *
 * @param  response  Response to parse.
 */
void EnableVgwRoutePropagationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableVgwRoutePropagationResponsePrivate
 *
 * @brief  Private implementation for EnableVgwRoutePropagationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableVgwRoutePropagationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableVgwRoutePropagationResponse instance.
 */
EnableVgwRoutePropagationResponsePrivate::EnableVgwRoutePropagationResponsePrivate(
    EnableVgwRoutePropagationResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 EnableVgwRoutePropagationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableVgwRoutePropagationResponsePrivate::EnableVgwRoutePropagationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableVgwRoutePropagationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
