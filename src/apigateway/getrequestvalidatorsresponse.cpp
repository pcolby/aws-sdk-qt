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
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetRequestValidatorsResponse
 * \brief The GetRequestValidatorsResponse class provides an interace for APIGateway GetRequestValidators responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getRequestValidators
 */

/*!
 * Constructs a GetRequestValidatorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRequestValidatorsResponse::GetRequestValidatorsResponse(
        const GetRequestValidatorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetRequestValidatorsResponsePrivate(this), parent)
{
    setRequest(new GetRequestValidatorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRequestValidatorsRequest * GetRequestValidatorsResponse::request() const
{
    return static_cast<const GetRequestValidatorsRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway GetRequestValidators \a response.
 */
void GetRequestValidatorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRequestValidatorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetRequestValidatorsResponsePrivate
 * \brief The GetRequestValidatorsResponsePrivate class provides private implementation for GetRequestValidatorsResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetRequestValidatorsResponsePrivate object with public implementation \a q.
 */
GetRequestValidatorsResponsePrivate::GetRequestValidatorsResponsePrivate(
    GetRequestValidatorsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetRequestValidators response element from \a xml.
 */
void GetRequestValidatorsResponsePrivate::parseGetRequestValidatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestValidatorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
