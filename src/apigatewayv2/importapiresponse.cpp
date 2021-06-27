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

#include "importapiresponse.h"
#include "importapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ImportApiResponse
 * \brief The ImportApiResponse class provides an interace for ApiGatewayV2 ImportApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::importApi
 */

/*!
 * Constructs a ImportApiResponse object for \a reply to \a request, with parent \a parent.
 */
ImportApiResponse::ImportApiResponse(
        const ImportApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new ImportApiResponsePrivate(this), parent)
{
    setRequest(new ImportApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportApiRequest * ImportApiResponse::request() const
{
    return static_cast<const ImportApiRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 ImportApi \a response.
 */
void ImportApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::ImportApiResponsePrivate
 * \brief The ImportApiResponsePrivate class provides private implementation for ImportApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ImportApiResponsePrivate object with public implementation \a q.
 */
ImportApiResponsePrivate::ImportApiResponsePrivate(
    ImportApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 ImportApi response element from \a xml.
 */
void ImportApiResponsePrivate::parseImportApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
