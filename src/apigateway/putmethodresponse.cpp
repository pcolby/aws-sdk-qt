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

#include "putmethodresponse.h"
#include "putmethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  PutMethodResponse
 *
 * @brief  Handles APIGateway PutMethod responses.
 *
 * @see    APIGatewayClient::putMethod
 */

/**
 * @brief  Constructs a new PutMethodResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMethodResponse::PutMethodResponse(
        const PutMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutMethodResponsePrivate(this), parent)
{
    setRequest(new PutMethodRequest(request));
    setReply(reply);
}

const PutMethodRequest * PutMethodResponse::request() const
{
    Q_D(const PutMethodResponse);
    return static_cast<const PutMethodRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway PutMethod response.
 *
 * @param  response  Response to parse.
 */
void PutMethodResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutMethodResponsePrivate
 *
 * @brief  Private implementation for PutMethodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMethodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutMethodResponse instance.
 */
PutMethodResponsePrivate::PutMethodResponsePrivate(
    PutMethodResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway PutMethodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutMethodResponsePrivate::parsePutMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMethodResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
