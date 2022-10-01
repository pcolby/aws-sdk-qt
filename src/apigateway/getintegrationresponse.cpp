// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationresponse.h"
#include "getintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponse
 * \brief The GetIntegrationResponse class provides an interace for ApiGateway GetIntegration responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getIntegration
 */

/*!
 * Constructs a GetIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponse::GetIntegrationResponse(
        const GetIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetIntegrationResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway GetIntegration \a response.
 */
void GetIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponsePrivate
 * \brief The GetIntegrationResponsePrivate class provides private implementation for GetIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetIntegrationResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponsePrivate::GetIntegrationResponsePrivate(
    GetIntegrationResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetIntegration response element from \a xml.
 */
void GetIntegrationResponsePrivate::parseGetIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
