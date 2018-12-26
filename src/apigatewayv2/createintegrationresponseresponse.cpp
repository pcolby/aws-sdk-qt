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

#include "createintegrationresponseresponse.h"
#include "createintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationResponseResponse
 * \brief The CreateIntegrationResponseResponse class provides an interace for ApiGatewayV2 CreateIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createIntegrationResponse
 */

/*!
 * Constructs a CreateIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIntegrationResponseResponse::CreateIntegrationResponseResponse(
        const CreateIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new CreateIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIntegrationResponseRequest * CreateIntegrationResponseResponse::request() const
{
    Q_D(const CreateIntegrationResponseResponse);
    return static_cast<const CreateIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateIntegrationResponse \a response.
 */
void CreateIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationResponseResponsePrivate
 * \brief The CreateIntegrationResponseResponsePrivate class provides private implementation for CreateIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateIntegrationResponseResponsePrivate object with public implementation \a q.
 */
CreateIntegrationResponseResponsePrivate::CreateIntegrationResponseResponsePrivate(
    CreateIntegrationResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateIntegrationResponse response element from \a xml.
 */
void CreateIntegrationResponseResponsePrivate::parseCreateIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
