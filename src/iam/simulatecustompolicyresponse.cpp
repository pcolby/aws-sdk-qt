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

#include "simulatecustompolicyresponse.h"
#include "simulatecustompolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  SimulateCustomPolicyResponse
 *
 * @brief  Handles IAM SimulateCustomPolicy responses.
 *
 * @see    IAMClient::simulateCustomPolicy
 */

/**
 * @brief  Constructs a new SimulateCustomPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SimulateCustomPolicyResponse::SimulateCustomPolicyResponse(
        const SimulateCustomPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new SimulateCustomPolicyResponsePrivate(this), parent)
{
    setRequest(new SimulateCustomPolicyRequest(request));
    setReply(reply);
}

const SimulateCustomPolicyRequest * SimulateCustomPolicyResponse::request() const
{
    Q_D(const SimulateCustomPolicyResponse);
    return static_cast<const SimulateCustomPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM SimulateCustomPolicy response.
 *
 * @param  response  Response to parse.
 */
void SimulateCustomPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SimulateCustomPolicyResponsePrivate
 *
 * @brief  Private implementation for SimulateCustomPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SimulateCustomPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SimulateCustomPolicyResponse instance.
 */
SimulateCustomPolicyResponsePrivate::SimulateCustomPolicyResponsePrivate(
    SimulateCustomPolicyQueueResponse * const q) : SimulateCustomPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM SimulateCustomPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SimulateCustomPolicyResponsePrivate::SimulateCustomPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SimulateCustomPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
