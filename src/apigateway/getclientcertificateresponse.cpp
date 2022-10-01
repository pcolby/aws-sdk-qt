// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclientcertificateresponse.h"
#include "getclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetClientCertificateResponse
 * \brief The GetClientCertificateResponse class provides an interace for ApiGateway GetClientCertificate responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getClientCertificate
 */

/*!
 * Constructs a GetClientCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetClientCertificateResponse::GetClientCertificateResponse(
        const GetClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetClientCertificateResponsePrivate(this), parent)
{
    setRequest(new GetClientCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClientCertificateRequest * GetClientCertificateResponse::request() const
{
    Q_D(const GetClientCertificateResponse);
    return static_cast<const GetClientCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetClientCertificate \a response.
 */
void GetClientCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClientCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetClientCertificateResponsePrivate
 * \brief The GetClientCertificateResponsePrivate class provides private implementation for GetClientCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetClientCertificateResponsePrivate object with public implementation \a q.
 */
GetClientCertificateResponsePrivate::GetClientCertificateResponsePrivate(
    GetClientCertificateResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetClientCertificate response element from \a xml.
 */
void GetClientCertificateResponsePrivate::parseGetClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClientCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
