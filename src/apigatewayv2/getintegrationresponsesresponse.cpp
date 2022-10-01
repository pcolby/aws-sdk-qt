// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationresponsesresponse.h"
#include "getintegrationresponsesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponsesResponse
 * \brief The GetIntegrationResponsesResponse class provides an interace for ApiGatewayV2 GetIntegrationResponses responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrationResponses
 */

/*!
 * Constructs a GetIntegrationResponsesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponsesResponse::GetIntegrationResponsesResponse(
        const GetIntegrationResponsesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetIntegrationResponsesResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationResponsesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationResponsesRequest * GetIntegrationResponsesResponse::request() const
{
    Q_D(const GetIntegrationResponsesResponse);
    return static_cast<const GetIntegrationResponsesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetIntegrationResponses \a response.
 */
void GetIntegrationResponsesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponsesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponsesResponsePrivate
 * \brief The GetIntegrationResponsesResponsePrivate class provides private implementation for GetIntegrationResponsesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationResponsesResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponsesResponsePrivate::GetIntegrationResponsesResponsePrivate(
    GetIntegrationResponsesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetIntegrationResponses response element from \a xml.
 */
void GetIntegrationResponsesResponsePrivate::parseGetIntegrationResponsesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponsesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
