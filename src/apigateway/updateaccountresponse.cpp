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

#include "updateaccountresponse.h"
#include "updateaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateAccountResponse
 *
 * @brief  Handles APIGateway UpdateAccount responses.
 *
 * @see    APIGatewayClient::updateAccount
 */

/**
 * @brief  Constructs a new UpdateAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAccountResponse::UpdateAccountResponse(
        const UpdateAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateAccountResponse(new UpdateAccountResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountRequest(request));
    setReply(reply);
}

const UpdateAccountRequest * UpdateAccountResponse::request() const
{
    Q_D(const UpdateAccountResponse);
    return static_cast<const UpdateAccountRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateAccount response.
 *
 * @param  response  Response to parse.
 */
void UpdateAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAccountResponsePrivate
 *
 * @brief  Private implementation for UpdateAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAccountResponse instance.
 */
UpdateAccountResponsePrivate::UpdateAccountResponsePrivate(
    UpdateAccountResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAccountResponsePrivate::parseUpdateAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
