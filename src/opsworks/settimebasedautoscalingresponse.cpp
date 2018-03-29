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

#include "settimebasedautoscalingresponse.h"
#include "settimebasedautoscalingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  SetTimeBasedAutoScalingResponse
 *
 * @brief  Handles OpsWorks SetTimeBasedAutoScaling responses.
 *
 * @see    OpsWorksClient::setTimeBasedAutoScaling
 */

/**
 * @brief  Constructs a new SetTimeBasedAutoScalingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTimeBasedAutoScalingResponse::SetTimeBasedAutoScalingResponse(
        const SetTimeBasedAutoScalingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new SetTimeBasedAutoScalingResponsePrivate(this), parent)
{
    setRequest(new SetTimeBasedAutoScalingRequest(request));
    setReply(reply);
}

const SetTimeBasedAutoScalingRequest * SetTimeBasedAutoScalingResponse::request() const
{
    Q_D(const SetTimeBasedAutoScalingResponse);
    return static_cast<const SetTimeBasedAutoScalingRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks SetTimeBasedAutoScaling response.
 *
 * @param  response  Response to parse.
 */
void SetTimeBasedAutoScalingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetTimeBasedAutoScalingResponsePrivate
 *
 * @brief  Private implementation for SetTimeBasedAutoScalingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTimeBasedAutoScalingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetTimeBasedAutoScalingResponse instance.
 */
SetTimeBasedAutoScalingResponsePrivate::SetTimeBasedAutoScalingResponsePrivate(
    SetTimeBasedAutoScalingResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks SetTimeBasedAutoScalingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetTimeBasedAutoScalingResponsePrivate::SetTimeBasedAutoScalingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTimeBasedAutoScalingResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
