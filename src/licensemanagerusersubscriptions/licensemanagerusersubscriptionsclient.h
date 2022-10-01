// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSCLIENT_H
#define QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslicensemanagerusersubscriptionsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class LicenseManagerUserSubscriptionsClientPrivate;
class AssociateUserRequest;
class AssociateUserResponse;
class DeregisterIdentityProviderRequest;
class DeregisterIdentityProviderResponse;
class DisassociateUserRequest;
class DisassociateUserResponse;
class ListIdentityProvidersRequest;
class ListIdentityProvidersResponse;
class ListInstancesRequest;
class ListInstancesResponse;
class ListProductSubscriptionsRequest;
class ListProductSubscriptionsResponse;
class ListUserAssociationsRequest;
class ListUserAssociationsResponse;
class RegisterIdentityProviderRequest;
class RegisterIdentityProviderResponse;
class StartProductSubscriptionRequest;
class StartProductSubscriptionResponse;
class StopProductSubscriptionRequest;
class StopProductSubscriptionResponse;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT LicenseManagerUserSubscriptionsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LicenseManagerUserSubscriptionsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LicenseManagerUserSubscriptionsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateUserResponse * associateUser(const AssociateUserRequest &request);
    DeregisterIdentityProviderResponse * deregisterIdentityProvider(const DeregisterIdentityProviderRequest &request);
    DisassociateUserResponse * disassociateUser(const DisassociateUserRequest &request);
    ListIdentityProvidersResponse * listIdentityProviders(const ListIdentityProvidersRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListProductSubscriptionsResponse * listProductSubscriptions(const ListProductSubscriptionsRequest &request);
    ListUserAssociationsResponse * listUserAssociations(const ListUserAssociationsRequest &request);
    RegisterIdentityProviderResponse * registerIdentityProvider(const RegisterIdentityProviderRequest &request);
    StartProductSubscriptionResponse * startProductSubscription(const StartProductSubscriptionRequest &request);
    StopProductSubscriptionResponse * stopProductSubscription(const StopProductSubscriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(LicenseManagerUserSubscriptionsClient)
    Q_DISABLE_COPY(LicenseManagerUserSubscriptionsClient)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
