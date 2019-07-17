/*
    Copyright 2013-2019 Paul Colby

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

#include "getapisresponse.h"
#include "getapisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApisResponse
 * \brief The GetApisResponse class provides an interace for ApiGatewayV2 GetApis responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApis
 */

/*!
 * Constructs a GetApisResponse object for \a reply to \a request, with parent \a parent.
 */
GetApisResponse::GetApisResponse(
        const GetApisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetApisResponsePrivate(this), parent)
{
    setRequest(new GetApisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApisRequest * GetApisResponse::request() const
{
    Q_D(const GetApisResponse);
    return static_cast<const GetApisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetApis \a response.
 */
void GetApisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetApisResponsePrivate
 * \brief The GetApisResponsePrivate class provides private implementation for GetApisResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApisResponsePrivate object with public implementation \a q.
 */
GetApisResponsePrivate::GetApisResponsePrivate(
    GetApisResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetApis response element from \a xml.
 */
void GetApisResponsePrivate::parseGetApisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
