// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putintegrationresponse.h"
#include "putintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponse
 * \brief The PutIntegrationResponse class provides an interace for ApiGateway PutIntegration responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putIntegration
 */

/*!
 * Constructs a PutIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
PutIntegrationResponse::PutIntegrationResponse(
        const PutIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new PutIntegrationResponsePrivate(this), parent)
{
    setRequest(new PutIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutIntegrationRequest * PutIntegrationResponse::request() const
{
    Q_D(const PutIntegrationResponse);
    return static_cast<const PutIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway PutIntegration \a response.
 */
void PutIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponsePrivate
 * \brief The PutIntegrationResponsePrivate class provides private implementation for PutIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutIntegrationResponsePrivate object with public implementation \a q.
 */
PutIntegrationResponsePrivate::PutIntegrationResponsePrivate(
    PutIntegrationResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway PutIntegration response element from \a xml.
 */
void PutIntegrationResponsePrivate::parsePutIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
