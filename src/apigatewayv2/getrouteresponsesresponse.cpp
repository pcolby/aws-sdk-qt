// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrouteresponsesresponse.h"
#include "getrouteresponsesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponsesResponse
 * \brief The GetRouteResponsesResponse class provides an interace for ApiGatewayV2 GetRouteResponses responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRouteResponses
 */

/*!
 * Constructs a GetRouteResponsesResponse object for \a reply to \a request, with parent \a parent.
 */
GetRouteResponsesResponse::GetRouteResponsesResponse(
        const GetRouteResponsesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetRouteResponsesResponsePrivate(this), parent)
{
    setRequest(new GetRouteResponsesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRouteResponsesRequest * GetRouteResponsesResponse::request() const
{
    Q_D(const GetRouteResponsesResponse);
    return static_cast<const GetRouteResponsesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetRouteResponses \a response.
 */
void GetRouteResponsesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRouteResponsesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponsesResponsePrivate
 * \brief The GetRouteResponsesResponsePrivate class provides private implementation for GetRouteResponsesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteResponsesResponsePrivate object with public implementation \a q.
 */
GetRouteResponsesResponsePrivate::GetRouteResponsesResponsePrivate(
    GetRouteResponsesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetRouteResponses response element from \a xml.
 */
void GetRouteResponsesResponsePrivate::parseGetRouteResponsesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRouteResponsesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
