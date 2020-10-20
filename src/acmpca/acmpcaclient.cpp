/*
    Copyright 2013-2020 Paul Colby

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

#include "acmpcaclient.h"
#include "acmpcaclient_p.h"

#include "core/awssignaturev4.h"
#include "createcertificateauthorityrequest.h"
#include "createcertificateauthorityresponse.h"
#include "createcertificateauthorityauditreportrequest.h"
#include "createcertificateauthorityauditreportresponse.h"
#include "createpermissionrequest.h"
#include "createpermissionresponse.h"
#include "deletecertificateauthorityrequest.h"
#include "deletecertificateauthorityresponse.h"
#include "deletepermissionrequest.h"
#include "deletepermissionresponse.h"
#include "describecertificateauthorityrequest.h"
#include "describecertificateauthorityresponse.h"
#include "describecertificateauthorityauditreportrequest.h"
#include "describecertificateauthorityauditreportresponse.h"
#include "getcertificaterequest.h"
#include "getcertificateresponse.h"
#include "getcertificateauthoritycertificaterequest.h"
#include "getcertificateauthoritycertificateresponse.h"
#include "getcertificateauthoritycsrrequest.h"
#include "getcertificateauthoritycsrresponse.h"
#include "importcertificateauthoritycertificaterequest.h"
#include "importcertificateauthoritycertificateresponse.h"
#include "issuecertificaterequest.h"
#include "issuecertificateresponse.h"
#include "listcertificateauthoritiesrequest.h"
#include "listcertificateauthoritiesresponse.h"
#include "listpermissionsrequest.h"
#include "listpermissionsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "restorecertificateauthorityrequest.h"
#include "restorecertificateauthorityresponse.h"
#include "revokecertificaterequest.h"
#include "revokecertificateresponse.h"
#include "tagcertificateauthorityrequest.h"
#include "tagcertificateauthorityresponse.h"
#include "untagcertificateauthorityrequest.h"
#include "untagcertificateauthorityresponse.h"
#include "updatecertificateauthorityrequest.h"
#include "updatecertificateauthorityresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ACMPCA
 * \brief Contains classess for accessing AWS Certificate Manager Private Certificate Authority (ACM-PCA).
 *
 * \inmodule QtAwsAcmpca
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::AcmpcaClient
 * \brief The AcmpcaClient class provides access to the AWS Certificate Manager Private Certificate Authority (ACM-PCA) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsACMPCA
 *
 *  This is the <i>ACM Private CA API Reference</i>. It provides descriptions, syntax, and usage examples for each of the
 *  actions and data types involved in creating and managing private certificate authorities (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML response. Alternatively, you can
 *  use one of the AWS SDKs to access an API that's tailored to the programming language or platform that you're using. For
 *  more information, see <a href="https://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note>
 * 
 *  Each ACM Private CA API action has a throttling limit which determines the number of times the action can be called per
 *  second. For more information, see <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API Rate Limits in ACM Private
 *  CA</a> in the ACM Private CA user
 */

/*!
 * \brief Constructs a AcmpcaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AcmpcaClient::AcmpcaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AcmpcaClientPrivate(this), parent)
{
    Q_D(AcmpcaClient);
    d->apiVersion = QStringLiteral("2017-08-22");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("acm-pca");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Certificate Manager Private Certificate Authority");
    d->serviceName = QStringLiteral("acm-pca");
}

/*!
 * \overload AcmpcaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AcmpcaClient::AcmpcaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AcmpcaClientPrivate(this), parent)
{
    Q_D(AcmpcaClient);
    d->apiVersion = QStringLiteral("2017-08-22");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("acm-pca");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Certificate Manager Private Certificate Authority");
    d->serviceName = QStringLiteral("acm-pca");
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * CreateCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a root or subordinate private certificate authority (CA). You must specify the CA configuration, the certificate
 * revocation list (CRL) configuration, the CA type, and an optional idempotency token to avoid accidental creation of
 * multiple CAs. The CA configuration specifies the name of the algorithm and key size to be used to create the CA private
 * key, the type of signing algorithm that the CA uses, and X.500 subject information. The CRL configuration specifies the
 * CRL expiration period in days (the validity period of the CRL), the Amazon S3 bucket that will contain the CRL, and a
 * CNAME alias for the S3 bucket that is included in certificates issued by the CA. If successful, this action returns the
 * Amazon Resource Name (ARN) of the
 */
