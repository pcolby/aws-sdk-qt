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

#include "getsdktypesresponse.h"
#include "getsdktypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetSdkTypesResponse
 * \brief The GetSdkTypesResponse class provides an interace for APIGateway GetSdkTypes responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getSdkTypes
 */

/*!
 * Constructs a GetSdkTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSdkTypesResponse::GetSdkTypesResponse(
        const GetSdkTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetSdkTypesResponsePrivate(this), parent)
{
    setRequest(new GetSdkTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSdkTypesRequest * GetSdkTypesResponse::request() const
{
    Q_D(const GetSdkTypesResponse);
    return static_cast<const GetSdkTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetSdkTypes \a response.
 */
void GetSdkTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSdkTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetSdkTypesResponsePrivate
 * \brief The GetSdkTypesResponsePrivate class provides private implementation for GetSdkTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetSdkTypesResponsePrivate object with public implementation \a q.
 */
GetSdkTypesResponsePrivate::GetSdkTypesResponsePrivate(
    GetSdkTypesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetSdkTypes response element from \a xml.
 */
void GetSdkTypesResponsePrivate::parseGetSdkTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSdkTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
