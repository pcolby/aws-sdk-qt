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

#include "createintegrationresponse.h"
#include "createintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationResponse
 * \brief The CreateIntegrationResponse class provides an interace for ApiGatewayV2 CreateIntegration responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createIntegration
 */

/*!
 * Constructs a CreateIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIntegrationResponse::CreateIntegrationResponse(
        const CreateIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateIntegrationResponsePrivate(this), parent)
{
    setRequest(new CreateIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIntegrationRequest * CreateIntegrationResponse::request() const
{
    return static_cast<const CreateIntegrationRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateIntegration \a response.
 */
void CreateIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationResponsePrivate
 * \brief The CreateIntegrationResponsePrivate class provides private implementation for CreateIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateIntegrationResponsePrivate object with public implementation \a q.
 */
CreateIntegrationResponsePrivate::CreateIntegrationResponsePrivate(
    CreateIntegrationResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateIntegration response element from \a xml.
 */
void CreateIntegrationResponsePrivate::parseCreateIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
