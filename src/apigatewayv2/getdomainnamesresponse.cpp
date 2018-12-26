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

#include "getdomainnamesresponse.h"
#include "getdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesResponse
 * \brief The GetDomainNamesResponse class provides an interace for ApiGatewayV2 GetDomainNames responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDomainNames
 */

/*!
 * Constructs a GetDomainNamesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainNamesResponse::GetDomainNamesResponse(
        const GetDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetDomainNamesResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 GetDomainNames \a response.
 */
void GetDomainNamesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesResponsePrivate
 * \brief The GetDomainNamesResponsePrivate class provides private implementation for GetDomainNamesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDomainNamesResponsePrivate object with public implementation \a q.
 */
GetDomainNamesResponsePrivate::GetDomainNamesResponsePrivate(
    GetDomainNamesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetDomainNames response element from \a xml.
 */
void GetDomainNamesResponsePrivate::parseGetDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNamesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
