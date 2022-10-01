// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
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
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
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
#include "putpolicyrequest.h"
#include "putpolicyresponse.h"
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
 * \namespace QtAws::AcmPca
 * \brief Contains classess for accessing AWS Certificate Manager Private Certificate Authority.
 *
 * \inmodule QtAwsAcmPca
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::AcmPcaClient
 * \brief The AcmPcaClient class provides access to the AWS Certificate Manager Private Certificate Authority service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAcmPca
 *
 *  This is the <i>Certificate Manager Private Certificate Authority (PCA) API Reference</i>. It provides descriptions,
 *  syntax, and usage examples for each of the actions and data types involved in creating and managing a private
 *  certificate authority (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the API request parameters and the JSON response. Alternatively, you can use one
 *  of the Amazon Web Services SDKs to access an API that is tailored to the programming language or platform that you
 *  prefer. For more information, see <a href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  Each ACM Private CA API operation has a quota that determines the number of times the operation can be called per
 *  second. ACM Private CA throttles API requests at different rates depending on the operation. Throttling means that ACM
 *  Private CA rejects an otherwise valid request because the request exceeds the operation's quota for the number of
 *  requests per second. When a request is throttled, ACM Private CA returns a <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/CommonErrors.html">ThrottlingException</a> error. ACM
 *  Private CA does not guarantee a minimum request rate for APIs.
 * 
 *  </p
 * 
 *  To see an up-to-date list of your ACM Private CA quotas, or to request a quota increase, log into your Amazon Web
 *  Services account and visit the <a href="https://console.aws.amazon.com/servicequotas/">Service Quotas</a>
 */

/*!
 * \brief Constructs a AcmPcaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AcmPcaClient::AcmPcaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AcmPcaClientPrivate(this), parent)
{
    Q_D(AcmPcaClient);
    d->apiVersion = QStringLiteral("2017-08-22");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("acm-pca");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Certificate Manager Private Certificate Authority");
    d->serviceName = QStringLiteral("acm-pca");
}

/*!
 * \overload AcmPcaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AcmPcaClient::AcmPcaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AcmPcaClientPrivate(this), parent)
{
    Q_D(AcmPcaClient);
    d->apiVersion = QStringLiteral("2017-08-22");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("acm-pca");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Certificate Manager Private Certificate Authority");
    d->serviceName = QStringLiteral("acm-pca");
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * CreateCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a root or subordinate private certificate authority (CA). You must specify the CA configuration, an optional
 * configuration for Online Certificate Status Protocol (OCSP) and/or a certificate revocation list (CRL), the CA type, and
 * an optional idempotency token to avoid accidental creation of multiple CAs. The CA configuration specifies the name of
 * the algorithm and key size to be used to create the CA private key, the type of signing algorithm that the CA uses, and
 * X.500 subject information. The OCSP configuration can optionally specify a custom URL for the OCSP responder. The CRL
 * configuration specifies the CRL expiration period in days (the validity period of the CRL), the Amazon S3 bucket that
 * will contain the CRL, and a CNAME alias for the S3 bucket that is included in certificates issued by the CA. If
 * successful, this action returns the Amazon Resource Name (ARN) of the
 *
 * CA>
 *
 * ACM Private CA assets that are stored in Amazon S3 can be protected with encryption. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaCreateCa.html#crl-encryption">Encrypting Your
 *
 * CRLs</a>> <note>
 *
 * Both PCA and the IAM principal must have permission to write to the S3 bucket that you specify. If the IAM principal
 * making the call does not have permission to write to the bucket, then an exception is thrown. For more information, see
 * <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access policies for CRLs in
 * Amazon
 */
CreateCertificateAuthorityResponse * AcmPcaClient::createCertificateAuthority(const CreateCertificateAuthorityRequest &request)
{
    return qobject_cast<CreateCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * CreateCertificateAuthorityAuditReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an audit report that lists every time that your CA private key is used. The report is saved in the Amazon S3
 * bucket that you specify on input. The <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_IssueCertificate.html">IssueCertificate</a> and <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_RevokeCertificate.html">RevokeCertificate</a> actions
 * use the private key.
 *
 * </p <note>
 *
 * Both PCA and the IAM principal must have permission to write to the S3 bucket that you specify. If the IAM principal
 * making the call does not have permission to write to the bucket, then an exception is thrown. For more information, see
 * <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access policies for CRLs in
 * Amazon
 *
 * S3</a>> </note>
 *
 * ACM Private CA assets that are stored in Amazon S3 can be protected with encryption. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaAuditReport.html#audit-report-encryption">Encrypting Your
 * Audit
 *
 * Reports</a>> <note>
 *
 * You can generate a maximum of one report every 30
 */
CreateCertificateAuthorityAuditReportResponse * AcmPcaClient::createCertificateAuthorityAuditReport(const CreateCertificateAuthorityAuditReportRequest &request)
{
    return qobject_cast<CreateCertificateAuthorityAuditReportResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * CreatePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants one or more permissions on a private CA to the Certificate Manager (ACM) service principal
 * (<code>acm.amazonaws.com</code>). These permissions allow ACM to issue and renew ACM certificates that reside in the
 * same Amazon Web Services account as the
 *
 * CA>
 *
 * You can list current permissions with the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListPermissions.html">ListPermissions</a> action and
 * revoke them with the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePermission.html">DeletePermission</a>
 *
 * action> <p class="title"> <b>About Permissions</b>
 *
 * </p <ul> <li>
 *
 * If the private CA and the certificates it issues reside in the same account, you can use <code>CreatePermission</code>
 * to grant permissions for ACM to carry out automatic certificate
 *
 * renewals> </li> <li>
 *
 * For automatic certificate renewal to succeed, the ACM service principal needs permissions to create, retrieve, and list
 *
 * certificates> </li> <li>
 *
 * If the private CA and the ACM certificates reside in different accounts, then permissions cannot be used to enable
 * automatic renewals. Instead, the ACM certificate owner must set up a resource-based policy to enable cross-account
 * issuance and renewals. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a Resource Based Policy with ACM Private
 */
CreatePermissionResponse * AcmPcaClient::createPermission(const CreatePermissionRequest &request)
{
    return qobject_cast<CreatePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * DeleteCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a private certificate authority (CA). You must provide the Amazon Resource Name (ARN) of the private CA that you
 * want to delete. You can find the ARN by calling the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
 * action.
 *
 * </p <note>
 *
 * Deleting a CA will invalidate other CAs and certificates below it in your CA
 *
 * hierarchy> </note>
 *
 * Before you can delete a CA that you have created and activated, you must disable it. To do this, call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
 * action and set the <b>CertificateAuthorityStatus</b> parameter to <code>DISABLED</code>.
 *
 * </p
 *
 * Additionally, you can delete a CA if you are waiting for it to be created (that is, the status of the CA is
 * <code>CREATING</code>). You can also delete it if the CA has been created but you haven't yet imported the signed
 * certificate into ACM Private CA (that is, the status of the CA is <code>PENDING_CERTIFICATE</code>).
 *
 * </p
 *
 * When you successfully call <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeleteCertificateAuthority.html">DeleteCertificateAuthority</a>,
 * the CA's status changes to <code>DELETED</code>. However, the CA won't be permanently deleted until the restoration
 * period has passed. By default, if you do not set the <code>PermanentDeletionTimeInDays</code> parameter, the CA remains
 * restorable for 30 days. You can set the parameter from 7 to 30 days. The <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DescribeCertificateAuthority.html">DescribeCertificateAuthority</a>
 * action returns the time remaining in the restoration window of a private CA in the <code>DELETED</code> state. To
 * restore an eligible CA, call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_RestoreCertificateAuthority.html">RestoreCertificateAuthority</a>
 */
DeleteCertificateAuthorityResponse * AcmPcaClient::deleteCertificateAuthority(const DeleteCertificateAuthorityRequest &request)
{
    return qobject_cast<DeleteCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * DeletePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes permissions on a private CA granted to the Certificate Manager (ACM) service principal (acm.amazonaws.com).
 *
 * </p
 *
 * These permissions allow ACM to issue and renew ACM certificates that reside in the same Amazon Web Services account as
 * the CA. If you revoke these permissions, ACM will no longer renew the affected certificates
 *
 * automatically>
 *
 * Permissions can be granted with the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreatePermission.html">CreatePermission</a> action and
 * listed with the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListPermissions.html">ListPermissions</a> action.
 *
 * </p <p class="title"> <b>About Permissions</b>
 *
 * </p <ul> <li>
 *
 * If the private CA and the certificates it issues reside in the same account, you can use <code>CreatePermission</code>
 * to grant permissions for ACM to carry out automatic certificate
 *
 * renewals> </li> <li>
 *
 * For automatic certificate renewal to succeed, the ACM service principal needs permissions to create, retrieve, and list
 *
 * certificates> </li> <li>
 *
 * If the private CA and the ACM certificates reside in different accounts, then permissions cannot be used to enable
 * automatic renewals. Instead, the ACM certificate owner must set up a resource-based policy to enable cross-account
 * issuance and renewals. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a Resource Based Policy with ACM Private
 */
DeletePermissionResponse * AcmPcaClient::deletePermission(const DeletePermissionRequest &request)
{
    return qobject_cast<DeletePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * DeletePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource-based policy attached to a private CA. Deletion will remove any access that the policy has granted.
 * If there is no policy attached to the private CA, this action will return
 *
 * successful>
 *
 * If you delete a policy that was applied through Amazon Web Services Resource Access Manager (RAM), the CA will be
 * removed from all shares in which it was included.
 *
 * </p
 *
 * The Certificate Manager Service Linked Role that the policy supports is not affected when you delete the policy.
 *
 * </p
 *
 * The current policy can be shown with <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetPolicy.html">GetPolicy</a> and updated with <a
 *
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_PutPolicy.html">PutPolicy</a>> <p class="title">
 * <b>About Policies</b>
 *
 * </p <ul> <li>
 *
 * A policy grants access on a private CA to an Amazon Web Services customer account, to Amazon Web Services Organizations,
 * or to an Amazon Web Services Organizations unit. Policies are under the control of a CA administrator. For more
 * information, see <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a Resource Based
 * Policy with ACM Private
 *
 * CA</a>> </li> <li>
 *
 * A policy permits a user of Certificate Manager (ACM) to issue ACM certificates signed by a CA in another
 *
 * account> </li> <li>
 *
 * For ACM to manage automatic renewal of these certificates, the ACM user must configure a Service Linked Role (SLR). The
 * SLR allows the ACM service to assume the identity of the user, subject to confirmation against the ACM Private CA
 * policy. For more information, see <a href="https://docs.aws.amazon.com/acm/latest/userguide/acm-slr.html">Using a
 * Service Linked Role with
 *
 * ACM</a>> </li> <li>
 *
 * Updates made in Amazon Web Services Resource Manager (RAM) are reflected in policies. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach a Policy for Cross-Account
 */
DeletePolicyResponse * AcmPcaClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * DescribeCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about your private certificate authority (CA) or one that has been shared with you. You specify the
 * private CA on input by its ARN (Amazon Resource Name). The output contains the status of your CA. This can be any of the
 * following:
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
 * <code>FAILED</code> - Your private CA has failed. Your CA can fail because of problems such a network outage or back-end
 * Amazon Web Services failure or other errors. A failed CA can never return to the pending state. You must create a new
 * CA.
 *
 * </p </li> <li>
 *
 * <code>DELETED</code> - Your private CA is within the restoration period, after which it is permanently deleted. The
 * length of time remaining in the CA's restoration period is also included in this action's
 */
DescribeCertificateAuthorityResponse * AcmPcaClient::describeCertificateAuthority(const DescribeCertificateAuthorityRequest &request)
{
    return qobject_cast<DescribeCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * DescribeCertificateAuthorityAuditReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about a specific audit report created by calling the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthorityAuditReport.html">CreateCertificateAuthorityAuditReport</a>
 * action. Audit information is created every time the certificate authority (CA) private key is used. The private key is
 * used when you call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_IssueCertificate.html">IssueCertificate</a> action or
 * the <a href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_RevokeCertificate.html">RevokeCertificate</a>
 * action.
 */
DescribeCertificateAuthorityAuditReportResponse * AcmPcaClient::describeCertificateAuthorityAuditReport(const DescribeCertificateAuthorityAuditReportRequest &request)
{
    return qobject_cast<DescribeCertificateAuthorityAuditReportResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * GetCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a certificate from your private CA or one that has been shared with you. The ARN of the certificate is
 * returned when you call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_IssueCertificate.html">IssueCertificate</a> action.
 * You must specify both the ARN of your private CA and the ARN of the issued certificate when calling the
 * <b>GetCertificate</b> action. You can retrieve the certificate if it is in the <b>ISSUED</b> state. You can call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthorityAuditReport.html">CreateCertificateAuthorityAuditReport</a>
 * action to create a report that contains information about all of the certificates issued and revoked by your private CA.
 */
GetCertificateResponse * AcmPcaClient::getCertificate(const GetCertificateRequest &request)
{
    return qobject_cast<GetCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * GetCertificateAuthorityCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the certificate and certificate chain for your private certificate authority (CA) or one that has been shared
 * with you. Both the certificate and the chain are base64 PEM-encoded. The chain does not include the CA certificate. Each
 * certificate in the chain signs the one before it.
 */
GetCertificateAuthorityCertificateResponse * AcmPcaClient::getCertificateAuthorityCertificate(const GetCertificateAuthorityCertificateRequest &request)
{
    return qobject_cast<GetCertificateAuthorityCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * GetCertificateAuthorityCsrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the certificate signing request (CSR) for your private certificate authority (CA). The CSR is created when you
 * call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
 * action. Sign the CSR with your ACM Private CA-hosted or on-premises root or subordinate CA. Then import the signed
 * certificate back into ACM Private CA by calling the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ImportCertificateAuthorityCertificate.html">ImportCertificateAuthorityCertificate</a>
 * action. The CSR is returned as a base64 PEM-encoded string.
 */
GetCertificateAuthorityCsrResponse * AcmPcaClient::getCertificateAuthorityCsr(const GetCertificateAuthorityCsrRequest &request)
{
    return qobject_cast<GetCertificateAuthorityCsrResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * GetPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource-based policy attached to a private CA. If either the private CA resource or the policy cannot be
 * found, this action returns a <code>ResourceNotFoundException</code>.
 *
 * </p
 *
 * The policy can be attached or updated with <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_PutPolicy.html">PutPolicy</a> and removed with <a
 *
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePolicy.html">DeletePolicy</a>> <p class="title">
 * <b>About Policies</b>
 *
 * </p <ul> <li>
 *
 * A policy grants access on a private CA to an Amazon Web Services customer account, to Amazon Web Services Organizations,
 * or to an Amazon Web Services Organizations unit. Policies are under the control of a CA administrator. For more
 * information, see <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a Resource Based
 * Policy with ACM Private
 *
 * CA</a>> </li> <li>
 *
 * A policy permits a user of Certificate Manager (ACM) to issue ACM certificates signed by a CA in another
 *
 * account> </li> <li>
 *
 * For ACM to manage automatic renewal of these certificates, the ACM user must configure a Service Linked Role (SLR). The
 * SLR allows the ACM service to assume the identity of the user, subject to confirmation against the ACM Private CA
 * policy. For more information, see <a href="https://docs.aws.amazon.com/acm/latest/userguide/acm-slr.html">Using a
 * Service Linked Role with
 *
 * ACM</a>> </li> <li>
 *
 * Updates made in Amazon Web Services Resource Manager (RAM) are reflected in policies. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach a Policy for Cross-Account
 */
GetPolicyResponse * AcmPcaClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * ImportCertificateAuthorityCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a signed private CA certificate into ACM Private CA. This action is used when you are using a chain of trust
 * whose root is located outside ACM Private CA. Before you can call this action, the following preparations must in
 *
 * place> <ol> <li>
 *
 * In ACM Private CA, call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
 * action to create the private CA that you plan to back with the imported
 *
 * certificate> </li> <li>
 *
 * Call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetCertificateAuthorityCsr.html">GetCertificateAuthorityCsr</a>
 * action to generate a certificate signing request
 *
 * (CSR)> </li> <li>
 *
 * Sign the CSR using a root or intermediate CA hosted by either an on-premises PKI hierarchy or by a commercial
 *
 * CA> </li> <li>
 *
 * Create a certificate chain and copy the signed certificate and the certificate chain to your working
 *
 * directory> </li> </ol>
 *
 * ACM Private CA supports three scenarios for installing a CA
 *
 * certificate> <ul> <li>
 *
 * Installing a certificate for a root CA hosted by ACM Private
 *
 * CA> </li> <li>
 *
 * Installing a subordinate CA certificate whose parent authority is hosted by ACM Private
 *
 * CA> </li> <li>
 *
 * Installing a subordinate CA certificate whose parent authority is externally
 *
 * hosted> </li> </ul>
 *
 * The following additional requirements apply when you import a CA
 *
 * certificate> <ul> <li>
 *
 * Only a self-signed certificate can be imported as a root
 *
 * CA> </li> <li>
 *
 * A self-signed certificate cannot be imported as a subordinate
 *
 * CA> </li> <li>
 *
 * Your certificate chain must not include the private CA certificate that you are
 *
 * importing> </li> <li>
 *
 * Your root CA must be the last certificate in your chain. The subordinate certificate, if any, that your root CA signed
 * must be next to last. The subordinate certificate signed by the preceding subordinate CA must come next, and so on until
 * your chain is built.
 *
 * </p </li> <li>
 *
 * The chain must be
 *
 * PEM-encoded> </li> <li>
 *
 * The maximum allowed size of a certificate is 32
 *
 * KB> </li> <li>
 *
 * The maximum allowed size of a certificate chain is 2
 *
 * MB> </li> </ul>
 *
 * <i>Enforcement of Critical Constraints</i>
 *
 * </p
 *
 * ACM Private CA allows the following extensions to be marked critical in the imported CA certificate or
 *
 * chain> <ul> <li>
 *
 * Basic constraints (<i>must</i> be marked
 *
 * critical> </li> <li>
 *
 * Subject alternative
 *
 * name> </li> <li>
 *
 * Key
 *
 * usag> </li> <li>
 *
 * Extended key
 *
 * usag> </li> <li>
 *
 * Authority key
 *
 * identifie> </li> <li>
 *
 * Subject key
 *
 * identifie> </li> <li>
 *
 * Issuer alternative
 *
 * nam> </li> <li>
 *
 * Subject directory
 *
 * attribute> </li> <li>
 *
 * Subject information
 *
 * acces> </li> <li>
 *
 * Certificate
 *
 * policie> </li> <li>
 *
 * Policy
 *
 * mapping> </li> <li>
 *
 * Inhibit
 *
 * anyPolic> </li> </ul>
 *
 * ACM Private CA rejects the following extensions when they are marked critical in an imported CA certificate or
 *
 * chain> <ul> <li>
 *
 * Name
 *
 * constraint> </li> <li>
 *
 * Policy
 *
 * constraint> </li> <li>
 *
 * CRL distribution
 *
 * point> </li> <li>
 *
 * Authority information
 *
 * acces> </li> <li>
 *
 * Freshest
 *
 * CR> </li> <li>
 *
 * Any other
 */
ImportCertificateAuthorityCertificateResponse * AcmPcaClient::importCertificateAuthorityCertificate(const ImportCertificateAuthorityCertificateRequest &request)
{
    return qobject_cast<ImportCertificateAuthorityCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * IssueCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uses your private certificate authority (CA), or one that has been shared with you, to issue a client certificate. This
 * action returns the Amazon Resource Name (ARN) of the certificate. You can retrieve the certificate by calling the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetCertificate.html">GetCertificate</a> action and
 * specifying the ARN.
 *
 * </p <note>
 *
 * You cannot use the ACM <b>ListCertificateAuthorities</b> action to retrieve the ARNs of the certificates that you issue
 * by using ACM Private
 */
IssueCertificateResponse * AcmPcaClient::issueCertificate(const IssueCertificateRequest &request)
{
    return qobject_cast<IssueCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * ListCertificateAuthoritiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the private certificate authorities that you created by using the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
 */
ListCertificateAuthoritiesResponse * AcmPcaClient::listCertificateAuthorities(const ListCertificateAuthoritiesRequest &request)
{
    return qobject_cast<ListCertificateAuthoritiesResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * ListPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all permissions on a private CA, if any, granted to the Certificate Manager (ACM) service principal
 * (acm.amazonaws.com).
 *
 * </p
 *
 * These permissions allow ACM to issue and renew ACM certificates that reside in the same Amazon Web Services account as
 * the CA.
 *
 * </p
 *
 * Permissions can be granted with the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreatePermission.html">CreatePermission</a> action and
 * revoked with the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePermission.html">DeletePermission</a>
 *
 * action> <p class="title"> <b>About Permissions</b>
 *
 * </p <ul> <li>
 *
 * If the private CA and the certificates it issues reside in the same account, you can use <code>CreatePermission</code>
 * to grant permissions for ACM to carry out automatic certificate
 *
 * renewals> </li> <li>
 *
 * For automatic certificate renewal to succeed, the ACM service principal needs permissions to create, retrieve, and list
 *
 * certificates> </li> <li>
 *
 * If the private CA and the ACM certificates reside in different accounts, then permissions cannot be used to enable
 * automatic renewals. Instead, the ACM certificate owner must set up a resource-based policy to enable cross-account
 * issuance and renewals. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a Resource Based Policy with ACM Private
 */
ListPermissionsResponse * AcmPcaClient::listPermissions(const ListPermissionsRequest &request)
{
    return qobject_cast<ListPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags, if any, that are associated with your private CA or one that has been shared with you. Tags are labels
 * that you can use to identify and organize your CAs. Each tag consists of a key and an optional value. Call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_TagCertificateAuthority.html">TagCertificateAuthority</a>
 * action to add one or more tags to your CA. Call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UntagCertificateAuthority.html">UntagCertificateAuthority</a>
 * action to remove tags.
 */
ListTagsResponse * AcmPcaClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * PutPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a resource-based policy to a private CA.
 *
 * </p
 *
 * A policy can also be applied by sharing a private CA through Amazon Web Services Resource Access Manager (RAM). For more
 * information, see <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach a Policy for
 * Cross-Account
 *
 * Access</a>>
 *
 * The policy can be displayed with <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetPolicy.html">GetPolicy</a> and removed with <a
 *
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePolicy.html">DeletePolicy</a>> <p class="title">
 * <b>About Policies</b>
 *
 * </p <ul> <li>
 *
 * A policy grants access on a private CA to an Amazon Web Services customer account, to Amazon Web Services Organizations,
 * or to an Amazon Web Services Organizations unit. Policies are under the control of a CA administrator. For more
 * information, see <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a Resource Based
 * Policy with ACM Private
 *
 * CA</a>> </li> <li>
 *
 * A policy permits a user of Certificate Manager (ACM) to issue ACM certificates signed by a CA in another
 *
 * account> </li> <li>
 *
 * For ACM to manage automatic renewal of these certificates, the ACM user must configure a Service Linked Role (SLR). The
 * SLR allows the ACM service to assume the identity of the user, subject to confirmation against the ACM Private CA
 * policy. For more information, see <a href="https://docs.aws.amazon.com/acm/latest/userguide/acm-slr.html">Using a
 * Service Linked Role with
 *
 * ACM</a>> </li> <li>
 *
 * Updates made in Amazon Web Services Resource Manager (RAM) are reflected in policies. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach a Policy for Cross-Account
 */
PutPolicyResponse * AcmPcaClient::putPolicy(const PutPolicyRequest &request)
{
    return qobject_cast<PutPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * RestoreCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a certificate authority (CA) that is in the <code>DELETED</code> state. You can restore a CA during the period
 * that you defined in the <b>PermanentDeletionTimeInDays</b> parameter of the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeleteCertificateAuthority.html">DeleteCertificateAuthority</a>
 * action. Currently, you can specify 7 to 30 days. If you did not specify a <b>PermanentDeletionTimeInDays</b> value, by
 * default you can restore the CA at any time in a 30 day period. You can check the time remaining in the restoration
 * period of a private CA in the <code>DELETED</code> state by calling the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DescribeCertificateAuthority.html">DescribeCertificateAuthority</a>
 * or <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
 * actions. The status of a restored CA is set to its pre-deletion status when the <b>RestoreCertificateAuthority</b>
 * action returns. To change its status to <code>ACTIVE</code>, call the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
 * action. If the private CA was in the <code>PENDING_CERTIFICATE</code> state at deletion, you must use the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ImportCertificateAuthorityCertificate.html">ImportCertificateAuthorityCertificate</a>
 * action to import a certificate authority into the private CA before it can be activated. You cannot restore a CA after
 * the restoration period has
 */
RestoreCertificateAuthorityResponse * AcmPcaClient::restoreCertificateAuthority(const RestoreCertificateAuthorityRequest &request)
{
    return qobject_cast<RestoreCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * RevokeCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes a certificate that was issued inside ACM Private CA. If you enable a certificate revocation list (CRL) when you
 * create or update your private CA, information about the revoked certificates will be included in the CRL. ACM Private CA
 * writes the CRL to an S3 bucket that you specify. A CRL is typically updated approximately 30 minutes after a certificate
 * is revoked. If for any reason the CRL update fails, ACM Private CA attempts makes further attempts every 15 minutes.
 * With Amazon CloudWatch, you can create alarms for the metrics <code>CRLGenerated</code> and
 * <code>MisconfiguredCRLBucket</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaCloudWatch.html">Supported CloudWatch
 *
 * Metrics</a>> <note>
 *
 * Both PCA and the IAM principal must have permission to write to the S3 bucket that you specify. If the IAM principal
 * making the call does not have permission to write to the bucket, then an exception is thrown. For more information, see
 * <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access policies for CRLs in
 * Amazon
 *
 * S3</a>> </note>
 *
 * ACM Private CA also writes revocation information to the audit report. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthorityAuditReport.html">CreateCertificateAuthorityAuditReport</a>>
 * <note>
 *
 * You cannot revoke a root CA self-signed
 */
RevokeCertificateResponse * AcmPcaClient::revokeCertificate(const RevokeCertificateRequest &request)
{
    return qobject_cast<RevokeCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * TagCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to your private CA. Tags are labels that you can use to identify and organize your Amazon Web
 * Services resources. Each tag consists of a key and an optional value. You specify the private CA on input by its Amazon
 * Resource Name (ARN). You specify the tag by using a key-value pair. You can apply a tag to just one private CA if you
 * want to identify a specific characteristic of that CA, or you can apply the same tag to multiple private CAs if you want
 * to filter for a common relationship among those CAs. To remove one or more tags, use the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UntagCertificateAuthority.html">UntagCertificateAuthority</a>
 * action. Call the <a href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListTags.html">ListTags</a> action
 * to see what tags are associated with your CA.
 */
TagCertificateAuthorityResponse * AcmPcaClient::tagCertificateAuthority(const TagCertificateAuthorityRequest &request)
{
    return qobject_cast<TagCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * UntagCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one or more tags from your private CA. A tag consists of a key-value pair. If you do not specify the value
 * portion of the tag when calling this action, the tag will be removed regardless of value. If you specify a value, the
 * tag is removed only if it is associated with the specified value. To add tags to a private CA, use the <a
 * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_TagCertificateAuthority.html">TagCertificateAuthority</a>.
 * Call the <a href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListTags.html">ListTags</a> action to see
 * what tags are associated with your CA.
 */
UntagCertificateAuthorityResponse * AcmPcaClient::untagCertificateAuthority(const UntagCertificateAuthorityRequest &request)
{
    return qobject_cast<UntagCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the AcmPcaClient service, and returns a pointer to an
 * UpdateCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status or configuration of a private certificate authority (CA). Your private CA must be in the
 * <code>ACTIVE</code> or <code>DISABLED</code> state before you can update it. You can disable a private CA that is in the
 * <code>ACTIVE</code> state or make a CA that is in the <code>DISABLED</code> state active
 *
 * again> <note>
 *
 * Both PCA and the IAM principal must have permission to write to the S3 bucket that you specify. If the IAM principal
 * making the call does not have permission to write to the bucket, then an exception is thrown. For more information, see
 * <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access policies for CRLs in
 * Amazon
 */
UpdateCertificateAuthorityResponse * AcmPcaClient::updateCertificateAuthority(const UpdateCertificateAuthorityRequest &request)
{
    return qobject_cast<UpdateCertificateAuthorityResponse *>(send(request));
}

/*!
 * \class QtAws::AcmPca::AcmPcaClientPrivate
 * \brief The AcmPcaClientPrivate class provides private implementation for AcmPcaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a AcmPcaClientPrivate object with public implementation \a q.
 */
AcmPcaClientPrivate::AcmPcaClientPrivate(AcmPcaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AcmPca
} // namespace QtAws
