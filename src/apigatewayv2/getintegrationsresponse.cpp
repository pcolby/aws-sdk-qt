// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationsresponse.h"
#include "getintegrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsResponse
 * \brief The GetIntegrationsResponse class provides an interace for ApiGatewayV2 GetIntegrations responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrations
 */

/*!
 * Constructs a GetIntegrationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationsResponse::GetIntegrationsResponse(
        const GetIntegrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetIntegrationsResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationsRequest * GetIntegrationsResponse::request() const
{
    Q_D(const GetIntegrationsResponse);
    return static_cast<const GetIntegrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetIntegrations \a response.
 */
void GetIntegrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsResponsePrivate
 * \brief The GetIntegrationsResponsePrivate class provides private implementation for GetIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationsResponsePrivate object with public implementation \a q.
 */
GetIntegrationsResponsePrivate::GetIntegrationsResponsePrivate(
    GetIntegrationsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetIntegrations response element from \a xml.
 */
void GetIntegrationsResponsePrivate::parseGetIntegrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
