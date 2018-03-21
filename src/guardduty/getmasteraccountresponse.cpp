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

#include "getmasteraccountresponse.h"
#include "getmasteraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetMasterAccountResponse
 *
 * @brief  Handles GuardDuty GetMasterAccount responses.
 *
 * @see    GuardDutyClient::getMasterAccount
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMasterAccountResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetMasterAccountResponsePrivate(this), parent)
{
    setRequest(new GetMasterAccountRequest(request));
    setReply(reply);
}

const GetMasterAccountRequest * GetMasterAccountResponse::request() const
{
    Q_D(const GetMasterAccountResponse);
    return static_cast<const GetMasterAccountRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty GetMasterAccount response.
 *
 * @param  response  Response to parse.
 */
void GetMasterAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMasterAccountResponsePrivate
 *
 * @brief  Private implementation for GetMasterAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMasterAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMasterAccountResponse instance.
 */
GetMasterAccountResponsePrivate::GetMasterAccountResponsePrivate(
    GetMasterAccountQueueResponse * const q) : GetMasterAccountPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty GetMasterAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMasterAccountResponsePrivate::GetMasterAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMasterAccountResponse"));
    /// @todo
}
