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

#include "deletedomainnameresponse.h"
#include "deletedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteDomainNameResponse
 *
 * @brief  Handles APIGateway DeleteDomainName responses.
 *
 * @see    APIGatewayClient::deleteDomainName
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDomainNameResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteDomainNameResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainNameRequest(request));
    setReply(reply);
}

const DeleteDomainNameRequest * DeleteDomainNameResponse::request() const
{
    Q_D(const DeleteDomainNameResponse);
    return static_cast<const DeleteDomainNameRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteDomainName response.
 *
 * @param  response  Response to parse.
 */
void DeleteDomainNameResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDomainNameResponsePrivate
 *
 * @brief  Private implementation for DeleteDomainNameResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainNameResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDomainNameResponse instance.
 */
DeleteDomainNameResponsePrivate::DeleteDomainNameResponsePrivate(
    DeleteDomainNameQueueResponse * const q) : DeleteDomainNamePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteDomainNameResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDomainNameResponsePrivate::DeleteDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainNameResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
