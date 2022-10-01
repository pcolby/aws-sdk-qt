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

#include "getauthorizersresponse.h"
#include "getauthorizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAuthorizersResponse
 * \brief The GetAuthorizersResponse class provides an interace for ApiGateway GetAuthorizers responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAuthorizers
 */

/*!
 * Constructs a GetAuthorizersResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizersResponse::GetAuthorizersResponse(
        const GetAuthorizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetAuthorizersResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAuthorizersRequest * GetAuthorizersResponse::request() const
{
    Q_D(const GetAuthorizersResponse);
    return static_cast<const GetAuthorizersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetAuthorizers \a response.
 */
void GetAuthorizersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetAuthorizersResponsePrivate
 * \brief The GetAuthorizersResponsePrivate class provides private implementation for GetAuthorizersResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAuthorizersResponsePrivate object with public implementation \a q.
 */
GetAuthorizersResponsePrivate::GetAuthorizersResponsePrivate(
    GetAuthorizersResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetAuthorizers response element from \a xml.
 */
void GetAuthorizersResponsePrivate::parseGetAuthorizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