CreateCertificateAuthorityResponse * AcmpcaClient::createCertificateAuthority(const CreateCertificateAuthorityRequest &request)
{
    return qobject_cast<CreateCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * CreateCertificateAuthorityAuditReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an audit report that lists every time that your CA private key is used. The report is saved in the Amazon S3
 * bucket that you specify on input. The <a>IssueCertificate</a> and <a>RevokeCertificate</a> actions use the private
 */
CreateCertificateAuthorityAuditReportResponse * AcmpcaClient::createCertificateAuthorityAuditReport(const CreateCertificateAuthorityAuditReportRequest &request)
{
    return qobject_cast<CreateCertificateAuthorityAuditReportResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * CreatePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns permissions from a private CA to a designated AWS service. Services are specified by their service principals
 * and can be given permission to create and retrieve certificates on a private CA. Services can also be given permission
 * to list the active permissions that the private CA has granted. For ACM to automatically renew your private CA's
 * certificates, you must assign all possible permissions from the CA to the ACM service
 *
 * principal>
 *
 * At this time, you can only assign permissions to ACM (<code>acm.amazonaws.com</code>). Permissions can be revoked with
 * the <a>DeletePermission</a> action and listed with the <a>ListPermissions</a>
 */
CreatePermissionResponse * AcmpcaClient::createPermission(const CreatePermissionRequest &request)
{
    return qobject_cast<CreatePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * DeleteCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a private certificate authority (CA). You must provide the Amazon Resource Name (ARN) of the private CA that you
 * want to delete. You can find the ARN by calling the <a>ListCertificateAuthorities</a> action.
 *
 * </p <note>
 *
 * Deleting a CA will invalidate other CAs and certificates below it in your CA
 *
 * hierarchy> </note>
 *
 * Before you can delete a CA that you have created and activated, you must disable it. To do this, call the
 * <a>UpdateCertificateAuthority</a> action and set the <b>CertificateAuthorityStatus</b> parameter to
 * <code>DISABLED</code>.
 *
 * </p
 *
 * Additionally, you can delete a CA if you are waiting for it to be created (that is, the status of the CA is
 * <code>CREATING</code>). You can also delete it if the CA has been created but you haven't yet imported the signed
 * certificate into ACM Private CA (that is, the status of the CA is <code>PENDING_CERTIFICATE</code>).
 *
 * </p
 *
 * When you successfully call <a>DeleteCertificateAuthority</a>, the CA's status changes to <code>DELETED</code>. However,
 * the CA won't be permanently deleted until the restoration period has passed. By default, if you do not set the
 * <code>PermanentDeletionTimeInDays</code> parameter, the CA remains restorable for 30 days. You can set the parameter
 * from 7 to 30 days. The <a>DescribeCertificateAuthority</a> action returns the time remaining in the restoration window
 * of a private CA in the <code>DELETED</code> state. To restore an eligible CA, call the
 * <a>RestoreCertificateAuthority</a>
 */
DeleteCertificateAuthorityResponse * AcmpcaClient::deleteCertificateAuthority(const DeleteCertificateAuthorityRequest &request)
{
    return qobject_cast<DeleteCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * DeletePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes permissions that a private CA assigned to a designated AWS service. Permissions can be created with the
 * <a>CreatePermission</a> action and listed with the <a>ListPermissions</a> action.
 */
DeletePermissionResponse * AcmpcaClient::deletePermission(const DeletePermissionRequest &request)
{
    return qobject_cast<DeletePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * DescribeCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about your private certificate authority (CA). You specify the private CA on input by its ARN (Amazon
 * Resource Name). The output contains the status of your CA. This can be any of the following:
 *
 * </p <ul> <li>
 *
 * <code>CREATING</code> - ACM Private CA is creating your private certificate
 *
 * authority> </li> <li>
 *
 * <code>PENDING_CERTIFICATE</code> - The certificate is pending. You must use your ACM Private CA-hosted or on-premises
 * root or subordinate CA to sign your private CA CSR and then import it into PCA.
 *
 * </p </li> <li>
 *
 * <code>ACTIVE</code> - Your private CA is
 *
 * active> </li> <li>
 *
 * <code>DISABLED</code> - Your private CA has been
 *
 * disabled> </li> <li>
 *
 * <code>EXPIRED</code> - Your private CA certificate has
 *
 * expired> </li> <li>
 *
 * <code>FAILED</code> - Your private CA has failed. Your CA can fail because of problems such a network outage or backend
 * AWS failure or other errors. A failed CA can never return to the pending state. You must create a new CA.
 *
 * </p </li> <li>
 *
 * <code>DELETED</code> - Your private CA is within the restoration period, after which it is permanently deleted. The
 * length of time remaining in the CA's restoration period is also included in this action's
 */
DescribeCertificateAuthorityResponse * AcmpcaClient::describeCertificateAuthority(const DescribeCertificateAuthorityRequest &request)
{
    return qobject_cast<DescribeCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * DescribeCertificateAuthorityAuditReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about a specific audit report created by calling the <a>CreateCertificateAuthorityAuditReport</a>
 * action. Audit information is created every time the certificate authority (CA) private key is used. The private key is
 * used when you call the <a>IssueCertificate</a> action or the <a>RevokeCertificate</a> action.
 */
DescribeCertificateAuthorityAuditReportResponse * AcmpcaClient::describeCertificateAuthorityAuditReport(const DescribeCertificateAuthorityAuditReportRequest &request)
{
    return qobject_cast<DescribeCertificateAuthorityAuditReportResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * GetCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a certificate from your private CA. The ARN of the certificate is returned when you call the
 * <a>IssueCertificate</a> action. You must specify both the ARN of your private CA and the ARN of the issued certificate
 * when calling the <b>GetCertificate</b> action. You can retrieve the certificate if it is in the <b>ISSUED</b> state. You
 * can call the <a>CreateCertificateAuthorityAuditReport</a> action to create a report that contains information about all
 * of the certificates issued and revoked by your private CA.
 */
GetCertificateResponse * AcmpcaClient::getCertificate(const GetCertificateRequest &request)
{
    return qobject_cast<GetCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * GetCertificateAuthorityCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the certificate and certificate chain for your private certificate authority (CA). Both the certificate and
 * the chain are base64 PEM-encoded. The chain does not include the CA certificate. Each certificate in the chain signs the
 * one before it.
 */
GetCertificateAuthorityCertificateResponse * AcmpcaClient::getCertificateAuthorityCertificate(const GetCertificateAuthorityCertificateRequest &request)
{
    return qobject_cast<GetCertificateAuthorityCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * GetCertificateAuthorityCsrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the certificate signing request (CSR) for your private certificate authority (CA). The CSR is created when you
 * call the <a>CreateCertificateAuthority</a> action. Sign the CSR with your ACM Private CA-hosted or on-premises root or
 * subordinate CA. Then import the signed certificate back into ACM Private CA by calling the
 * <a>ImportCertificateAuthorityCertificate</a> action. The CSR is returned as a base64 PEM-encoded string.
 */
GetCertificateAuthorityCsrResponse * AcmpcaClient::getCertificateAuthorityCsr(const GetCertificateAuthorityCsrRequest &request)
{
    return qobject_cast<GetCertificateAuthorityCsrResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * ImportCertificateAuthorityCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a signed private CA certificate into ACM Private CA. This action is used when you are using a chain of trust
 * whose root is located outside ACM Private CA. Before you can call this action, the following preparations must in
 *
 * place> <ol> <li>
 *
 * In ACM Private CA, call the <a>CreateCertificateAuthority</a> action to create the private CA that that you plan to back
 * with the imported
 *
 * certificate> </li> <li>
 *
 * Call the <a>GetCertificateAuthorityCsr</a> action to generate a certificate signing request
 *
 * (CSR)> </li> <li>
 *
 * Sign the CSR using a root or intermediate CA hosted either by an on-premises PKI hierarchy or a commercial
 *
 * CA.> </li> <li>
 *
 * Create a certificate chain and copy the signed certificate and the certificate chain to your working
 *
 * directory> </li> </ol>
 *
 * The following requirements apply when you import a CA
 *
 * certificate> <ul> <li>
 *
 * You cannot import a non-self-signed certificate for use as a root
 *
 * CA> </li> <li>
 *
 * You cannot import a self-signed certificate for use as a subordinate
 *
 * CA> </li> <li>
 *
 * Your certificate chain must not include the private CA certificate that you are
 *
 * importing> </li> <li>
 *
 * Your ACM Private CA-hosted or on-premises CA certificate must be the last certificate in your chain. The subordinate
 * certificate, if any, that your root CA signed must be next to last. The subordinate certificate signed by the preceding
 * subordinate CA must come next, and so on until your chain is built.
 *
 * </p </li> <li>
 *
 * The chain must be
 */
ImportCertificateAuthorityCertificateResponse * AcmpcaClient::importCertificateAuthorityCertificate(const ImportCertificateAuthorityCertificateRequest &request)
{
    return qobject_cast<ImportCertificateAuthorityCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * IssueCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uses your private certificate authority (CA) to issue a client certificate. This action returns the Amazon Resource Name
 * (ARN) of the certificate. You can retrieve the certificate by calling the <a>GetCertificate</a> action and specifying
 * the ARN.
 *
 * </p <note>
 *
 * You cannot use the ACM <b>ListCertificateAuthorities</b> action to retrieve the ARNs of the certificates that you issue
 * by using ACM Private
 */
IssueCertificateResponse * AcmpcaClient::issueCertificate(const IssueCertificateRequest &request)
{
    return qobject_cast<IssueCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * ListCertificateAuthoritiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the private certificate authorities that you created by using the <a>CreateCertificateAuthority</a>
 */
ListCertificateAuthoritiesResponse * AcmpcaClient::listCertificateAuthorities(const ListCertificateAuthoritiesRequest &request)
{
    return qobject_cast<ListCertificateAuthoritiesResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * ListPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the permissions, if any, that have been assigned by a private CA. Permissions can be granted with the
 * <a>CreatePermission</a> action and revoked with the <a>DeletePermission</a>
 */
ListPermissionsResponse * AcmpcaClient::listPermissions(const ListPermissionsRequest &request)
{
    return qobject_cast<ListPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags, if any, that are associated with your private CA. Tags are labels that you can use to identify and
 * organize your CAs. Each tag consists of a key and an optional value. Call the <a>TagCertificateAuthority</a> action to
 * add one or more tags to your CA. Call the <a>UntagCertificateAuthority</a> action to remove tags.
 */
ListTagsResponse * AcmpcaClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * RestoreCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a certificate authority (CA) that is in the <code>DELETED</code> state. You can restore a CA during the period
 * that you defined in the <b>PermanentDeletionTimeInDays</b> parameter of the <a>DeleteCertificateAuthority</a> action.
 * Currently, you can specify 7 to 30 days. If you did not specify a <b>PermanentDeletionTimeInDays</b> value, by default
 * you can restore the CA at any time in a 30 day period. You can check the time remaining in the restoration period of a
 * private CA in the <code>DELETED</code> state by calling the <a>DescribeCertificateAuthority</a> or
 * <a>ListCertificateAuthorities</a> actions. The status of a restored CA is set to its pre-deletion status when the
 * <b>RestoreCertificateAuthority</b> action returns. To change its status to <code>ACTIVE</code>, call the
 * <a>UpdateCertificateAuthority</a> action. If the private CA was in the <code>PENDING_CERTIFICATE</code> state at
 * deletion, you must use the <a>ImportCertificateAuthorityCertificate</a> action to import a certificate authority into
 * the private CA before it can be activated. You cannot restore a CA after the restoration period has
 */
RestoreCertificateAuthorityResponse * AcmpcaClient::restoreCertificateAuthority(const RestoreCertificateAuthorityRequest &request)
{
    return qobject_cast<RestoreCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * RevokeCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes a certificate that was issued inside ACM Private CA. If you enable a certificate revocation list (CRL) when you
 * create or update your private CA, information about the revoked certificates will be included in the CRL. ACM Private CA
 * writes the CRL to an S3 bucket that you specify. For more information about revocation, see the <a>CrlConfiguration</a>
 * structure. ACM Private CA also writes revocation information to the audit report. For more information, see
 * <a>CreateCertificateAuthorityAuditReport</a>.
 *
 * </p <note>
 *
 * You cannot revoke a root CA self-signed
 */
RevokeCertificateResponse * AcmpcaClient::revokeCertificate(const RevokeCertificateRequest &request)
{
    return qobject_cast<RevokeCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * TagCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to your private CA. Tags are labels that you can use to identify and organize your AWS resources.
 * Each tag consists of a key and an optional value. You specify the private CA on input by its Amazon Resource Name (ARN).
 * You specify the tag by using a key-value pair. You can apply a tag to just one private CA if you want to identify a
 * specific characteristic of that CA, or you can apply the same tag to multiple private CAs if you want to filter for a
 * common relationship among those CAs. To remove one or more tags, use the <a>UntagCertificateAuthority</a> action. Call
 * the <a>ListTags</a> action to see what tags are associated with your CA.
 */
TagCertificateAuthorityResponse * AcmpcaClient::tagCertificateAuthority(const TagCertificateAuthorityRequest &request)
{
    return qobject_cast<TagCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * UntagCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one or more tags from your private CA. A tag consists of a key-value pair. If you do not specify the value
 * portion of the tag when calling this action, the tag will be removed regardless of value. If you specify a value, the
 * tag is removed only if it is associated with the specified value. To add tags to a private CA, use the
 * <a>TagCertificateAuthority</a>. Call the <a>ListTags</a> action to see what tags are associated with your CA.
 */
UntagCertificateAuthorityResponse * AcmpcaClient::untagCertificateAuthority(const UntagCertificateAuthorityRequest &request)
{
    return qobject_cast<UntagCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmpcaClient service, and returns a pointer to an
 * UpdateCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status or configuration of a private certificate authority (CA). Your private CA must be in the
 * <code>ACTIVE</code> or <code>DISABLED</code> state before you can update it. You can disable a private CA that is in the
 * <code>ACTIVE</code> state or make a CA that is in the <code>DISABLED</code> state active
 */
UpdateCertificateAuthorityResponse * AcmpcaClient::updateCertificateAuthority(const UpdateCertificateAuthorityRequest &request)
{
    return qobject_cast<UpdateCertificateAuthorityResponse *>(send(request));
}

/*!
 * \class QtAws::ACMPCA::AcmpcaClientPrivate
 * \brief The AcmpcaClientPrivate class provides private implementation for AcmpcaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a AcmpcaClientPrivate object with public implementation \a q.
 */
AcmpcaClientPrivate::AcmpcaClientPrivate(AcmpcaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ACMPCA
} // namespace QtAws
