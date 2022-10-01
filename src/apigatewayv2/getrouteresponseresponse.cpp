// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrouteresponseresponse.h"
#include "getrouteresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponseResponse
 * \brief The GetRouteResponseResponse class provides an interace for ApiGatewayV2 GetRouteResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRouteResponse
 */

/*!
 * Constructs a GetRouteResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetRouteResponseResponse::GetRouteResponseResponse(
        const GetRouteResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetRouteResponseResponsePrivate(this), parent)
{
    setRequest(new GetRouteResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRouteResponseRequest * GetRouteResponseResponse::request() const
{
    Q_D(const GetRouteResponseResponse);
    return static_cast<const GetRouteResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetRouteResponse \a response.
 */
void GetRouteResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRouteResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponseResponsePrivate
 * \brief The GetRouteResponseResponsePrivate class provides private implementation for GetRouteResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteResponseResponsePrivate object with public implementation \a q.
 */
GetRouteResponseResponsePrivate::GetRouteResponseResponsePrivate(
    GetRouteResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetRouteResponse response element from \a xml.
 */
void GetRouteResponseResponsePrivate::parseGetRouteResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRouteResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
