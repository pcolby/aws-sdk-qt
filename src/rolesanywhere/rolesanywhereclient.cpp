// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rolesanywhereclient.h"
#include "rolesanywhereclient_p.h"

#include "core/awssignaturev4.h"
#include "createprofilerequest.h"
#include "createprofileresponse.h"
#include "createtrustanchorrequest.h"
#include "createtrustanchorresponse.h"
#include "deletecrlrequest.h"
#include "deletecrlresponse.h"
#include "deleteprofilerequest.h"
#include "deleteprofileresponse.h"
#include "deletetrustanchorrequest.h"
#include "deletetrustanchorresponse.h"
#include "disablecrlrequest.h"
#include "disablecrlresponse.h"
#include "disableprofilerequest.h"
#include "disableprofileresponse.h"
#include "disabletrustanchorrequest.h"
#include "disabletrustanchorresponse.h"
#include "enablecrlrequest.h"
#include "enablecrlresponse.h"
#include "enableprofilerequest.h"
#include "enableprofileresponse.h"
#include "enabletrustanchorrequest.h"
#include "enabletrustanchorresponse.h"
#include "getcrlrequest.h"
#include "getcrlresponse.h"
#include "getprofilerequest.h"
#include "getprofileresponse.h"
#include "getsubjectrequest.h"
#include "getsubjectresponse.h"
#include "gettrustanchorrequest.h"
#include "gettrustanchorresponse.h"
#include "importcrlrequest.h"
#include "importcrlresponse.h"
#include "listcrlsrequest.h"
#include "listcrlsresponse.h"
#include "listprofilesrequest.h"
#include "listprofilesresponse.h"
#include "listsubjectsrequest.h"
#include "listsubjectsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtrustanchorsrequest.h"
#include "listtrustanchorsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecrlrequest.h"
#include "updatecrlresponse.h"
#include "updateprofilerequest.h"
#include "updateprofileresponse.h"
#include "updatetrustanchorrequest.h"
#include "updatetrustanchorresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::RolesAnywhere
 * \brief Contains classess for accessing IAM Roles Anywhere.
 *
 * \inmodule QtAwsRolesAnywhere
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::RolesAnywhereClient
 * \brief The RolesAnywhereClient class provides access to the IAM Roles Anywhere service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRolesAnywhere
 *
 *  AWS Identity and Access Management Roles Anywhere provides a secure way for your workloads such as servers, containers,
 *  and applications running outside of AWS to obtain Temporary AWS credentials. Your workloads can use the same IAM
 *  policies and roles that you have configured with native AWS applications to access AWS resources. Using IAM Roles
 *  Anywhere will eliminate the need to manage long term credentials for workloads running outside of
 * 
 *  AWS>
 * 
 *  To use IAM Roles Anywhere customer workloads will need to use X.509 certificates issued by their Certificate Authority
 *  (CA) . The Certificate Authority (CA) needs to be registered with IAM Roles Anywhere as a trust anchor to establish
 *  trust between customer PKI and IAM Roles Anywhere. Customers who do not manage their own PKI system can use AWS
 *  Certificate Manager Private Certificate Authority (ACM PCA) to create a Certificate Authority and use that to establish
 *  trust with IAM Roles
 * 
 *  Anywher>
 * 
 *  This guide describes the IAM rolesanywhere operations that you can call programmatically. For general information about
 *  IAM Roles Anywhere see <a href="https://docs.aws.amazon.com/">https://docs.aws.amazon.com/</a>
 */

/*!
 * \brief Constructs a RolesAnywhereClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RolesAnywhereClient::RolesAnywhereClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RolesAnywhereClientPrivate(this), parent)
{
    Q_D(RolesAnywhereClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("IAM Roles Anywhere");
    d->serviceName = QStringLiteral("rolesanywhere");
}

/*!
 * \overload RolesAnywhereClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RolesAnywhereClient::RolesAnywhereClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RolesAnywhereClientPrivate(this), parent)
{
    Q_D(RolesAnywhereClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("IAM Roles Anywhere");
    d->serviceName = QStringLiteral("rolesanywhere");
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * CreateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a profile. A profile is configuration resource to list the roles that RolesAnywhere service is trusted to
 * assume. In addition, by applying a profile you can intersect permissions with IAM managed
 *
 * policies>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:CreateProfile</code>.
 */
