// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOADMINREQUEST_H
#define QTAWS_SSOADMINREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssoadminglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SsoAdmin {

class SsoAdminRequestPrivate;

class QTAWSSSOADMIN_EXPORT SsoAdminRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SsoAdmin.
    enum Action {
        AttachCustomerManagedPolicyReferenceToPermissionSetAction,
        AttachManagedPolicyToPermissionSetAction,
        CreateAccountAssignmentAction,
        CreateInstanceAccessControlAttributeConfigurationAction,
        CreatePermissionSetAction,
        DeleteAccountAssignmentAction,
        DeleteInlinePolicyFromPermissionSetAction,
        DeleteInstanceAccessControlAttributeConfigurationAction,
        DeletePermissionSetAction,
        DeletePermissionsBoundaryFromPermissionSetAction,
        DescribeAccountAssignmentCreationStatusAction,
        DescribeAccountAssignmentDeletionStatusAction,
        DescribeInstanceAccessControlAttributeConfigurationAction,
        DescribePermissionSetAction,
        DescribePermissionSetProvisioningStatusAction,
        DetachCustomerManagedPolicyReferenceFromPermissionSetAction,
        DetachManagedPolicyFromPermissionSetAction,
        GetInlinePolicyForPermissionSetAction,
        GetPermissionsBoundaryForPermissionSetAction,
        ListAccountAssignmentCreationStatusAction,
        ListAccountAssignmentDeletionStatusAction,
        ListAccountAssignmentsAction,
        ListAccountsForProvisionedPermissionSetAction,
        ListCustomerManagedPolicyReferencesInPermissionSetAction,
        ListInstancesAction,
        ListManagedPoliciesInPermissionSetAction,
        ListPermissionSetProvisioningStatusAction,
        ListPermissionSetsAction,
        ListPermissionSetsProvisionedToAccountAction,
        ListTagsForResourceAction,
        ProvisionPermissionSetAction,
        PutInlinePolicyToPermissionSetAction,
        PutPermissionsBoundaryToPermissionSetAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateInstanceAccessControlAttributeConfigurationAction,
        UpdatePermissionSetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SsoAdminRequest(const Action action);
    SsoAdminRequest(const SsoAdminRequest &other);
    SsoAdminRequest &operator=(const SsoAdminRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SsoAdminRequest &other) const;


protected:
    /// @cond internal
    explicit SsoAdminRequest(SsoAdminRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsoAdminRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
