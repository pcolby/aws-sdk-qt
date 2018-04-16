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

#include "putgatewayresponseresponse.h"
#include "putgatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutGatewayResponseResponse
 *
 * \brief The PutGatewayResponseResponse class encapsulates APIGateway PutGatewayResponse responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putGatewayResponse
 */

/*!
 * @brief  Constructs a new PutGatewayResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutGatewayResponseResponse::PutGatewayResponseResponse(
        const PutGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new PutGatewayResponseRequest(request));
    setReply(reply);
}

const PutGatewayResponseRequest * PutGatewayResponseResponse::request() const
{
    Q_D(const PutGatewayResponseResponse);
    return static_cast<const PutGatewayResponseRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway PutGatewayResponse response.
 *
 * @param  response  Response to parse.
 */
void PutGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutGatewayResponseResponsePrivate
 *
 * \brief Private implementation for PutGatewayResponseResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutGatewayResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutGatewayResponseResponse instance.
 */
PutGatewayResponseResponsePrivate::PutGatewayResponseResponsePrivate(
    PutGatewayResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway PutGatewayResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutGatewayResponseResponsePrivate::parsePutGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutGatewayResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
