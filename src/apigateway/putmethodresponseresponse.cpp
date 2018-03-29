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

#include "putmethodresponseresponse.h"
#include "putmethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  PutMethodResponseResponse
 *
 * @brief  Handles APIGateway PutMethodResponse responses.
 *
 * @see    APIGatewayClient::putMethodResponse
 */

/**
 * @brief  Constructs a new PutMethodResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMethodResponseResponse::PutMethodResponseResponse(
        const PutMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutMethodResponseResponsePrivate(this), parent)
{
    setRequest(new PutMethodResponseRequest(request));
    setReply(reply);
}

const PutMethodResponseRequest * PutMethodResponseResponse::request() const
{
    Q_D(const PutMethodResponseResponse);
    return static_cast<const PutMethodResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway PutMethodResponse response.
 *
 * @param  response  Response to parse.
 */
void PutMethodResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutMethodResponseResponsePrivate
 *
 * @brief  Private implementation for PutMethodResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMethodResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutMethodResponseResponse instance.
 */
PutMethodResponseResponsePrivate::PutMethodResponseResponsePrivate(
    PutMethodResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway PutMethodResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutMethodResponseResponsePrivate::parsePutMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMethodResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
