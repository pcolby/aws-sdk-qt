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

#include "getrestapisresponse.h"
#include "getrestapisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRestApisResponse
 * \brief The GetRestApisResponse class provides an interace for ApiGateway GetRestApis responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRestApis
 */

/*!
 * Constructs a GetRestApisResponse object for \a reply to \a request, with parent \a parent.
 */
GetRestApisResponse::GetRestApisResponse(
        const GetRestApisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetRestApisResponsePrivate(this), parent)
{
    setRequest(new GetRestApisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRestApisRequest * GetRestApisResponse::request() const
{
    Q_D(const GetRestApisResponse);
    return static_cast<const GetRestApisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetRestApis \a response.
 */
void GetRestApisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRestApisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetRestApisResponsePrivate
 * \brief The GetRestApisResponsePrivate class provides private implementation for GetRestApisResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRestApisResponsePrivate object with public implementation \a q.
 */
GetRestApisResponsePrivate::GetRestApisResponsePrivate(
    GetRestApisResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetRestApis response element from \a xml.
 */
void GetRestApisResponsePrivate::parseGetRestApisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRestApisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
