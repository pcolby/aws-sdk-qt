/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listcertificateauthoritiesresponse.h"
#include "listcertificateauthoritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::ListCertificateAuthoritiesResponse
 * \brief The ListCertificateAuthoritiesResponse class provides an interace for ACMPCA ListCertificateAuthorities responses.
 *
 * \inmodule QtAwsACMPCA
 *
 *  You can use the ACM PCA API to create a private certificate authority (CA). You must first call the
 *  <a>CreateCertificateAuthority</a> operation. If successful, the operation returns an Amazon Resource Name (ARN) for your
 *  private CA. Use this ARN as input to the <a>GetCertificateAuthorityCsr</a> operation to retrieve the certificate signing
 *  request (CSR) for your private CA certificate. Sign the CSR using the root or an intermediate CA in your on-premises PKI
 *  hierarchy, and call the <a>ImportCertificateAuthorityCertificate</a> to import your signed private CA certificate into
 *  ACM PCA.
 * 
 *  </p
 * 
 *  Use your private CA to issue and revoke certificates. These are private certificates that identify and secure client
 *  computers, servers, applications, services, devices, and users over SSLS/TLS connections within your organization. Call
 *  the <a>IssueCertificate</a> operation to issue a certificate. Call the <a>RevokeCertificate</a> operation to revoke a
 *  certificate.
 * 
 *  </p <note>
 * 
 *  Certificates issued by your private CA can be trusted only within your organization, not
 * 
 *  publicly> </note>
 * 
 *  Your private CA can optionally create a certificate revocation list (CRL) to track the certificates you revoke. To
 *  create a CRL, you must specify a <a>RevocationConfiguration</a> object when you call the
 *  <a>CreateCertificateAuthority</a> operation. ACM PCA writes the CRL to an S3 bucket that you specify. You must specify a
 *  bucket policy that grants ACM PCA write permission.
 * 
 *  </p
 * 
 *  You can also call the <a>CreateCertificateAuthorityAuditReport</a> to create an optional audit report that lists every
 *  time the CA private key is used. The private key is used for signing when the <b>IssueCertificate</b> or
 *  <b>RevokeCertificate</b> operation is called.
 *
 * \sa AcmpcaClient::listCertificateAuthorities
 */

/*!
 * Constructs a ListCertificateAuthoritiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCertificateAuthoritiesResponse::ListCertificateAuthoritiesResponse(
        const ListCertificateAuthoritiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmpcaResponse(new ListCertificateAuthoritiesResponsePrivate(this), parent)
{
    setRequest(new ListCertificateAuthoritiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCertificateAuthoritiesRequest * ListCertificateAuthoritiesResponse::request() const
{
    Q_D(const ListCertificateAuthoritiesResponse);
    return static_cast<const ListCertificateAuthoritiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACMPCA ListCertificateAuthorities \a response.
 */
void ListCertificateAuthoritiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCertificateAuthoritiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACMPCA::ListCertificateAuthoritiesResponsePrivate
 * \brief The ListCertificateAuthoritiesResponsePrivate class provides private implementation for ListCertificateAuthoritiesResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a ListCertificateAuthoritiesResponsePrivate object with public implementation \a q.
 */
ListCertificateAuthoritiesResponsePrivate::ListCertificateAuthoritiesResponsePrivate(
    ListCertificateAuthoritiesResponse * const q) : AcmpcaResponsePrivate(q)
{

}

/*!
 * Parses a ACMPCA ListCertificateAuthorities response element from \a xml.
 */
void ListCertificateAuthoritiesResponsePrivate::parseListCertificateAuthoritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificateAuthoritiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACMPCA
} // namespace QtAws
