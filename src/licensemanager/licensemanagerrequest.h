// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        CreateLicenseConversionTaskForResourceAction,
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
        GetLicenseConversionTaskAction,
        GetLicenseManagerReportGeneratorAction,
        GetLicenseUsageAction,
        GetServiceSettingsAction,
        ListAssociationsForLicenseConfigurationAction,
        ListDistributedGrantsAction,
        ListFailuresForLicenseConfigurationOperationsAction,
        ListLicenseConfigurationsAction,
        ListLicenseConversionTasksAction,
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
    explicit LicenseManagerRequest(LicenseManagerRequestPrivate * const d);
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
