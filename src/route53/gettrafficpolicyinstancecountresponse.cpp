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

#include "gettrafficpolicyinstancecountresponse.h"
#include "gettrafficpolicyinstancecountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetTrafficPolicyInstanceCountResponse
 *
 * @brief  Handles Route53 GetTrafficPolicyInstanceCount responses.
 *
 * @see    Route53Client::getTrafficPolicyInstanceCount
 */

/**
 * @brief  Constructs a new GetTrafficPolicyInstanceCountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTrafficPolicyInstanceCountResponse::GetTrafficPolicyInstanceCountResponse(
        const GetTrafficPolicyInstanceCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyInstanceCountResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyInstanceCountRequest(request));
    setReply(reply);
}

const GetTrafficPolicyInstanceCountRequest * GetTrafficPolicyInstanceCountResponse::request() const
{
    Q_D(const GetTrafficPolicyInstanceCountResponse);
    return static_cast<const GetTrafficPolicyInstanceCountRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetTrafficPolicyInstanceCount response.
 *
 * @param  response  Response to parse.
 */
void GetTrafficPolicyInstanceCountResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTrafficPolicyInstanceCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTrafficPolicyInstanceCountResponsePrivate
 *
 * @brief  Private implementation for GetTrafficPolicyInstanceCountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyInstanceCountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTrafficPolicyInstanceCountResponse instance.
 */
GetTrafficPolicyInstanceCountResponsePrivate::GetTrafficPolicyInstanceCountResponsePrivate(
    GetTrafficPolicyInstanceCountResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetTrafficPolicyInstanceCountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTrafficPolicyInstanceCountResponsePrivate::GetTrafficPolicyInstanceCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyInstanceCountResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
