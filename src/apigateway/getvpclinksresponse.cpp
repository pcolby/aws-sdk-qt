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

#include "getvpclinksresponse.h"
#include "getvpclinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetVpcLinksResponse
 * \brief The GetVpcLinksResponse class provides an interace for APIGateway GetVpcLinks responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getVpcLinks
 */

/*!
 * Constructs a GetVpcLinksResponse object for \a reply to \a request, with parent \a parent.
 */
GetVpcLinksResponse::GetVpcLinksResponse(
        const GetVpcLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetVpcLinksResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVpcLinksRequest * GetVpcLinksResponse::request() const
{
    Q_D(const GetVpcLinksResponse);
    return static_cast<const GetVpcLinksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetVpcLinks \a response.
 */
void GetVpcLinksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVpcLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetVpcLinksResponsePrivate
 * \brief The GetVpcLinksResponsePrivate class provides private implementation for GetVpcLinksResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetVpcLinksResponsePrivate object with public implementation \a q.
 */
GetVpcLinksResponsePrivate::GetVpcLinksResponsePrivate(
    GetVpcLinksResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetVpcLinks response element from \a xml.
 */
void GetVpcLinksResponsePrivate::parseGetVpcLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
