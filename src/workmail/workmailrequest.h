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

#ifndef QTAWS_WORKMAILREQUEST_H
#define QTAWS_WORKMAILREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsworkmailglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WorkMail {

class WorkMailRequestPrivate;

class QTAWSWORKMAIL_EXPORT WorkMailRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WorkMail.
    enum Action {
        AssociateDelegateToResourceAction,
        AssociateMemberToGroupAction,
        CancelMailboxExportJobAction,
        CreateAliasAction,
        CreateAvailabilityConfigurationAction,
        CreateGroupAction,
        CreateMobileDeviceAccessRuleAction,
        CreateOrganizationAction,
        CreateResourceAction,
        CreateUserAction,
        DeleteAccessControlRuleAction,
        DeleteAliasAction,
        DeleteAvailabilityConfigurationAction,
        DeleteEmailMonitoringConfigurationAction,
        DeleteGroupAction,
        DeleteMailboxPermissionsAction,
        DeleteMobileDeviceAccessOverrideAction,
        DeleteMobileDeviceAccessRuleAction,
        DeleteOrganizationAction,
        DeleteResourceAction,
        DeleteRetentionPolicyAction,
        DeleteUserAction,
        DeregisterFromWorkMailAction,
        DeregisterMailDomainAction,
        DescribeEmailMonitoringConfigurationAction,
        DescribeGroupAction,
        DescribeInboundDmarcSettingsAction,
        DescribeMailboxExportJobAction,
        DescribeOrganizationAction,
        DescribeResourceAction,
        DescribeUserAction,
        DisassociateDelegateFromResourceAction,
        DisassociateMemberFromGroupAction,
        GetAccessControlEffectAction,
        GetDefaultRetentionPolicyAction,
        GetMailDomainAction,
        GetMailboxDetailsAction,
        GetMobileDeviceAccessEffectAction,
        GetMobileDeviceAccessOverrideAction,
        ListAccessControlRulesAction,
        ListAliasesAction,
        ListAvailabilityConfigurationsAction,
        ListGroupMembersAction,
        ListGroupsAction,
        ListMailDomainsAction,
        ListMailboxExportJobsAction,
        ListMailboxPermissionsAction,
        ListMobileDeviceAccessOverridesAction,
        ListMobileDeviceAccessRulesAction,
        ListOrganizationsAction,
        ListResourceDelegatesAction,
        ListResourcesAction,
        ListTagsForResourceAction,
        ListUsersAction,
        PutAccessControlRuleAction,
        PutEmailMonitoringConfigurationAction,
        PutInboundDmarcSettingsAction,
        PutMailboxPermissionsAction,
        PutMobileDeviceAccessOverrideAction,
        PutRetentionPolicyAction,
        RegisterMailDomainAction,
        RegisterToWorkMailAction,
        ResetPasswordAction,
        StartMailboxExportJobAction,
        TagResourceAction,
        TestAvailabilityConfigurationAction,
        UntagResourceAction,
        UpdateAvailabilityConfigurationAction,
        UpdateDefaultMailDomainAction,
        UpdateMailboxQuotaAction,
        UpdateMobileDeviceAccessRuleAction,
        UpdatePrimaryEmailAddressAction,
        UpdateResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WorkMailRequest(const Action action);
    WorkMailRequest(const WorkMailRequest &other);
    WorkMailRequest &operator=(const WorkMailRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WorkMailRequest &other) const;


protected:
    /// @cond internal
    explicit WorkMailRequest(WorkMailRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkMailRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
