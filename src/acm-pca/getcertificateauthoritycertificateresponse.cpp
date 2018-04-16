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

#include "getcertificateauthoritycertificateresponse.h"
#include "getcertificateauthoritycertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::GetCertificateAuthorityCertificateResponse
 *
 * \brief The GetCertificateAuthorityCertificateResponse class provides an interace for ACMPCA GetCertificateAuthorityCertificate responses.
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
 * \sa ACMPCAClient::getCertificateAuthorityCertificate
 */

/*!
 * @brief  Constructs a new GetCertificateAuthorityCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCertificateAuthorityCertificateResponse::GetCertificateAuthorityCertificateResponse(
        const GetCertificateAuthorityCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new GetCertificateAuthorityCertificateResponsePrivate(this), parent)
{
    setRequest(new GetCertificateAuthorityCertificateRequest(request));
    setReply(reply);
}

const GetCertificateAuthorityCertificateRequest * GetCertificateAuthorityCertificateResponse::request() const
{
    Q_D(const GetCertificateAuthorityCertificateResponse);
    return static_cast<const GetCertificateAuthorityCertificateRequest *>(d->request);
}

/*!
 * @brief  Parse a ACMPCA GetCertificateAuthorityCertificate response.
 *
 * @param  response  Response to parse.
 */
void GetCertificateAuthorityCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCertificateAuthorityCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetCertificateAuthorityCertificateResponsePrivate
 *
 * \brief Private implementation for GetCertificateAuthorityCertificateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCertificateAuthorityCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCertificateAuthorityCertificateResponse instance.
 */
GetCertificateAuthorityCertificateResponsePrivate::GetCertificateAuthorityCertificateResponsePrivate(
    GetCertificateAuthorityCertificateResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ACMPCA GetCertificateAuthorityCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCertificateAuthorityCertificateResponsePrivate::parseGetCertificateAuthorityCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCertificateAuthorityCertificateResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
