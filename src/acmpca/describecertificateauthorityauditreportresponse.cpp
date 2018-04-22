/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecertificateauthorityauditreportresponse.h"
#include "describecertificateauthorityauditreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::DescribeCertificateAuthorityAuditReportResponse
 * \brief The DescribeCertificateAuthorityAuditReportResponse class provides an interace for ACMPCA DescribeCertificateAuthorityAuditReport responses.
 *
 * \inmodule QtAwsACMPCA
 *
 *  You can use the ACM PCA API to create a private certificate authority (CA). You must first call the
 *  <a>CreateCertificateAuthority</a> function. If successful, the function returns an Amazon Resource Name (ARN) for your
 *  private CA. Use this ARN as input to the <a>GetCertificateAuthorityCsr</a> function to retrieve the certificate signing
 *  request (CSR) for your private CA certificate. Sign the CSR using the root or an intermediate CA in your on-premises PKI
 *  hierarchy, and call the <a>ImportCertificateAuthorityCertificate</a> to import your signed private CA certificate into
 *  ACM PCA.
 * 
 *  </p
 * 
 *  Use your private CA to issue and revoke certificates. These are private certificates that identify and secure client
 *  computers, servers, applications, services, devices, and users over SSLS/TLS connections within your organization. Call
 *  the <a>IssueCertificate</a> function to issue a certificate. Call the <a>RevokeCertificate</a> function to revoke a
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
 *  <a>CreateCertificateAuthority</a> function. ACM PCA writes the CRL to an S3 bucket that you specify. You must specify a
 *  bucket policy that grants ACM PCA write permission.
 * 
 *  </p
 * 
 *  You can also call the <a>CreateCertificateAuthorityAuditReport</a> to create an optional audit report that lists every
 *  time the CA private key is used. The private key is used for signing when the <b>IssueCertificate</b> or
 *  <b>RevokeCertificate</b> function is called.
 *
 * \sa AcmpcaClient::describeCertificateAuthorityAuditReport
 */

/*!
 * Constructs a DescribeCertificateAuthorityAuditReportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCertificateAuthorityAuditReportResponse::DescribeCertificateAuthorityAuditReportResponse(
        const DescribeCertificateAuthorityAuditReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmpcaResponse(new DescribeCertificateAuthorityAuditReportResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificateAuthorityAuditReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCertificateAuthorityAuditReportRequest * DescribeCertificateAuthorityAuditReportResponse::request() const
{
    Q_D(const DescribeCertificateAuthorityAuditReportResponse);
    return static_cast<const DescribeCertificateAuthorityAuditReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACMPCA DescribeCertificateAuthorityAuditReport \a response.
 */
void DescribeCertificateAuthorityAuditReportResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCertificateAuthorityAuditReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACMPCA::DescribeCertificateAuthorityAuditReportResponsePrivate
 * \brief The DescribeCertificateAuthorityAuditReportResponsePrivate class provides private implementation for DescribeCertificateAuthorityAuditReportResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a DescribeCertificateAuthorityAuditReportResponsePrivate object with public implementation \a q.
 */
DescribeCertificateAuthorityAuditReportResponsePrivate::DescribeCertificateAuthorityAuditReportResponsePrivate(
    DescribeCertificateAuthorityAuditReportResponse * const q) : AcmpcaResponsePrivate(q)
{

}

/*!
 * Parses a ACMPCA DescribeCertificateAuthorityAuditReport response element from \a xml.
 */
void DescribeCertificateAuthorityAuditReportResponsePrivate::parseDescribeCertificateAuthorityAuditReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificateAuthorityAuditReportResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
