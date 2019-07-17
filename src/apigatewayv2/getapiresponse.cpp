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

#include "getapiresponse.h"
#include "getapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiResponse
 * \brief The GetApiResponse class provides an interace for ApiGatewayV2 GetApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApi
 */

/*!
 * Constructs a GetApiResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiResponse::GetApiResponse(
        const GetApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetApiResponsePrivate(this), parent)
{
    setRequest(new GetApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiRequest * GetApiResponse::request() const
{
    Q_D(const GetApiResponse);
    return static_cast<const GetApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetApi \a response.
 */
void GetApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiResponsePrivate
 * \brief The GetApiResponsePrivate class provides private implementation for GetApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiResponsePrivate object with public implementation \a q.
 */
GetApiResponsePrivate::GetApiResponsePrivate(
    GetApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetApi response element from \a xml.
 */
void GetApiResponsePrivate::parseGetApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
