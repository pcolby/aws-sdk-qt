/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getgatewayresponseresponse.h"
#include "getgatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseResponse
 * \brief The GetGatewayResponseResponse class provides an interace for ApiGateway GetGatewayResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getGatewayResponse
 */

/*!
 * Constructs a GetGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetGatewayResponseResponse::GetGatewayResponseResponse(
        const GetGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new GetGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGatewayResponseRequest * GetGatewayResponseResponse::request() const
{
    Q_D(const GetGatewayResponseResponse);
    return static_cast<const GetGatewayResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetGatewayResponse \a response.
 */
void GetGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseResponsePrivate
 * \brief The GetGatewayResponseResponsePrivate class provides private implementation for GetGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetGatewayResponseResponsePrivate object with public implementation \a q.
 */
GetGatewayResponseResponsePrivate::GetGatewayResponseResponsePrivate(
    GetGatewayResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetGatewayResponse response element from \a xml.
 */
void GetGatewayResponseResponsePrivate::parseGetGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
