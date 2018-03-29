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

#include "getreusabledelegationsetlimitresponse.h"
#include "getreusabledelegationsetlimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetReusableDelegationSetLimitResponse
 *
 * @brief  Handles Route53 GetReusableDelegationSetLimit responses.
 *
 * @see    Route53Client::getReusableDelegationSetLimit
 */

/**
 * @brief  Constructs a new GetReusableDelegationSetLimitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReusableDelegationSetLimitResponse::GetReusableDelegationSetLimitResponse(
        const GetReusableDelegationSetLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetReusableDelegationSetLimitResponsePrivate(this), parent)
{
    setRequest(new GetReusableDelegationSetLimitRequest(request));
    setReply(reply);
}

const GetReusableDelegationSetLimitRequest * GetReusableDelegationSetLimitResponse::request() const
{
    Q_D(const GetReusableDelegationSetLimitResponse);
    return static_cast<const GetReusableDelegationSetLimitRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetReusableDelegationSetLimit response.
 *
 * @param  response  Response to parse.
 */
void GetReusableDelegationSetLimitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReusableDelegationSetLimitResponsePrivate
 *
 * @brief  Private implementation for GetReusableDelegationSetLimitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReusableDelegationSetLimitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReusableDelegationSetLimitResponse instance.
 */
GetReusableDelegationSetLimitResponsePrivate::GetReusableDelegationSetLimitResponsePrivate(
    GetReusableDelegationSetLimitQueueResponse * const q) : GetReusableDelegationSetLimitPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetReusableDelegationSetLimitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReusableDelegationSetLimitResponsePrivate::GetReusableDelegationSetLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReusableDelegationSetLimitResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
