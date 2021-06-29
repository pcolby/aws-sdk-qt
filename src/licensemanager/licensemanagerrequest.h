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

#ifndef QTAWS_LICENSEMANAGERREQUEST_H
#define QTAWS_LICENSEMANAGERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslicensemanagerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LicenseManager {

class LicenseManagerRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT LicenseManagerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LicenseManager.
    enum Action {
        AcceptGrantAction,
        CheckInLicenseAction,
        CheckoutBorrowLicenseAction,
        CheckoutLicenseAction,
        CreateGrantAction,
        CreateGrantVersionAction,
        CreateLicenseAction,
        CreateLicenseConfigurationAction,
        CreateLicenseManagerReportGeneratorAction,
        CreateLicenseVersionAction,
        CreateTokenAction,
        DeleteGrantAction,
        DeleteLicenseAction,
        DeleteLicenseConfigurationAction,
        DeleteLicenseManagerReportGeneratorAction,
        DeleteTokenAction,
        ExtendLicenseConsumptionAction,
        GetAccessTokenAction,
        GetGrantAction,
        GetLicenseAction,
        GetLicenseConfigurationAction,
        GetLicenseManagerReportGeneratorAction,
        GetLicenseUsageAction,
        GetServiceSettingsAction,
        ListAssociationsForLicenseConfigurationAction,
        ListDistributedGrantsAction,
        ListFailuresForLicenseConfigurationOperationsAction,
        ListLicenseConfigurationsAction,
        ListLicenseManagerReportGeneratorsAction,
        ListLicenseSpecificationsForResourceAction,
        ListLicenseVersionsAction,
        ListLicensesAction,
        ListReceivedGrantsAction,
        ListReceivedLicensesAction,
        ListResourceInventoryAction,
        ListTagsForResourceAction,
        ListTokensAction,
        ListUsageForLicenseConfigurationAction,
        RejectGrantAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateLicenseConfigurationAction,
        UpdateLicenseManagerReportGeneratorAction,
        UpdateLicenseSpecificationsForResourceAction,
        UpdateServiceSettingsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LicenseManagerRequest(const Action action);
    LicenseManagerRequest(const LicenseManagerRequest &other);
    LicenseManagerRequest &operator=(const LicenseManagerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LicenseManagerRequest &other) const;


protected:
    /// @cond internal
    LicenseManagerRequestPrivate * const d_ptr; ///< Internal d-pointer.
    LicenseManagerRequest(LicenseManagerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LicenseManagerRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
