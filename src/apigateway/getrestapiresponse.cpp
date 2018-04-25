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

#include "getrestapiresponse.h"
#include "getrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetRestApiResponse
 * \brief The GetRestApiResponse class provides an interace for APIGateway GetRestApi responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getRestApi
 */

/*!
 * Constructs a GetRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
GetRestApiResponse::GetRestApiResponse(
        const GetRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetRestApiResponsePrivate(this), parent)
{
    setRequest(new GetRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRestApiRequest * GetRestApiResponse::request() const
{
    Q_D(const GetRestApiResponse);
    return static_cast<const GetRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetRestApi \a response.
 */
void GetRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetRestApiResponsePrivate
 * \brief The GetRestApiResponsePrivate class provides private implementation for GetRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetRestApiResponsePrivate object with public implementation \a q.
 */
GetRestApiResponsePrivate::GetRestApiResponsePrivate(
    GetRestApiResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetRestApi response element from \a xml.
 */
void GetRestApiResponsePrivate::parseGetRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
