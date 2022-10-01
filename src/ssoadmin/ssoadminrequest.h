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
