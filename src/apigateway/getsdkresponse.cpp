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

#include "getsdkresponse.h"
#include "getsdkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetSdkResponse
 * \brief The GetSdkResponse class provides an interace for ApiGateway GetSdk responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getSdk
 */

/*!
 * Constructs a GetSdkResponse object for \a reply to \a request, with parent \a parent.
 */
GetSdkResponse::GetSdkResponse(
        const GetSdkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetSdkResponsePrivate(this), parent)
{
    setRequest(new GetSdkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSdkRequest * GetSdkResponse::request() const
{
    Q_D(const GetSdkResponse);
    return static_cast<const GetSdkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetSdk \a response.
 */
void GetSdkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSdkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetSdkResponsePrivate
 * \brief The GetSdkResponsePrivate class provides private implementation for GetSdkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetSdkResponsePrivate object with public implementation \a q.
 */
GetSdkResponsePrivate::GetSdkResponsePrivate(
    GetSdkResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetSdk response element from \a xml.
 */
void GetSdkResponsePrivate::parseGetSdkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSdkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
