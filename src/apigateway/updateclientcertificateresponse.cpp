// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclientcertificateresponse.h"
#include "updateclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateClientCertificateResponse
 * \brief The UpdateClientCertificateResponse class provides an interace for ApiGateway UpdateClientCertificate responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateClientCertificate
 */

/*!
 * Constructs a UpdateClientCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClientCertificateResponse::UpdateClientCertificateResponse(
        const UpdateClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateClientCertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateClientCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClientCertificateRequest * UpdateClientCertificateResponse::request() const
{
    Q_D(const UpdateClientCertificateResponse);
    return static_cast<const UpdateClientCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateClientCertificate \a response.
 */
void UpdateClientCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClientCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateClientCertificateResponsePrivate
 * \brief The UpdateClientCertificateResponsePrivate class provides private implementation for UpdateClientCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateClientCertificateResponsePrivate object with public implementation \a q.
 */
UpdateClientCertificateResponsePrivate::UpdateClientCertificateResponsePrivate(
    UpdateClientCertificateResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateClientCertificate response element from \a xml.
 */
void UpdateClientCertificateResponsePrivate::parseUpdateClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClientCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
