// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrouteresponseresponse.h"
#include "createrouteresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseResponse
 * \brief The CreateRouteResponseResponse class provides an interace for ApiGatewayV2 CreateRouteResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createRouteResponse
 */

/*!
 * Constructs a CreateRouteResponseResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRouteResponseResponse::CreateRouteResponseResponse(
        const CreateRouteResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateRouteResponseResponsePrivate(this), parent)
{
    setRequest(new CreateRouteResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRouteResponseRequest * CreateRouteResponseResponse::request() const
{
    Q_D(const CreateRouteResponseResponse);
    return static_cast<const CreateRouteResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateRouteResponse \a response.
 */
void CreateRouteResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRouteResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseResponsePrivate
 * \brief The CreateRouteResponseResponsePrivate class provides private implementation for CreateRouteResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateRouteResponseResponsePrivate object with public implementation \a q.
 */
CreateRouteResponseResponsePrivate::CreateRouteResponseResponsePrivate(
    CreateRouteResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateRouteResponse response element from \a xml.
 */
void CreateRouteResponseResponsePrivate::parseCreateRouteResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
