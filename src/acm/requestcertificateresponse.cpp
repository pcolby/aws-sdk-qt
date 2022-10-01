// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "requestcertificateresponse.h"
#include "requestcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::RequestCertificateResponse
 * \brief The RequestCertificateResponse class provides an interace for Acm RequestCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::requestCertificate
 */

/*!
 * Constructs a RequestCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
RequestCertificateResponse::RequestCertificateResponse(
        const RequestCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new RequestCertificateResponsePrivate(this), parent)
{
    setRequest(new RequestCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RequestCertificateRequest * RequestCertificateResponse::request() const
{
    Q_D(const RequestCertificateResponse);
    return static_cast<const RequestCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm RequestCertificate \a response.
 */
void RequestCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RequestCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::RequestCertificateResponsePrivate
 * \brief The RequestCertificateResponsePrivate class provides private implementation for RequestCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a RequestCertificateResponsePrivate object with public implementation \a q.
 */
RequestCertificateResponsePrivate::RequestCertificateResponsePrivate(
    RequestCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm RequestCertificate response element from \a xml.
 */
void RequestCertificateResponsePrivate::parseRequestCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
