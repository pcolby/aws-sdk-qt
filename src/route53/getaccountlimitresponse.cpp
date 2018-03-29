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

#include "getaccountlimitresponse.h"
#include "getaccountlimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetAccountLimitResponse
 *
 * @brief  Handles Route53 GetAccountLimit responses.
 *
 * @see    Route53Client::getAccountLimit
 */

/**
 * @brief  Constructs a new GetAccountLimitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountLimitResponse::GetAccountLimitResponse(
        const GetAccountLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetAccountLimitResponsePrivate(this), parent)
{
    setRequest(new GetAccountLimitRequest(request));
    setReply(reply);
}

const GetAccountLimitRequest * GetAccountLimitResponse::request() const
{
    Q_D(const GetAccountLimitResponse);
    return static_cast<const GetAccountLimitRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetAccountLimit response.
 *
 * @param  response  Response to parse.
 */
void GetAccountLimitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountLimitResponsePrivate
 *
 * @brief  Private implementation for GetAccountLimitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountLimitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountLimitResponse instance.
 */
GetAccountLimitResponsePrivate::GetAccountLimitResponsePrivate(
    GetAccountLimitResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetAccountLimitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountLimitResponsePrivate::GetAccountLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountLimitResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
