// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
