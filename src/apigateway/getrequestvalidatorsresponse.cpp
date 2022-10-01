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

#include "getrequestvalidatorsresponse.h"
#include "getrequestvalidatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsResponse
 * \brief The GetRequestValidatorsResponse class provides an interace for ApiGateway GetRequestValidators responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRequestValidators
 */

/*!
 * Constructs a GetRequestValidatorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRequestValidatorsResponse::GetRequestValidatorsResponse(
        const GetRequestValidatorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetRequestValidatorsResponsePrivate(this), parent)
{
    setRequest(new GetRequestValidatorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRequestValidatorsRequest * GetRequestValidatorsResponse::request() const
{
    Q_D(const GetRequestValidatorsResponse);
    return static_cast<const GetRequestValidatorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetRequestValidators \a response.
 */
void GetRequestValidatorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRequestValidatorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsResponsePrivate
 * \brief The GetRequestValidatorsResponsePrivate class provides private implementation for GetRequestValidatorsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRequestValidatorsResponsePrivate object with public implementation \a q.
 */
GetRequestValidatorsResponsePrivate::GetRequestValidatorsResponsePrivate(
    GetRequestValidatorsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetRequestValidators response element from \a xml.
 */
void GetRequestValidatorsResponsePrivate::parseGetRequestValidatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestValidatorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
