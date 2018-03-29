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

#include "updatedomainnameresponse.h"
#include "updatedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateDomainNameResponse
 *
 * @brief  Handles APIGateway UpdateDomainName responses.
 *
 * @see    APIGatewayClient::updateDomainName
 */

/**
 * @brief  Constructs a new UpdateDomainNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDomainNameResponse::UpdateDomainNameResponse(
        const UpdateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateDomainNameResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainNameRequest(request));
    setReply(reply);
}

const UpdateDomainNameRequest * UpdateDomainNameResponse::request() const
{
    Q_D(const UpdateDomainNameResponse);
    return static_cast<const UpdateDomainNameRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateDomainName response.
 *
 * @param  response  Response to parse.
 */
void UpdateDomainNameResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDomainNameResponsePrivate
 *
 * @brief  Private implementation for UpdateDomainNameResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainNameResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDomainNameResponse instance.
 */
UpdateDomainNameResponsePrivate::UpdateDomainNameResponsePrivate(
    UpdateDomainNameResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateDomainNameResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDomainNameResponsePrivate::UpdateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainNameResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
