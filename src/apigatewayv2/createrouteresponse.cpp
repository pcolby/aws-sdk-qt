// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrouteresponse.h"
#include "createrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponse
 * \brief The CreateRouteResponse class provides an interace for ApiGatewayV2 CreateRoute responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createRoute
 */

/*!
 * Constructs a CreateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRouteResponse::CreateRouteResponse(
        const CreateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateRouteResponsePrivate(this), parent)
{
    setRequest(new CreateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRouteRequest * CreateRouteResponse::request() const
{
    Q_D(const CreateRouteResponse);
    return static_cast<const CreateRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateRoute \a response.
 */
void CreateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponsePrivate
 * \brief The CreateRouteResponsePrivate class provides private implementation for CreateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateRouteResponsePrivate object with public implementation \a q.
 */
CreateRouteResponsePrivate::CreateRouteResponsePrivate(
    CreateRouteResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateRoute response element from \a xml.
 */
void CreateRouteResponsePrivate::parseCreateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
