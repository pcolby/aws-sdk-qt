/*
    Copyright 2013-2018 Paul Colby

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

#include "getgatewayresponsesresponse.h"
#include "getgatewayresponsesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetGatewayResponsesResponse
 * \brief The GetGatewayResponsesResponse class provides an interace for APIGateway GetGatewayResponses responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getGatewayResponses
 */

/*!
 * Constructs a GetGatewayResponsesResponse object for \a reply to \a request, with parent \a parent.
 */
GetGatewayResponsesResponse::GetGatewayResponsesResponse(
        const GetGatewayResponsesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetGatewayResponsesResponsePrivate(this), parent)
{
    setRequest(new GetGatewayResponsesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGatewayResponsesRequest * GetGatewayResponsesResponse::request() const
{
    Q_D(const GetGatewayResponsesResponse);
    return static_cast<const GetGatewayResponsesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetGatewayResponses \a response.
 */
void GetGatewayResponsesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGatewayResponsesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetGatewayResponsesResponsePrivate
 * \brief The GetGatewayResponsesResponsePrivate class provides private implementation for GetGatewayResponsesResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetGatewayResponsesResponsePrivate object with public implementation \a q.
 */
GetGatewayResponsesResponsePrivate::GetGatewayResponsesResponsePrivate(
    GetGatewayResponsesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetGatewayResponses response element from \a xml.
 */
void GetGatewayResponsesResponsePrivate::parseGetGatewayResponsesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGatewayResponsesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
