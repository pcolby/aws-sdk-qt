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

#include "getaccountbalanceresponse.h"
#include "getaccountbalanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  GetAccountBalanceResponse
 *
 * @brief  Handles MTurk GetAccountBalance responses.
 *
 * @see    MTurkClient::getAccountBalance
 */

/**
 * @brief  Constructs a new GetAccountBalanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountBalanceResponse::GetAccountBalanceResponse(
        const GetAccountBalanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetAccountBalanceResponsePrivate(this), parent)
{
    setRequest(new GetAccountBalanceRequest(request));
    setReply(reply);
}

const GetAccountBalanceRequest * GetAccountBalanceResponse::request() const
{
    Q_D(const GetAccountBalanceResponse);
    return static_cast<const GetAccountBalanceRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk GetAccountBalance response.
 *
 * @param  response  Response to parse.
 */
void GetAccountBalanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountBalanceResponsePrivate
 *
 * @brief  Private implementation for GetAccountBalanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountBalanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountBalanceResponse instance.
 */
GetAccountBalanceResponsePrivate::GetAccountBalanceResponsePrivate(
    GetAccountBalanceQueueResponse * const q) : GetAccountBalancePrivate(q)
{

}

/**
 * @brief  Parse an MTurk GetAccountBalanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountBalanceResponsePrivate::GetAccountBalanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountBalanceResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