CreateProfileResponse * RolesAnywhereClient::createProfile(const CreateProfileRequest &request)
{
    return qobject_cast<CreateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * CreateTrustAnchorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a trust anchor. You establish trust between IAM Roles Anywhere and your certificate authority (CA) by
 * configuring a trust anchor. A Trust Anchor is defined either as a reference to a AWS Certificate Manager Private
 * Certificate Authority (ACM PCA), or by uploading a Certificate Authority (CA) certificate. Your AWS workloads can
 * authenticate with the trust anchor using certificates issued by the trusted Certificate Authority (CA) in exchange for
 * temporary AWS
 *
 * credentials>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:CreateTrustAnchor</code>.
 */
CreateTrustAnchorResponse * RolesAnywhereClient::createTrustAnchor(const CreateTrustAnchorRequest &request)
{
    return qobject_cast<CreateTrustAnchorResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * DeleteCrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a certificate revocation list
 *
 * (CRL)>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:DeleteCrl</code>.
 */
DeleteCrlResponse * RolesAnywhereClient::deleteCrl(const DeleteCrlRequest &request)
{
    return qobject_cast<DeleteCrlResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * DeleteProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * profile>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:DeleteProfile</code>.
 */
DeleteProfileResponse * RolesAnywhereClient::deleteProfile(const DeleteProfileRequest &request)
{
    return qobject_cast<DeleteProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * DeleteTrustAnchorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a trust
 *
 * anchor>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:DeleteTrustAnchor</code>.
 */
DeleteTrustAnchorResponse * RolesAnywhereClient::deleteTrustAnchor(const DeleteTrustAnchorRequest &request)
{
    return qobject_cast<DeleteTrustAnchorResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * DisableCrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables a certificate revocation list
 *
 * (CRL)>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:DisableCrl</code>.
 */
DisableCrlResponse * RolesAnywhereClient::disableCrl(const DisableCrlRequest &request)
{
    return qobject_cast<DisableCrlResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * DisableProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables a profile. When disabled, <a
 * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a> requests
 * with this profile
 *
 * fail>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:DisableProfile</code>.
 */
DisableProfileResponse * RolesAnywhereClient::disableProfile(const DisableProfileRequest &request)
{
    return qobject_cast<DisableProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * DisableTrustAnchorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables a trust anchor. When disabled, <a
 * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a> requests
 * specifying this trust anchor are
 *
 * unauthorized>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:DisableTrustAnchor</code>.
 */
DisableTrustAnchorResponse * RolesAnywhereClient::disableTrustAnchor(const DisableTrustAnchorRequest &request)
{
    return qobject_cast<DisableTrustAnchorResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * EnableCrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables a certificate revocation list (CRL). When enabled, certificates stored in the CRL are unauthorized to receive
 * session
 *
 * credentials>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:EnableCrl</code>.
 */
EnableCrlResponse * RolesAnywhereClient::enableCrl(const EnableCrlRequest &request)
{
    return qobject_cast<EnableCrlResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * EnableProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the roles in a profile to receive session credentials in <a
 * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>.
 *
 * </p
 *
 * <b>Required permissions: </b> <code>rolesanywhere:EnableProfile</code>.
 */
EnableProfileResponse * RolesAnywhereClient::enableProfile(const EnableProfileRequest &request)
{
    return qobject_cast<EnableProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * EnableTrustAnchorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables a trust anchor. When enabled, certificates in the trust anchor chain are authorized for trust validation.
 *
 * </p
 *
 * <b>Required permissions: </b> <code>rolesanywhere:EnableTrustAnchor</code>.
 */
EnableTrustAnchorResponse * RolesAnywhereClient::enableTrustAnchor(const EnableTrustAnchorRequest &request)
{
    return qobject_cast<EnableTrustAnchorResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * GetCrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a certificate revocation list
 *
 * (CRL)>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:GetCrl</code>.
 */
GetCrlResponse * RolesAnywhereClient::getCrl(const GetCrlRequest &request)
{
    return qobject_cast<GetCrlResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * GetProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 *
 * profile>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:GetProfile</code>.
 */
GetProfileResponse * RolesAnywhereClient::getProfile(const GetProfileRequest &request)
{
    return qobject_cast<GetProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * GetSubjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a Subject. A Subject associates a certificate identity with authentication attempts by CreateSession. The Subject
 * resources stores audit information such as status of the last authentication attempt, the certificate data used in the
 * attempt, and the last time the associated identity attempted authentication.
 *
 * </p
 *
 * <b>Required permissions: </b> <code>rolesanywhere:GetSubject</code>.
 */
GetSubjectResponse * RolesAnywhereClient::getSubject(const GetSubjectRequest &request)
{
    return qobject_cast<GetSubjectResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * GetTrustAnchorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a trust
 *
 * anchor>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:GetTrustAnchor</code>.
 */
GetTrustAnchorResponse * RolesAnywhereClient::getTrustAnchor(const GetTrustAnchorRequest &request)
{
    return qobject_cast<GetTrustAnchorResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * ImportCrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports the certificate revocation list (CRL). CRl is a list of certificates that have been revoked by the issuing
 * certificate Authority (CA). IAM Roles Anywhere validates against the crl list before issuing credentials.
 *
 * </p
 *
 * <b>Required permissions: </b> <code>rolesanywhere:ImportCrl</code>.
 */
ImportCrlResponse * RolesAnywhereClient::importCrl(const ImportCrlRequest &request)
{
    return qobject_cast<ImportCrlResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * ListCrlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Crls in the authenticated account and Amazon Web Services
 *
 * Region>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:ListCrls</code>.
 */
ListCrlsResponse * RolesAnywhereClient::listCrls(const ListCrlsRequest &request)
{
    return qobject_cast<ListCrlsResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * ListProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all profiles in the authenticated account and Amazon Web Services
 *
 * Region>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:ListProfiles</code>.
 */
ListProfilesResponse * RolesAnywhereClient::listProfiles(const ListProfilesRequest &request)
{
    return qobject_cast<ListProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * ListSubjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the subjects in the authenticated account and Amazon Web Services
 *
 * Region>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:ListSubjects</code>.
 */
ListSubjectsResponse * RolesAnywhereClient::listSubjects(const ListSubjectsRequest &request)
{
    return qobject_cast<ListSubjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags attached to the
 *
 * resource>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:ListTagsForResource</code>.
 */
ListTagsForResourceResponse * RolesAnywhereClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * ListTrustAnchorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the trust anchors in the authenticated account and Amazon Web Services
 *
 * Region>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:ListTrustAnchors</code>.
 */
ListTrustAnchorsResponse * RolesAnywhereClient::listTrustAnchors(const ListTrustAnchorsRequest &request)
{
    return qobject_cast<ListTrustAnchorsResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches tags to a
 *
 * resource>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:TagResource</code>.
 */
TagResourceResponse * RolesAnywhereClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the
 *
 * resource>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:UntagResource</code>.
 */
UntagResourceResponse * RolesAnywhereClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * UpdateCrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the certificate revocation list (CRL). CRl is a list of certificates that have been revoked by the issuing
 * certificate Authority (CA). IAM Roles Anywhere validates against the crl list before issuing
 *
 * credentials>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:UpdateCrl</code>.
 */
UpdateCrlResponse * RolesAnywhereClient::updateCrl(const UpdateCrlRequest &request)
{
    return qobject_cast<UpdateCrlResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * UpdateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the profile. A profile is configuration resource to list the roles that RolesAnywhere service is trusted to
 * assume. In addition, by applying a profile you can scope-down permissions with IAM managed
 *
 * policies>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:UpdateProfile</code>.
 */
UpdateProfileResponse * RolesAnywhereClient::updateProfile(const UpdateProfileRequest &request)
{
    return qobject_cast<UpdateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the RolesAnywhereClient service, and returns a pointer to an
 * UpdateTrustAnchorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the trust anchor.You establish trust between IAM Roles Anywhere and your certificate authority (CA) by
 * configuring a trust anchor. A Trust Anchor is defined either as a reference to a AWS Certificate Manager Private
 * Certificate Authority (ACM PCA), or by uploading a Certificate Authority (CA) certificate. Your AWS workloads can
 * authenticate with the trust anchor using certificates issued by the trusted Certificate Authority (CA) in exchange for
 * temporary AWS
 *
 * credentials>
 *
 * <b>Required permissions: </b> <code>rolesanywhere:UpdateTrustAnchor</code>.
 */
UpdateTrustAnchorResponse * RolesAnywhereClient::updateTrustAnchor(const UpdateTrustAnchorRequest &request)
{
    return qobject_cast<UpdateTrustAnchorResponse *>(send(request));
}

/*!
 * \class QtAws::RolesAnywhere::RolesAnywhereClientPrivate
 * \brief The RolesAnywhereClientPrivate class provides private implementation for RolesAnywhereClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a RolesAnywhereClientPrivate object with public implementation \a q.
 */
RolesAnywhereClientPrivate::RolesAnywhereClientPrivate(RolesAnywhereClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RolesAnywhere
} // namespace QtAws
