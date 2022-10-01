// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTORYSERVICEREQUEST_H
#define QTAWS_DIRECTORYSERVICEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdirectoryserviceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DirectoryService {

class DirectoryServiceRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DirectoryServiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DirectoryService.
    enum Action {
        AcceptSharedDirectoryAction,
        AddIpRoutesAction,
        AddRegionAction,
        AddTagsToResourceAction,
        CancelSchemaExtensionAction,
        ConnectDirectoryAction,
        CreateAliasAction,
        CreateComputerAction,
        CreateConditionalForwarderAction,
        CreateDirectoryAction,
        CreateLogSubscriptionAction,
        CreateMicrosoftADAction,
        CreateSnapshotAction,
        CreateTrustAction,
        DeleteConditionalForwarderAction,
        DeleteDirectoryAction,
        DeleteLogSubscriptionAction,
        DeleteSnapshotAction,
        DeleteTrustAction,
        DeregisterCertificateAction,
        DeregisterEventTopicAction,
        DescribeCertificateAction,
        DescribeClientAuthenticationSettingsAction,
        DescribeConditionalForwardersAction,
        DescribeDirectoriesAction,
        DescribeDomainControllersAction,
        DescribeEventTopicsAction,
        DescribeLDAPSSettingsAction,
        DescribeRegionsAction,
        DescribeSettingsAction,
        DescribeSharedDirectoriesAction,
        DescribeSnapshotsAction,
        DescribeTrustsAction,
        DisableClientAuthenticationAction,
        DisableLDAPSAction,
        DisableRadiusAction,
        DisableSsoAction,
        EnableClientAuthenticationAction,
        EnableLDAPSAction,
        EnableRadiusAction,
        EnableSsoAction,
        GetDirectoryLimitsAction,
        GetSnapshotLimitsAction,
        ListCertificatesAction,
        ListIpRoutesAction,
        ListLogSubscriptionsAction,
        ListSchemaExtensionsAction,
        ListTagsForResourceAction,
        RegisterCertificateAction,
        RegisterEventTopicAction,
        RejectSharedDirectoryAction,
        RemoveIpRoutesAction,
        RemoveRegionAction,
        RemoveTagsFromResourceAction,
        ResetUserPasswordAction,
        RestoreFromSnapshotAction,
        ShareDirectoryAction,
        StartSchemaExtensionAction,
        UnshareDirectoryAction,
        UpdateConditionalForwarderAction,
        UpdateNumberOfDomainControllersAction,
        UpdateRadiusAction,
        UpdateSettingsAction,
        UpdateTrustAction,
        VerifyTrustAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DirectoryServiceRequest(const Action action);
    DirectoryServiceRequest(const DirectoryServiceRequest &other);
    DirectoryServiceRequest &operator=(const DirectoryServiceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DirectoryServiceRequest &other) const;


protected:
    /// @cond internal
    explicit DirectoryServiceRequest(DirectoryServiceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DirectoryServiceRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
