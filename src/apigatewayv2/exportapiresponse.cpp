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

#include "exportapiresponse.h"
#include "exportapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ExportApiResponse
 * \brief The ExportApiResponse class provides an interace for ApiGatewayV2 ExportApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::exportApi
 */

/*!
 * Constructs a ExportApiResponse object for \a reply to \a request, with parent \a parent.
 */
ExportApiResponse::ExportApiResponse(
        const ExportApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new ExportApiResponsePrivate(this), parent)
{
    setRequest(new ExportApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportApiRequest * ExportApiResponse::request() const
{
    return static_cast<const ExportApiRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 ExportApi \a response.
 */
void ExportApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::ExportApiResponsePrivate
 * \brief The ExportApiResponsePrivate class provides private implementation for ExportApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ExportApiResponsePrivate object with public implementation \a q.
 */
ExportApiResponsePrivate::ExportApiResponsePrivate(
    ExportApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 ExportApi response element from \a xml.
 */
void ExportApiResponsePrivate::parseExportApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
