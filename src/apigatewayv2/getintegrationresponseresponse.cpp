// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationresponseresponse.h"
#include "getintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponseResponse
 * \brief The GetIntegrationResponseResponse class provides an interace for ApiGatewayV2 GetIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrationResponse
 */

/*!
 * Constructs a GetIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponseResponse::GetIntegrationResponseResponse(
        const GetIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationResponseRequest * GetIntegrationResponseResponse::request() const
{
    Q_D(const GetIntegrationResponseResponse);
    return static_cast<const GetIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetIntegrationResponse \a response.
 */
void GetIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponseResponsePrivate
 * \brief The GetIntegrationResponseResponsePrivate class provides private implementation for GetIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationResponseResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponseResponsePrivate::GetIntegrationResponseResponsePrivate(
    GetIntegrationResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetIntegrationResponse response element from \a xml.
 */
void GetIntegrationResponseResponsePrivate::parseGetIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
