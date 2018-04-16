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

#include "getintegrationresponse.h"
#include "getintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetIntegrationResponse
 *
 * \brief The GetIntegrationResponse class provides an interace for APIGateway GetIntegration responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getIntegration
 */

/*!
 * @brief  Constructs a new GetIntegrationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntegrationResponse::GetIntegrationResponse(
        const GetIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetIntegrationResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationRequest(request));
    setReply(reply);
}

const GetIntegrationRequest * GetIntegrationResponse::request() const
{
    Q_D(const GetIntegrationResponse);
    return static_cast<const GetIntegrationRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway GetIntegration response.
 *
 * @param  response  Response to parse.
 */
void GetIntegrationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetIntegrationResponsePrivate
 *
 * \brief Private implementation for GetIntegrationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetIntegrationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIntegrationResponse instance.
 */
GetIntegrationResponsePrivate::GetIntegrationResponsePrivate(
    GetIntegrationResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway GetIntegrationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIntegrationResponsePrivate::parseGetIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
