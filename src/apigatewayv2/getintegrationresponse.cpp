// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationresponse.h"
#include "getintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponse
 * \brief The GetIntegrationResponse class provides an interace for ApiGatewayV2 GetIntegration responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegration
 */

/*!
 * Constructs a GetIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponse::GetIntegrationResponse(
        const GetIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetIntegrationResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationRequest * GetIntegrationResponse::request() const
{
    Q_D(const GetIntegrationResponse);
    return static_cast<const GetIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetIntegration \a response.
 */
void GetIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponsePrivate
 * \brief The GetIntegrationResponsePrivate class provides private implementation for GetIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponsePrivate::GetIntegrationResponsePrivate(
    GetIntegrationResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetIntegration response element from \a xml.
 */
void GetIntegrationResponsePrivate::parseGetIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
