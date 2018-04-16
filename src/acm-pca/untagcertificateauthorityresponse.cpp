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

#include "untagcertificateauthorityresponse.h"
#include "untagcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::UntagCertificateAuthorityResponse
 *
 * \brief The UntagCertificateAuthorityResponse class provides an interace for ACMPCA UntagCertificateAuthority responses.
 *
 * \ingroup ACMPCA
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
 * \sa ACMPCAClient::untagCertificateAuthority
 */

/*!
 * @brief  Constructs a new UntagCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagCertificateAuthorityResponse::UntagCertificateAuthorityResponse(
        const UntagCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new UntagCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new UntagCertificateAuthorityRequest(request));
    setReply(reply);
}

const UntagCertificateAuthorityRequest * UntagCertificateAuthorityResponse::request() const
{
    Q_D(const UntagCertificateAuthorityResponse);
    return static_cast<const UntagCertificateAuthorityRequest *>(d->request);
}

/*!
 * @brief  Parse a ACMPCA UntagCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void UntagCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(UntagCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UntagCertificateAuthorityResponsePrivate
 *
 * \brief Private implementation for UntagCertificateAuthorityResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UntagCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagCertificateAuthorityResponse instance.
 */
UntagCertificateAuthorityResponsePrivate::UntagCertificateAuthorityResponsePrivate(
    UntagCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ACMPCA UntagCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagCertificateAuthorityResponsePrivate::parseUntagCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
