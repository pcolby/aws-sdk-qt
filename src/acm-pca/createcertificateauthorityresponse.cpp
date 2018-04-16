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

#include "createcertificateauthorityresponse.h"
#include "createcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::CreateCertificateAuthorityResponse
 *
 * \brief The CreateCertificateAuthorityResponse class provides an interace for ACMPCA CreateCertificateAuthority responses.
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
 * \sa ACMPCAClient::createCertificateAuthority
 */

/*!
 * @brief  Constructs a new CreateCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCertificateAuthorityResponse::CreateCertificateAuthorityResponse(
        const CreateCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new CreateCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new CreateCertificateAuthorityRequest(request));
    setReply(reply);
}

const CreateCertificateAuthorityRequest * CreateCertificateAuthorityResponse::request() const
{
    Q_D(const CreateCertificateAuthorityResponse);
    return static_cast<const CreateCertificateAuthorityRequest *>(d->request);
}

/*!
 * @brief  Parse a ACMPCA CreateCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void CreateCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateCertificateAuthorityResponsePrivate
 *
 * \brief Private implementation for CreateCertificateAuthorityResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCertificateAuthorityResponse instance.
 */
CreateCertificateAuthorityResponsePrivate::CreateCertificateAuthorityResponsePrivate(
    CreateCertificateAuthorityResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ACMPCA CreateCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCertificateAuthorityResponsePrivate::parseCreateCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCertificateAuthorityResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
