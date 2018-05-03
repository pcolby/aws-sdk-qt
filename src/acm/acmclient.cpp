/*
    Copyright 2013-2018 Paul Colby

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

#include "acmclient.h"
#include "acmclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstocertificaterequest.h"
#include "addtagstocertificateresponse.h"
#include "deletecertificaterequest.h"
#include "deletecertificateresponse.h"
#include "describecertificaterequest.h"
#include "describecertificateresponse.h"
#include "exportcertificaterequest.h"
#include "exportcertificateresponse.h"
#include "getcertificaterequest.h"
#include "getcertificateresponse.h"
#include "importcertificaterequest.h"
#include "importcertificateresponse.h"
#include "listcertificatesrequest.h"
#include "listcertificatesresponse.h"
#include "listtagsforcertificaterequest.h"
#include "listtagsforcertificateresponse.h"
#include "removetagsfromcertificaterequest.h"
#include "removetagsfromcertificateresponse.h"
#include "requestcertificaterequest.h"
#include "requestcertificateresponse.h"
#include "resendvalidationemailrequest.h"
#include "resendvalidationemailresponse.h"
#include "updatecertificateoptionsrequest.h"
#include "updatecertificateoptionsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ACM
 * \brief Contains classess for accessing AWS Certificate Manager (ACM).
 *
 * \inmodule QtAwsAcm
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::AcmClient
 * \brief The AcmClient class provides access to the AWS Certificate Manager (ACM) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 *  Guide</i>
 */

/*!
 * \brief Constructs a AcmClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AcmClient::AcmClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AcmClientPrivate(this), parent)
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

/*!
 * \overload AcmClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AcmClient::AcmClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AcmClientPrivate(this), parent)
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

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * AddTagsToCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an ACM certificate. Tags are labels that you can use to identify and organize your AWS
 * resources. Each tag consists of a <code>key</code> and an optional <code>value</code>. You specify the certificate on
 * input by its Amazon Resource Name (ARN). You specify the tag by using a key-value pair.
 *
 * </p
 *
 * You can apply a tag to just one certificate if you want to identify a specific characteristic of that certificate, or
 * you can apply the same tag to multiple certificates if you want to filter for a common relationship among those
 * certificates. Similarly, you can apply the same tag to multiple resources if you want to specify a relationship among
 * those resources. For example, you can add the same tag to an ACM certificate and an Elastic Load Balancing load balancer
 * to indicate that they are both used by the same website. For more information, see <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/tags.html">Tagging ACM certificates</a>.
 *
 * </p
 *
 * To remove one or more tags, use the <a>RemoveTagsFromCertificate</a> action. To view all of the tags that have been
 * applied to the certificate, use the <a>ListTagsForCertificate</a> action.
 */
