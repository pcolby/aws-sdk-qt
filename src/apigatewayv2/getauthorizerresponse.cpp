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

#include "getauthorizerresponse.h"
#include "getauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizerResponse
 * \brief The GetAuthorizerResponse class provides an interace for ApiGatewayV2 GetAuthorizer responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getAuthorizer
 */

/*!
 * Constructs a GetAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizerResponse::GetAuthorizerResponse(
        const GetAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetAuthorizerResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAuthorizerRequest * GetAuthorizerResponse::request() const
{
    Q_D(const GetAuthorizerResponse);
    return static_cast<const GetAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetAuthorizer \a response.
 */
void GetAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizerResponsePrivate
 * \brief The GetAuthorizerResponsePrivate class provides private implementation for GetAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetAuthorizerResponsePrivate object with public implementation \a q.
 */
GetAuthorizerResponsePrivate::GetAuthorizerResponsePrivate(
    GetAuthorizerResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetAuthorizer response element from \a xml.
 */
void GetAuthorizerResponsePrivate::parseGetAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
