/*
    Copyright 2013-2021 Paul Colby

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
