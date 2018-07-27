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

#include "getresourcesresponse.h"
#include "getresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetResourcesResponse
 * \brief The GetResourcesResponse class provides an interace for APIGateway GetResources responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getResources
 */

/*!
 * Constructs a GetResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourcesResponse::GetResourcesResponse(
        const GetResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetResourcesResponsePrivate(this), parent)
{
    setRequest(new GetResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourcesRequest * GetResourcesResponse::request() const
{
    Q_D(const GetResourcesResponse);
    return static_cast<const GetResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetResources \a response.
 */
void GetResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetResourcesResponsePrivate
 * \brief The GetResourcesResponsePrivate class provides private implementation for GetResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetResourcesResponsePrivate object with public implementation \a q.
 */
GetResourcesResponsePrivate::GetResourcesResponsePrivate(
    GetResourcesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetResources response element from \a xml.
 */
void GetResourcesResponsePrivate::parseGetResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
