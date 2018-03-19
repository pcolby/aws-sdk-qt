/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "acmclient.h"
#include "acmclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ACM {

/**
 * @class  AcmClient
 *
 * @brief  Client for AWS Certificate Manager (ACM)
 *
 * <fullname>AWS Certificate Manager</fullname>
 *
 * Welcome to the AWS Certificate Manager (ACM) API
 *
 * documentation>
 *
 * You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 * about using ACM, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 * Guide</i>
 */

/**
 * @brief  Constructs a new AcmClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AcmClient::AcmClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AcmClientPrivate(this), parent)
{
    Q_D(AcmClient);
    d->apiVersion = QStringLiteral("2015-12-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("acm");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Certificate Manager");
    d->serviceName = QStringLiteral("acm");
}

/**
 * @brief  Constructs a new AcmClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
AcmClient::AcmClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AcmClientPrivate(this), parent)
{
    Q_D(AcmClient);
    d->apiVersion = QStringLiteral("2015-12-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("acm");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Certificate Manager");
    d->serviceName = QStringLiteral("acm");
}

/// @todo override getEndpoint() to use acm.

/**
 * Adds one or more tags to an ACM Certificate. Tags are labels that you can use to identify and organize your AWS
 * resources. Each tag consists of a <code>key</code> and an optional <code>value</code>. You specify the certificate on
 * input by its Amazon Resource Name (ARN). You specify the tag by using a key-value pair.
 *
 * </p
 *
 * You can apply a tag to just one certificate if you want to identify a specific characteristic of that certificate, or
 * you can apply the same tag to multiple certificates if you want to filter for a common relationship among those
 * certificates. Similarly, you can apply the same tag to multiple resources if you want to specify a relationship among
 * those resources. For example, you can add the same tag to an ACM Certificate and an Elastic Load Balancing load balancer
 * to indicate that they are both used by the same website. For more information, see <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/tags.html">Tagging ACM Certificates</a>.
 *
 * </p
 *
 * To remove one or more tags, use the <a>RemoveTagsFromCertificate</a> action. To view all of the tags that have been
 * applied to the certificate, use the <a>ListTagsForCertificate</a> action.
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsToCertificateResponse * AcmClient::addTagsToCertificate(const AddTagsToCertificateRequest &request)
{

}

/**
 * Deletes a certificate and its associated private key. If this action succeeds, the certificate no longer appears in the
 * list that can be displayed by calling the <a>ListCertificates</a> action or be retrieved by calling the
 * <a>GetCertificate</a> action. The certificate will not be available for use by AWS services integrated with ACM.
 *
 * </p <note>
 *
 * You cannot delete an ACM Certificate that is being used by another AWS service. To delete a certificate that is in use,
 * the certificate association must first be
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCertificateResponse * AcmClient::deleteCertificate(const DeleteCertificateRequest &request)
{

}

/**
 * Returns detailed metadata about the specified ACM
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCertificateResponse * AcmClient::describeCertificate(const DescribeCertificateRequest &request)
{

}

/**
 * Retrieves a certificate specified by an ARN and its certificate chain . The chain is an ordered list of certificates
 * that contains the end entity certificate, intermediate certificates of subordinate CAs, and the root certificate in that
 * order. The certificate and certificate chain are base64 encoded. If you want to decode the certificate to see the
 * individual fields, you can use
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCertificateResponse * AcmClient::getCertificate(const GetCertificateRequest &request)
{

}

/**
 * Imports a certificate into AWS Certificate Manager (ACM) to use with services that are integrated with ACM. Note that <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-services.html">integrated services</a> allow only certificate
 * types and keys they support to be associated with their resources. Further, their support differs depending on whether
 * the certificate is imported into IAM or into ACM. For more information, see the documentation for each service. For more
 * information about importing certificates into ACM, see <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing Certificates</a> in the <i>AWS
 * Certificate Manager User Guide</i>.
 *
 * </p <note>
 *
 * ACM does not provide <a href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed renewal</a> for
 * certificates that you
 *
 * import> </note>
 *
 * Note the following guidelines when importing third party
 *
 * certificates> <ul> <li>
 *
 * You must enter the private key that matches the certificate you are
 *
 * importing> </li> <li>
 *
 * The private key must be unencrypted. You cannot import a private key that is protected by a password or a
 *
 * passphrase> </li> <li>
 *
 * If the certificate you are importing is not self-signed, you must enter its certificate
 *
 * chain> </li> <li>
 *
 * If a certificate chain is included, the issuer must be the subject of one of the certificates in the
 *
 * chain> </li> <li>
 *
 * The certificate, private key, and certificate chain must be
 *
 * PEM-encoded> </li> <li>
 *
 * The current time must be between the <code>Not Before</code> and <code>Not After</code> certificate
 *
 * fields> </li> <li>
 *
 * The <code>Issuer</code> field must not be
 *
 * empty> </li> <li>
 *
 * The OCSP authority URL, if present, must not exceed 1000
 *
 * characters> </li> <li>
 *
 * To import a new certificate, omit the <code>CertificateArn</code> argument. Include this argument only when you want to
 * replace a previously imported
 *
 * certificate> </li> <li>
 *
 * When you import a certificate by using the CLI or one of the SDKs, you must specify the certificate, the certificate
 * chain, and the private key by their file names preceded by <code>file://</code>. For example, you can specify a
 * certificate saved in the <code>C:\temp</code> folder as <code>file://C:\temp\certificate_to_import.pem</code>. If you
 * are making an HTTP or HTTPS Query request, include these arguments as BLOBs.
 *
 * </p </li> </ul>
 *
 * This operation returns the <a href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
 * Resource Name (ARN)</a> of the imported
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportCertificateResponse * AcmClient::importCertificate(const ImportCertificateRequest &request)
{

}

/**
 * Retrieves a list of certificate ARNs and domain names. You can request that only certificates that match a specific
 * status be listed. You can also filter by specific attributes of the certificate.
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCertificatesResponse * AcmClient::listCertificates(const ListCertificatesRequest &request)
{

}

/**
 * Lists the tags that have been applied to the ACM Certificate. Use the certificate's Amazon Resource Name (ARN) to
 * specify the certificate. To add a tag to an ACM Certificate, use the <a>AddTagsToCertificate</a> action. To delete a
 * tag, use the <a>RemoveTagsFromCertificate</a> action.
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForCertificateResponse * AcmClient::listTagsForCertificate(const ListTagsForCertificateRequest &request)
{

}

/**
 * Remove one or more tags from an ACM Certificate. A tag consists of a key-value pair. If you do not specify the value
 * portion of the tag when calling this function, the tag will be removed regardless of value. If you specify a value, the
 * tag is removed only if it is associated with the specified value.
 *
 * </p
 *
 * To add tags to a certificate, use the <a>AddTagsToCertificate</a> action. To view all of the tags that have been applied
 * to a specific ACM Certificate, use the <a>ListTagsForCertificate</a> action.
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsFromCertificateResponse * AcmClient::removeTagsFromCertificate(const RemoveTagsFromCertificateRequest &request)
{

}

/**
 * Requests an ACM Certificate for use with other AWS services. To request an ACM Certificate, you must specify the fully
 * qualified domain name (FQDN) for your site in the <code>DomainName</code> parameter. You can also specify additional
 * FQDNs in the <code>SubjectAlternativeNames</code> parameter if users can reach your site by using other names.
 *
 * </p
 *
 * For each domain name you specify, email is sent to the domain owner to request approval to issue the certificate. Email
 * is sent to three registered contact addresses in the WHOIS database and to five common system administration addresses
 * formed from the <code>DomainName</code> you enter or the optional <code>ValidationDomain</code> parameter. For more
 * information, see <a href="http://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate.html">Validate Domain
 * Ownership</a>.
 *
 * </p
 *
 * After receiving approval from the domain owner, the ACM Certificate is issued. For more information, see the <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager User Guide</a>.
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RequestCertificateResponse * AcmClient::requestCertificate(const RequestCertificateRequest &request)
{

}

/**
 * Resends the email that requests domain ownership validation. The domain owner or an authorized representative must
 * approve the ACM Certificate before it can be issued. The certificate can be approved by clicking a link in the mail to
 * navigate to the Amazon certificate approval website and then clicking <b>I Approve</b>. However, the validation email
 * can be blocked by spam filters. Therefore, if you do not receive the original mail, you can request that the mail be
 * resent within 72 hours of requesting the ACM Certificate. If more than 72 hours have elapsed since your original request
 * or since your last attempt to resend validation mail, you must request a new certificate. For more information about
 * setting up your contact email addresses, see <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/setup-email.html">Configure Email for your Domain</a>.
 *
 * @param  request Request to send to AWS Certificate Manager.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResendValidationEmailResponse * AcmClient::resendValidationEmail(const ResendValidationEmailRequest &request)
{

}

/**
 * @internal
 *
 * @class  AcmClientPrivate
 *
 * @brief  Private implementation for AcmClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcmClientPrivate object.
 *
 * @param  q  Pointer to this object's public AcmClient instance.
 */
AcmClientPrivate::AcmClientPrivate(AcmClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ACM
} // namespace AWS
