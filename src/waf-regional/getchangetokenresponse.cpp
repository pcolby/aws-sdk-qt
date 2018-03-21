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

#include "getchangetokenresponse.h"
#include "getchangetokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetChangeTokenResponse
 *
 * @brief  Handles WAFRegional GetChangeToken responses.
 *
 * @see    WAFRegionalClient::getChangeToken
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetChangeTokenResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetChangeTokenResponsePrivate(this), parent)
{
    setRequest(new GetChangeTokenRequest(request));
    setReply(reply);
}

const GetChangeTokenRequest * GetChangeTokenResponse::request() const
{
    Q_D(const GetChangeTokenResponse);
    return static_cast<const GetChangeTokenRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetChangeToken response.
 *
 * @param  response  Response to parse.
 */
void GetChangeTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetChangeTokenResponsePrivate
 *
 * @brief  Private implementation for GetChangeTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetChangeTokenResponse instance.
 */
GetChangeTokenResponsePrivate::GetChangeTokenResponsePrivate(
    GetChangeTokenQueueResponse * const q) : GetChangeTokenPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetChangeTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetChangeTokenResponsePrivate::GetChangeTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChangeTokenResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
