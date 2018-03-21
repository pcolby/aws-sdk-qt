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

#include "disassociatefrommasteraccountresponse.h"
#include "disassociatefrommasteraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  DisassociateFromMasterAccountResponse
 *
 * @brief  Handles GuardDuty DisassociateFromMasterAccount responses.
 *
 * @see    GuardDutyClient::disassociateFromMasterAccount
 */

/**
 * @brief  Constructs a new DisassociateFromMasterAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateFromMasterAccountResponse::DisassociateFromMasterAccountResponse(
        const DisassociateFromMasterAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DisassociateFromMasterAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateFromMasterAccountRequest(request));
    setReply(reply);
}

const DisassociateFromMasterAccountRequest * DisassociateFromMasterAccountResponse::request() const
{
    Q_D(const DisassociateFromMasterAccountResponse);
    return static_cast<const DisassociateFromMasterAccountRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty DisassociateFromMasterAccount response.
 *
 * @param  response  Response to parse.
 */
void DisassociateFromMasterAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateFromMasterAccountResponsePrivate
 *
 * @brief  Private implementation for DisassociateFromMasterAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateFromMasterAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateFromMasterAccountResponse instance.
 */
DisassociateFromMasterAccountResponsePrivate::DisassociateFromMasterAccountResponsePrivate(
    DisassociateFromMasterAccountQueueResponse * const q) : DisassociateFromMasterAccountPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty DisassociateFromMasterAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateFromMasterAccountResponsePrivate::DisassociateFromMasterAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFromMasterAccountResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
