/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdomainnamesresponse.h"
#include "getdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDomainNamesResponse
 * \brief The GetDomainNamesResponse class provides an interace for APIGateway GetDomainNames responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDomainNames
 */

/*!
 * Constructs a GetDomainNamesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainNamesResponse::GetDomainNamesResponse(
        const GetDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDomainNamesResponsePrivate(this), parent)
{
    setRequest(new GetDomainNamesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainNamesRequest * GetDomainNamesResponse::request() const
{
    Q_D(const GetDomainNamesResponse);
    return static_cast<const GetDomainNamesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetDomainNames \a response.
 */
void GetDomainNamesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDomainNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetDomainNamesResponsePrivate
 * \brief The GetDomainNamesResponsePrivate class provides private implementation for GetDomainNamesResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDomainNamesResponsePrivate object with public implementation \a q.
 */
GetDomainNamesResponsePrivate::GetDomainNamesResponsePrivate(
    GetDomainNamesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetDomainNames response element from \a xml.
 */
void GetDomainNamesResponsePrivate::parseGetDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNamesResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
