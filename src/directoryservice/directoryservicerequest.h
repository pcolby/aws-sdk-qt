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
        DescribeConditionalForwardersAction,
        DescribeDirectoriesAction,
        DescribeDomainControllersAction,
        DescribeEventTopicsAction,
        DescribeLDAPSSettingsAction,
        DescribeRegionsAction,
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
    DirectoryServiceRequestPrivate * const d_ptr; ///< Internal d-pointer.
    DirectoryServiceRequest(DirectoryServiceRequestPrivate * const d);
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
