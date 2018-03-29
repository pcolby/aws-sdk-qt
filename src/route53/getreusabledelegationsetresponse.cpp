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

#include "getreusabledelegationsetresponse.h"
#include "getreusabledelegationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetReusableDelegationSetResponse
 *
 * @brief  Handles Route53 GetReusableDelegationSet responses.
 *
 * @see    Route53Client::getReusableDelegationSet
 */

/**
 * @brief  Constructs a new GetReusableDelegationSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReusableDelegationSetResponse::GetReusableDelegationSetResponse(
        const GetReusableDelegationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetReusableDelegationSetResponsePrivate(this), parent)
{
    setRequest(new GetReusableDelegationSetRequest(request));
    setReply(reply);
}

const GetReusableDelegationSetRequest * GetReusableDelegationSetResponse::request() const
{
    Q_D(const GetReusableDelegationSetResponse);
    return static_cast<const GetReusableDelegationSetRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetReusableDelegationSet response.
 *
 * @param  response  Response to parse.
 */
void GetReusableDelegationSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReusableDelegationSetResponsePrivate
 *
 * @brief  Private implementation for GetReusableDelegationSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReusableDelegationSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReusableDelegationSetResponse instance.
 */
GetReusableDelegationSetResponsePrivate::GetReusableDelegationSetResponsePrivate(
    GetReusableDelegationSetQueueResponse * const q) : GetReusableDelegationSetPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetReusableDelegationSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReusableDelegationSetResponsePrivate::GetReusableDelegationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReusableDelegationSetResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
