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

#include "gettrafficpolicyresponse.h"
#include "gettrafficpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetTrafficPolicyResponse
 *
 * @brief  Handles Route53 GetTrafficPolicy responses.
 *
 * @see    Route53Client::getTrafficPolicy
 */

/**
 * @brief  Constructs a new GetTrafficPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTrafficPolicyResponse::GetTrafficPolicyResponse(
        const GetTrafficPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyRequest(request));
    setReply(reply);
}

const GetTrafficPolicyRequest * GetTrafficPolicyResponse::request() const
{
    Q_D(const GetTrafficPolicyResponse);
    return static_cast<const GetTrafficPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetTrafficPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetTrafficPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTrafficPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTrafficPolicyResponsePrivate
 *
 * @brief  Private implementation for GetTrafficPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTrafficPolicyResponse instance.
 */
GetTrafficPolicyResponsePrivate::GetTrafficPolicyResponsePrivate(
    GetTrafficPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetTrafficPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTrafficPolicyResponsePrivate::parseGetTrafficPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
