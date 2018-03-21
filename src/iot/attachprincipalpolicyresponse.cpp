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

#include "attachprincipalpolicyresponse.h"
#include "attachprincipalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  AttachPrincipalPolicyResponse
 *
 * @brief  Handles IoT AttachPrincipalPolicy responses.
 *
 * @see    IoTClient::attachPrincipalPolicy
 */

/**
 * @brief  Constructs a new AttachPrincipalPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachPrincipalPolicyResponse::AttachPrincipalPolicyResponse(
        const AttachPrincipalPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new AttachPrincipalPolicyResponsePrivate(this), parent)
{
    setRequest(new AttachPrincipalPolicyRequest(request));
    setReply(reply);
}

const AttachPrincipalPolicyRequest * AttachPrincipalPolicyResponse::request() const
{
    Q_D(const AttachPrincipalPolicyResponse);
    return static_cast<const AttachPrincipalPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IoT AttachPrincipalPolicy response.
 *
 * @param  response  Response to parse.
 */
void AttachPrincipalPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachPrincipalPolicyResponsePrivate
 *
 * @brief  Private implementation for AttachPrincipalPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachPrincipalPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachPrincipalPolicyResponse instance.
 */
AttachPrincipalPolicyResponsePrivate::AttachPrincipalPolicyResponsePrivate(
    AttachPrincipalPolicyQueueResponse * const q) : AttachPrincipalPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IoT AttachPrincipalPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachPrincipalPolicyResponsePrivate::AttachPrincipalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachPrincipalPolicyResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
