/*
    Copyright 2013-2021 Paul Colby

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

#include "reimportapiresponse.h"
#include "reimportapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiResponse
 * \brief The ReimportApiResponse class provides an interace for ApiGatewayV2 ReimportApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::reimportApi
 */

/*!
 * Constructs a ReimportApiResponse object for \a reply to \a request, with parent \a parent.
 */
ReimportApiResponse::ReimportApiResponse(
        const ReimportApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new ReimportApiResponsePrivate(this), parent)
{
    setRequest(new ReimportApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReimportApiRequest * ReimportApiResponse::request() const
{
    return static_cast<const ReimportApiRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 ReimportApi \a response.
 */
void ReimportApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReimportApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiResponsePrivate
 * \brief The ReimportApiResponsePrivate class provides private implementation for ReimportApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ReimportApiResponsePrivate object with public implementation \a q.
 */
ReimportApiResponsePrivate::ReimportApiResponsePrivate(
    ReimportApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 ReimportApi response element from \a xml.
 */
void ReimportApiResponsePrivate::parseReimportApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReimportApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
