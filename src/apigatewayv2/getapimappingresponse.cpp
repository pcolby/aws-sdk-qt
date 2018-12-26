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

#include "getapimappingresponse.h"
#include "getapimappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingResponse
 * \brief The GetApiMappingResponse class provides an interace for ApiGatewayV2 GetApiMapping responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApiMapping
 */

/*!
 * Constructs a GetApiMappingResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiMappingResponse::GetApiMappingResponse(
        const GetApiMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetApiMappingResponsePrivate(this), parent)
{
    setRequest(new GetApiMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiMappingRequest * GetApiMappingResponse::request() const
{
    Q_D(const GetApiMappingResponse);
    return static_cast<const GetApiMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetApiMapping \a response.
 */
void GetApiMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingResponsePrivate
 * \brief The GetApiMappingResponsePrivate class provides private implementation for GetApiMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiMappingResponsePrivate object with public implementation \a q.
 */
GetApiMappingResponsePrivate::GetApiMappingResponsePrivate(
    GetApiMappingResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetApiMapping response element from \a xml.
 */
void GetApiMappingResponsePrivate::parseGetApiMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
