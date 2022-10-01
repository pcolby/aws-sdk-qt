// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationresponseresponse.h"
#include "getintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponseResponse
 * \brief The GetIntegrationResponseResponse class provides an interace for ApiGateway GetIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getIntegrationResponse
 */

/*!
 * Constructs a GetIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponseResponse::GetIntegrationResponseResponse(
        const GetIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetIntegrationResponseResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway GetIntegrationResponse \a response.
 */
void GetIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponseResponsePrivate
 * \brief The GetIntegrationResponseResponsePrivate class provides private implementation for GetIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetIntegrationResponseResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponseResponsePrivate::GetIntegrationResponseResponsePrivate(
    GetIntegrationResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetIntegrationResponse response element from \a xml.
 */
void GetIntegrationResponseResponsePrivate::parseGetIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
