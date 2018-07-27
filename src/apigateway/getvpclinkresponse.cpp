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

#include "getvpclinkresponse.h"
#include "getvpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetVpcLinkResponse
 * \brief The GetVpcLinkResponse class provides an interace for APIGateway GetVpcLink responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getVpcLink
 */

/*!
 * Constructs a GetVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
GetVpcLinkResponse::GetVpcLinkResponse(
        const GetVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetVpcLinkResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVpcLinkRequest * GetVpcLinkResponse::request() const
{
    Q_D(const GetVpcLinkResponse);
    return static_cast<const GetVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetVpcLink \a response.
 */
void GetVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetVpcLinkResponsePrivate
 * \brief The GetVpcLinkResponsePrivate class provides private implementation for GetVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetVpcLinkResponsePrivate object with public implementation \a q.
 */
GetVpcLinkResponsePrivate::GetVpcLinkResponsePrivate(
    GetVpcLinkResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetVpcLink response element from \a xml.
 */
void GetVpcLinkResponsePrivate::parseGetVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