AddTagsToCertificateResponse * AcmClient::addTagsToCertificate(const AddTagsToCertificateRequest &request)
{
    return qobject_cast<AddTagsToCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * DeleteCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a certificate and its associated private key. If this action succeeds, the certificate no longer appears in the
 * list that can be displayed by calling the <a>ListCertificates</a> action or be retrieved by calling the
 * <a>GetCertificate</a> action. The certificate will not be available for use by AWS services integrated with ACM.
 *
 * </p <note>
 *
 * You cannot delete an ACM certificate that is being used by another AWS service. To delete a certificate that is in use,
 * the certificate association must first be
 */
DeleteCertificateResponse * AcmClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * DescribeCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed metadata about the specified ACM
 */
DescribeCertificateResponse * AcmClient::describeCertificate(const DescribeCertificateRequest &request)
{
    return qobject_cast<DescribeCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * ExportCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a private certificate issued by a private certificate authority (CA) for use anywhere. You can export the
 * certificate, the certificate chain, and the encrypted private key associated with the public key embedded in the
 * certificate. You must store the private key securely. The private key is a 2048 bit RSA key. You must provide a
 * passphrase for the private key when exporting it. You can use the following OpenSSL command to decrypt it later. Provide
 * the passphrase when prompted.
 *
 * </p
 *
 * <code>openssl rsa -in encrypted_key.pem -out decrypted_key.pem</code>
 */
ExportCertificateResponse * AcmClient::exportCertificate(const ExportCertificateRequest &request)
{
    return qobject_cast<ExportCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * GetCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a certificate specified by an ARN and its certificate chain . The chain is an ordered list of certificates
 * that contains the end entity certificate, intermediate certificates of subordinate CAs, and the root certificate in that
 * order. The certificate and certificate chain are base64 encoded. If you want to decode the certificate to see the
 * individual fields, you can use
 */
GetCertificateResponse * AcmClient::getCertificate(const GetCertificateRequest &request)
{
    return qobject_cast<GetCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * ImportCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * When you import a certificate by using the CLI, you must specify the certificate, the certificate chain, and the private
 * key by their file names preceded by <code>file://</code>. For example, you can specify a certificate saved in the
 * <code>C:\temp</code> folder as <code>file://C:\temp\certificate_to_import.pem</code>. If you are making an HTTP or HTTPS
 * Query request, include these arguments as BLOBs.
 *
 * </p </li> <li>
 *
 * When you import a certificate by using an SDK, you must specify the certificate, the certificate chain, and the private
 * key files in the manner required by the programming language you're using.
 *
 * </p </li> </ul>
 *
 * This operation returns the <a href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
 * Resource Name (ARN)</a> of the imported
 */
ImportCertificateResponse * AcmClient::importCertificate(const ImportCertificateRequest &request)
{
    return qobject_cast<ImportCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * ListCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of certificate ARNs and domain names. You can request that only certificates that match a specific
 * status be listed. You can also filter by specific attributes of the certificate.
 */
ListCertificatesResponse * AcmClient::listCertificates(const ListCertificatesRequest &request)
{
    return qobject_cast<ListCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * ListTagsForCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that have been applied to the ACM certificate. Use the certificate's Amazon Resource Name (ARN) to
 * specify the certificate. To add a tag to an ACM certificate, use the <a>AddTagsToCertificate</a> action. To delete a
 * tag, use the <a>RemoveTagsFromCertificate</a> action.
 */
ListTagsForCertificateResponse * AcmClient::listTagsForCertificate(const ListTagsForCertificateRequest &request)
{
    return qobject_cast<ListTagsForCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * RemoveTagsFromCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one or more tags from an ACM certificate. A tag consists of a key-value pair. If you do not specify the value
 * portion of the tag when calling this function, the tag will be removed regardless of value. If you specify a value, the
 * tag is removed only if it is associated with the specified value.
 *
 * </p
 *
 * To add tags to a certificate, use the <a>AddTagsToCertificate</a> action. To view all of the tags that have been applied
 * to a specific ACM certificate, use the <a>ListTagsForCertificate</a> action.
 */
RemoveTagsFromCertificateResponse * AcmClient::removeTagsFromCertificate(const RemoveTagsFromCertificateRequest &request)
{
    return qobject_cast<RemoveTagsFromCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * RequestCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests an ACM certificate for use with other AWS services. To request an ACM certificate, you must specify a fully
 * qualified domain name (FQDN) in the <code>DomainName</code> parameter. You can also specify additional FQDNs in the
 * <code>SubjectAlternativeNames</code> parameter.
 *
 * </p
 *
 * If you are requesting a private certificate, domain validation is not required. If you are requesting a public
 * certificate, each domain name that you specify must be validated to verify that you own or control the domain. You can
 * use <a href="http://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">DNS validation</a> or <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">email validation</a>. We recommend
 * that you use DNS validation. ACM issues public certificates after receiving approval from the domain owner.
 */
RequestCertificateResponse * AcmClient::requestCertificate(const RequestCertificateRequest &request)
{
    return qobject_cast<RequestCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * ResendValidationEmailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resends the email that requests domain ownership validation. The domain owner or an authorized representative must
 * approve the ACM certificate before it can be issued. The certificate can be approved by clicking a link in the mail to
 * navigate to the Amazon certificate approval website and then clicking <b>I Approve</b>. However, the validation email
 * can be blocked by spam filters. Therefore, if you do not receive the original mail, you can request that the mail be
 * resent within 72 hours of requesting the ACM certificate. If more than 72 hours have elapsed since your original request
 * or since your last attempt to resend validation mail, you must request a new certificate. For more information about
 * setting up your contact email addresses, see <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/setup-email.html">Configure Email for your Domain</a>.
 */
ResendValidationEmailResponse * AcmClient::resendValidationEmail(const ResendValidationEmailRequest &request)
{
    return qobject_cast<ResendValidationEmailResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmClient service, and returns a pointer to an
 * UpdateCertificateOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a certificate. Currently, you can use this function to specify whether to opt in to or out of recording your
 * certificate in a certificate transparency log. For more information, see <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency"> Opting Out of
 * Certificate Transparency Logging</a>.
 */
UpdateCertificateOptionsResponse * AcmClient::updateCertificateOptions(const UpdateCertificateOptionsRequest &request)
{
    return qobject_cast<UpdateCertificateOptionsResponse *>(send(request));
}

/*!
 * \class QtAws::ACM::AcmClientPrivate
 * \brief The AcmClientPrivate class provides private implementation for AcmClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a AcmClientPrivate object with public implementation \a q.
 */
AcmClientPrivate::AcmClientPrivate(AcmClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ACM
} // namespace QtAws
