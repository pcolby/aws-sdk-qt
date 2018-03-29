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

#include "deleteegressonlyinternetgatewayresponse.h"
#include "deleteegressonlyinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteEgressOnlyInternetGatewayResponse
 *
 * @brief  Handles EC2 DeleteEgressOnlyInternetGateway responses.
 *
 * @see    EC2Client::deleteEgressOnlyInternetGateway
 */

/**
 * @brief  Constructs a new DeleteEgressOnlyInternetGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEgressOnlyInternetGatewayResponse::DeleteEgressOnlyInternetGatewayResponse(
        const DeleteEgressOnlyInternetGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteEgressOnlyInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteEgressOnlyInternetGatewayRequest(request));
    setReply(reply);
}

const DeleteEgressOnlyInternetGatewayRequest * DeleteEgressOnlyInternetGatewayResponse::request() const
{
    Q_D(const DeleteEgressOnlyInternetGatewayResponse);
    return static_cast<const DeleteEgressOnlyInternetGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteEgressOnlyInternetGateway response.
 *
 * @param  response  Response to parse.
 */
void DeleteEgressOnlyInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEgressOnlyInternetGatewayResponsePrivate
 *
 * @brief  Private implementation for DeleteEgressOnlyInternetGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEgressOnlyInternetGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEgressOnlyInternetGatewayResponse instance.
 */
DeleteEgressOnlyInternetGatewayResponsePrivate::DeleteEgressOnlyInternetGatewayResponsePrivate(
    DeleteEgressOnlyInternetGatewayResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteEgressOnlyInternetGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEgressOnlyInternetGatewayResponsePrivate::DeleteEgressOnlyInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEgressOnlyInternetGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
