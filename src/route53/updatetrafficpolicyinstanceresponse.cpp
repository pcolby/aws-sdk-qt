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

#include "updatetrafficpolicyinstanceresponse.h"
#include "updatetrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  UpdateTrafficPolicyInstanceResponse
 *
 * @brief  Handles Route53 UpdateTrafficPolicyInstance responses.
 *
 * @see    Route53Client::updateTrafficPolicyInstance
 */

/**
 * @brief  Constructs a new UpdateTrafficPolicyInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTrafficPolicyInstanceResponse::UpdateTrafficPolicyInstanceResponse(
        const UpdateTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

const UpdateTrafficPolicyInstanceRequest * UpdateTrafficPolicyInstanceResponse::request() const
{
    Q_D(const UpdateTrafficPolicyInstanceResponse);
    return static_cast<const UpdateTrafficPolicyInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 UpdateTrafficPolicyInstance response.
 *
 * @param  response  Response to parse.
 */
void UpdateTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTrafficPolicyInstanceResponsePrivate
 *
 * @brief  Private implementation for UpdateTrafficPolicyInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrafficPolicyInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTrafficPolicyInstanceResponse instance.
 */
UpdateTrafficPolicyInstanceResponsePrivate::UpdateTrafficPolicyInstanceResponsePrivate(
    UpdateTrafficPolicyInstanceQueueResponse * const q) : UpdateTrafficPolicyInstancePrivate(q)
{

}

/**
 * @brief  Parse an Route53 UpdateTrafficPolicyInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTrafficPolicyInstanceResponsePrivate::UpdateTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrafficPolicyInstanceResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
