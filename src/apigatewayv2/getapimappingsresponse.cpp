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

#include "getapimappingsresponse.h"
#include "getapimappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsResponse
 * \brief The GetApiMappingsResponse class provides an interace for ApiGatewayV2 GetApiMappings responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApiMappings
 */

/*!
 * Constructs a GetApiMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiMappingsResponse::GetApiMappingsResponse(
        const GetApiMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetApiMappingsResponsePrivate(this), parent)
{
    setRequest(new GetApiMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiMappingsRequest * GetApiMappingsResponse::request() const
{
    Q_D(const GetApiMappingsResponse);
    return static_cast<const GetApiMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetApiMappings \a response.
 */
void GetApiMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsResponsePrivate
 * \brief The GetApiMappingsResponsePrivate class provides private implementation for GetApiMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiMappingsResponsePrivate object with public implementation \a q.
 */
GetApiMappingsResponsePrivate::GetApiMappingsResponsePrivate(
    GetApiMappingsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetApiMappings response element from \a xml.
 */
void GetApiMappingsResponsePrivate::parseGetApiMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
