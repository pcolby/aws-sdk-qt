/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "simulateprincipalpolicyresponse.h"
#include "simulateprincipalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  SimulatePrincipalPolicyResponse
 *
 * @brief  Handles IAM SimulatePrincipalPolicy responses.
 *
 * @see    IAMClient::simulatePrincipalPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SimulatePrincipalPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new SimulatePrincipalPolicyResponsePrivate(this), parent)
{
    setRequest(new SimulatePrincipalPolicyRequest(request));
    setReply(reply);
}

const SimulatePrincipalPolicyRequest * SimulatePrincipalPolicyResponse::request() const
{
    Q_D(const SimulatePrincipalPolicyResponse);
    return static_cast<const SimulatePrincipalPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM SimulatePrincipalPolicy response.
 *
 * @param  response  Response to parse.
 */
void SimulatePrincipalPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SimulatePrincipalPolicyResponsePrivate
 *
 * @brief  Private implementation for SimulatePrincipalPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SimulatePrincipalPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SimulatePrincipalPolicyResponse instance.
 */
SimulatePrincipalPolicyResponsePrivate::SimulatePrincipalPolicyResponsePrivate(
    SimulatePrincipalPolicyQueueResponse * const q) : SimulatePrincipalPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM SimulatePrincipalPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SimulatePrincipalPolicyResponsePrivate::SimulatePrincipalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SimulatePrincipalPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
