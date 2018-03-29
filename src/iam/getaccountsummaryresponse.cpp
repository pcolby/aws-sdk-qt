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

#include "getaccountsummaryresponse.h"
#include "getaccountsummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetAccountSummaryResponse
 *
 * @brief  Handles IAM GetAccountSummary responses.
 *
 * @see    IAMClient::getAccountSummary
 */

/**
 * @brief  Constructs a new GetAccountSummaryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountSummaryResponse::GetAccountSummaryResponse(
        const GetAccountSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetAccountSummaryResponsePrivate(this), parent)
{
    setRequest(new GetAccountSummaryRequest(request));
    setReply(reply);
}

const GetAccountSummaryRequest * GetAccountSummaryResponse::request() const
{
    Q_D(const GetAccountSummaryResponse);
    return static_cast<const GetAccountSummaryRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetAccountSummary response.
 *
 * @param  response  Response to parse.
 */
void GetAccountSummaryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAccountSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountSummaryResponsePrivate
 *
 * @brief  Private implementation for GetAccountSummaryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountSummaryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountSummaryResponse instance.
 */
GetAccountSummaryResponsePrivate::GetAccountSummaryResponsePrivate(
    GetAccountSummaryResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetAccountSummaryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountSummaryResponsePrivate::GetAccountSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountSummaryResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
