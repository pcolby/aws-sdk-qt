/*
    Copyright 2013-2020 Paul Colby

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
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizersResponse
 * \brief The GetAuthorizersResponse class provides an interace for ApiGatewayV2 GetAuthorizers responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getAuthorizers
 */

/*!
 * Constructs a GetAuthorizersResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizersResponse::GetAuthorizersResponse(
        const GetAuthorizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetAuthorizersResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 GetAuthorizers \a response.
 */
void GetAuthorizersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizersResponsePrivate
 * \brief The GetAuthorizersResponsePrivate class provides private implementation for GetAuthorizersResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetAuthorizersResponsePrivate object with public implementation \a q.
 */
GetAuthorizersResponsePrivate::GetAuthorizersResponsePrivate(
    GetAuthorizersResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetAuthorizers response element from \a xml.
 */
void GetAuthorizersResponsePrivate::parseGetAuthorizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
