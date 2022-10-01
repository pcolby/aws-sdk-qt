// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclientcertificateresponse.h"
#include "deleteclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteClientCertificateResponse
 * \brief The DeleteClientCertificateResponse class provides an interace for ApiGateway DeleteClientCertificate responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteClientCertificate
 */

/*!
 * Constructs a DeleteClientCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteClientCertificateResponse::DeleteClientCertificateResponse(
        const DeleteClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteClientCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteClientCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteClientCertificateRequest * DeleteClientCertificateResponse::request() const
{
    Q_D(const DeleteClientCertificateResponse);
    return static_cast<const DeleteClientCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteClientCertificate \a response.
 */
void DeleteClientCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteClientCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteClientCertificateResponsePrivate
 * \brief The DeleteClientCertificateResponsePrivate class provides private implementation for DeleteClientCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteClientCertificateResponsePrivate object with public implementation \a q.
 */
DeleteClientCertificateResponsePrivate::DeleteClientCertificateResponsePrivate(
    DeleteClientCertificateResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteClientCertificate response element from \a xml.
 */
void DeleteClientCertificateResponsePrivate::parseDeleteClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClientCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
