// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "licensemanagerusersubscriptionsclient.h"
#include "licensemanagerusersubscriptionsclient_p.h"

#include "core/awssignaturev4.h"
#include "associateuserrequest.h"
#include "associateuserresponse.h"
#include "deregisteridentityproviderrequest.h"
#include "deregisteridentityproviderresponse.h"
#include "disassociateuserrequest.h"
#include "disassociateuserresponse.h"
#include "listidentityprovidersrequest.h"
#include "listidentityprovidersresponse.h"
#include "listinstancesrequest.h"
#include "listinstancesresponse.h"
#include "listproductsubscriptionsrequest.h"
#include "listproductsubscriptionsresponse.h"
#include "listuserassociationsrequest.h"
#include "listuserassociationsresponse.h"
#include "registeridentityproviderrequest.h"
#include "registeridentityproviderresponse.h"
#include "startproductsubscriptionrequest.h"
#include "startproductsubscriptionresponse.h"
#include "stopproductsubscriptionrequest.h"
#include "stopproductsubscriptionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LicenseManagerUserSubscriptions
 * \brief Contains classess for accessing AWS License Manager User Subscriptions.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClient
 * \brief The LicenseManagerUserSubscriptionsClient class provides access to the AWS License Manager User Subscriptions service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 */

/*!
 * \brief Constructs a LicenseManagerUserSubscriptionsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LicenseManagerUserSubscriptionsClientPrivate(this), parent)
{
    Q_D(LicenseManagerUserSubscriptionsClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS License Manager User Subscriptions");
    d->serviceName = QStringLiteral("license-manager-user-subscriptions");
}

/*!
 * \overload LicenseManagerUserSubscriptionsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LicenseManagerUserSubscriptionsClientPrivate(this), parent)
{
    Q_D(LicenseManagerUserSubscriptionsClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS License Manager User Subscriptions");
    d->serviceName = QStringLiteral("license-manager-user-subscriptions");
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * AssociateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the user to an EC2 instance to utilize user-based
 */
AssociateUserResponse * LicenseManagerUserSubscriptionsClient::associateUser(const AssociateUserRequest &request)
{
    return qobject_cast<AssociateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * DeregisterIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the identity provider from providing user-based
 */
DeregisterIdentityProviderResponse * LicenseManagerUserSubscriptionsClient::deregisterIdentityProvider(const DeregisterIdentityProviderRequest &request)
{
    return qobject_cast<DeregisterIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * DisassociateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the user from an EC2 instance providing user-based
 */
DisassociateUserResponse * LicenseManagerUserSubscriptionsClient::disassociateUser(const DisassociateUserRequest &request)
{
    return qobject_cast<DisassociateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * ListIdentityProvidersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the identity providers for user-based
 */
ListIdentityProvidersResponse * LicenseManagerUserSubscriptionsClient::listIdentityProviders(const ListIdentityProvidersRequest &request)
{
    return qobject_cast<ListIdentityProvidersResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * ListInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the EC2 instances providing user-based
 */
ListInstancesResponse * LicenseManagerUserSubscriptionsClient::listInstances(const ListInstancesRequest &request)
{
    return qobject_cast<ListInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * ListProductSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the user-based subscription products available from an identity
 */
ListProductSubscriptionsResponse * LicenseManagerUserSubscriptionsClient::listProductSubscriptions(const ListProductSubscriptionsRequest &request)
{
    return qobject_cast<ListProductSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * ListUserAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists user associations for an identity
 */
ListUserAssociationsResponse * LicenseManagerUserSubscriptionsClient::listUserAssociations(const ListUserAssociationsRequest &request)
{
    return qobject_cast<ListUserAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * RegisterIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers an identity provider for user-based
 */
RegisterIdentityProviderResponse * LicenseManagerUserSubscriptionsClient::registerIdentityProvider(const RegisterIdentityProviderRequest &request)
{
    return qobject_cast<RegisterIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * StartProductSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a product subscription for a user with the specified identity
 */
StartProductSubscriptionResponse * LicenseManagerUserSubscriptionsClient::startProductSubscription(const StartProductSubscriptionRequest &request)
{
    return qobject_cast<StartProductSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerUserSubscriptionsClient service, and returns a pointer to an
 * StopProductSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a product subscription for a user with the specified identity
 */
StopProductSubscriptionResponse * LicenseManagerUserSubscriptionsClient::stopProductSubscription(const StopProductSubscriptionRequest &request)
{
    return qobject_cast<StopProductSubscriptionResponse *>(send(request));
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientPrivate
 * \brief The LicenseManagerUserSubscriptionsClientPrivate class provides private implementation for LicenseManagerUserSubscriptionsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a LicenseManagerUserSubscriptionsClientPrivate object with public implementation \a q.
 */
LicenseManagerUserSubscriptionsClientPrivate::LicenseManagerUserSubscriptionsClientPrivate(LicenseManagerUserSubscriptionsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
