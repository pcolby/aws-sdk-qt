// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateclientcertificateresponse.h"
#include "generateclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GenerateClientCertificateResponse
 * \brief The GenerateClientCertificateResponse class provides an interace for ApiGateway GenerateClientCertificate responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::generateClientCertificate
 */

/*!
 * Constructs a GenerateClientCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateClientCertificateResponse::GenerateClientCertificateResponse(
        const GenerateClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GenerateClientCertificateResponsePrivate(this), parent)
{
    setRequest(new GenerateClientCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateClientCertificateRequest * GenerateClientCertificateResponse::request() const
{
    Q_D(const GenerateClientCertificateResponse);
    return static_cast<const GenerateClientCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GenerateClientCertificate \a response.
 */
void GenerateClientCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateClientCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GenerateClientCertificateResponsePrivate
 * \brief The GenerateClientCertificateResponsePrivate class provides private implementation for GenerateClientCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GenerateClientCertificateResponsePrivate object with public implementation \a q.
 */
GenerateClientCertificateResponsePrivate::GenerateClientCertificateResponsePrivate(
    GenerateClientCertificateResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GenerateClientCertificate response element from \a xml.
 */
void GenerateClientCertificateResponsePrivate::parseGenerateClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateClientCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
